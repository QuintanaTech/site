#!/bin/sh
set -e

rm -rf /var/www/html
ln -s /var/www/web /var/www/html
chown -R www-data:www-data /var/www/html/sites/default/files

# first arg is `-f` or `--some-option`
if [ "${1#-}" != "$1" ]; then
	set -- php "$@"
fi

exec "$@"
