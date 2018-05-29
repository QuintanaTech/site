FROM php:5.6-apache

COPY entry.sh /entry.sh

RUN apt-get update && apt-get install -y \
        libfreetype6-dev \
        libjpeg62-turbo-dev \
        libmcrypt-dev \
        libpng12-dev \
    && docker-php-ext-configure gd --with-jpeg-dir=/usr/include/ \
    && docker-php-ext-install mysql mysqli pdo pdo_mysql gd zip \
    && php -r "copy('https://getcomposer.org/installer', 'composer-setup.php');" \
    && php composer-setup.php --install-dir=/usr/local/bin --filename=composer \
    && php -r "unlink('composer-setup.php');" \
    && a2enmod rewrite \
    && chmod +x /entry.sh

ENTRYPOINT ["/entry.sh"]

WORKDIR /var/www

CMD ["apache2-foreground"]