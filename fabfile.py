#!/usr/bin/env python

from fabric.api import *
from fabric.colors import green, yellow
from datetime import datetime
import os


repo = 'https://github.com/QuintanaTech/site.git'
env.user = 'root'
# the servers where the commands are executed
env.hosts = ['glendaledesigns.com']

env.app_path = 'var/quintana.tech'


def pack_code():
    if os.path.exists('build'):
        local('rm -rf build')

    local('mkdir -p build/dist')
    local('mkdir -p build/tmp')
    with lcd('build/tmp'):
        local('git clone --depth 1 %s .' % repo)
        local('tar czf ../dist/site.tgz *')


def upload_code():
    run('mkdir -p $HOME/tmp')
    put('../tmp/licensing.tgz', '/root/tmp/')
    with cd(env.app_path):
        run('tar xzf $HOME/tmp/licensing.tgz')


def install_assets():
    print(green("Installing assets..."))
    with cd(env.app_path):
        run('php app/console assets:install')


def cacheclear():
    print(green("Clearing Cache..."))
    with cd(env.app_path):
        run('php app/console cache:clear --env=prod')


def httpdrst():
    print(green("Restarting Apache..."))
    run('service httpd restart')


def run_migrations():
    with cd(env.app_path):
        run('php app/console doctrine:migrations:migrate')


def composer_update():
    run('composer self-update')
    with cd(env.app_path):
        put('./composer.json', 'composer.json')
        put('./composer.lock', 'composer.lock')
        run('composer install')
    cacheclear()


@task()
def deploy():
    pack_code()
    # upload_code()
    # composer_update()
    # install_assets()
    # cacheclear()
    # run_migrations()

    print yellow('Don\'t forget to update the security config.')
