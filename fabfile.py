#!/usr/bin/env python

from dotenv import load_dotenv
from fabric.api import *
from fabric.colors import green, yellow
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
def pack_code():
    clean()
    local('mkdir -p build/dist')
    local('mkdir -p build/tmp')
    with lcd('build/tmp'):
        local('git clone --depth 1 %s .' % repo)
        version = local('git rev-parse --short HEAD', True)
        print 'Built version %s' % version
        local('rm fabfile.py')
        local('rm web/install.php web/upgrade.php INSTALL*')
        local('tar czf ../dist/site.tgz *')


def upload_code():
    run('mkdir -p $HOME/tmp')
    put('build/dist/site.tgz', 'tmp/')
    with cd(env.app_path):
        run('tar xzf $HOME/tmp/site.tgz')
        run('rm -rf public_html')
        run('ln -s ./web ./public_html')


@task()
def composer_update():
    run('composer self-update')
    with cd(env.app_path):
        put('./composer.json', 'composer.json')
        put('./composer.lock', 'composer.lock')
        run('composer install')


@task()
def deploy():
    pack_code()
    upload_code()
    composer_update()

    print green('Deployed site to %s' % env.app_path)
