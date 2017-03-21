<?php

/**
 * @file
 * PHP page for handling incoming XML-RPC requests from clients.
 */

/**
 * Root directory of Drupal installation.
 */
define('DRUPAL_ROOT', getcwd());

require_once dirname(__DIR__).'/vendor/autoload.php';
require_once DRUPAL_ROOT.'/env.php';

include_once DRUPAL_ROOT . '/includes/bootstrap.inc';
drupal_bootstrap(DRUPAL_BOOTSTRAP_FULL);
include_once DRUPAL_ROOT . '/includes/xmlrpc.inc';
include_once DRUPAL_ROOT . '/includes/xmlrpcs.inc';

xmlrpc_server(module_invoke_all('xmlrpc'));
