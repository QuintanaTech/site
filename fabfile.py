#!/usr/bin/env python

from dotenv import load_dotenv
from fabric.api import *
from fabric.colors import green, yellow
from fabric.contrib.files import exists
from os.path import join, dirname
import os


load_dotenv(join(dirname(__file__), '.env'))
repo = 'https://github.com/QuintanaTech/site.git'

env.user = os.environ.get('FAB_DEPLOY_USER')
# the servers where the commands are executed
env.hosts = str(os.environ.get('FAB_DEPLOY_HOST')).split(',')

env.app_path = os.environ.get('FAB_DEPLOY_PATH')

env.key_filename = os.environ.get('FAB_DEPLOY_KEY')


@task()
def clean():
    if os.path.exists('build'):
        local('rm -rf build')


@task()
def build():
    clean()
    local('mkdir -p build/dist')
    local('mkdir -p build/tmp')
    with lcd('build/tmp'):
        local('git clone --depth 1 %s .' % repo)
        version = local('git rev-parse --short HEAD', True)
        print 'Built version %s' % version
        local('rm fabfile.py')
        local('echo "%s" > .version' % version)
        local('tar czf ../dist/site.tgz ./.version *')


@task()
def upload():
    run('mkdir -p $HOME/tmp')
    put('build/dist/site.tgz', 'tmp/')


@task()
def deploy():
    next_path = '%s/next' % env.app_path
    run('mkdir -p %s' % next_path)
    with cd(next_path):
        run('tar xzf $HOME/tmp/site.tgz')
        run('ln -s $HOME/%s/shared/googled4dc48f17b9c9699.html web/googled4dc48f17b9c9699.html' % env.app_path)
        run('ln -s $HOME/%s/shared/files web/files' % env.app_path)
        run('ln -s $HOME/%s/shared/sites/all web/sites/all' % env.app_path)
        run('ln -s $HOME/%s/shared/sites/default/files web/sites/default/files' % env.app_path)
        run('ln -s $HOME/%s/shared/sites/default/private web/sites/default/private' % env.app_path)

    with cd(env.app_path):
        run('rm -rf previous')
        if exists('latest'):
            run('mv latest previous')

        run('unlink public_html')
        run('mv next latest')
        run('ln -s ./latest/web ./public_html')
        run('ln -s ../.env ./latest/.env')

    composer_update()

    print green('Deployed site to %s' % env.app_path)


@task()
def composer_update():
    run('composer self-update')
    with cd('%s/latest' % env.app_path):
        put('./composer.json', 'composer.json')
        put('./composer.lock', 'composer.lock')
        run('composer install')
