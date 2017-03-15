#!/bin/sh
set -e

chown -R www-data:www-data /var/www/html/src/sites/default/files

# first arg is `-f` or `--some-option`
if [ "${1#-}" != "$1" ]; then
	set -- php "$@"
fi

exec "$@"
