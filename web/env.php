<?php

/**
 * Class LocalDotEnv
 *
 * Workaround to use the Loader of DotEnv
 */
class LocalDotEnv extends \Dotenv\Dotenv {
    public function getLoader()
    {
        return $this->loader;
    }
}

$dotenv = new LocalDotEnv(dirname(__DIR__));
$dotenv->overload();

$versionFile = dirname(__DIR__).'/.version';
$version = file_exists($versionFile) ? @file_get_contents($versionFile) : 'develop';

$dotenv->getLoader()->setEnvironmentVariable('BUILD_VERSION', $version);
