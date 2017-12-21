<?php

session_start();

try {

    $pageAddr = isset($_GET['page']) ? $_GET['page'] : 'index';

    include_once './code/Template.php';
    include_once './code/PageTemplate.php';
    include_once './code/MenuGenerator.php';
    include_once './code/Login.php';


    $html = new Template('./theme/template/HTML.php');
    $html->set('head', '<meta charset="UTF-8"/><title>Simple CMS</title>');


    $menuGen = new MenuGenerator();

    $menuGen->Add('?page=index', 'Home', 'Home page');
    $menuGen->Add('?page=info', 'Info', 'Info page');

    if (IsUserLoged()) {
        $menuGen->Add('?page=admin', 'Admin', 'Admin page');
        $menuGen->Add('?page=logout', 'Logout', 'Logout page');
    } else {
        $menuGen->Add('?page=login', 'Login', 'Login page');
    }

    $body = new Template('./theme/template/BodyHTML.php');
    $body->set('header', '<h1>Simple CMS</h1>' . $menuGen->ToHtml());

    $body->set('footer', '© 2017');

    $page = null;

    switch ($pageAddr) {
        case 'info':
            $page = new PageTemplate('info');
            break;

        case 'admin':
            if (!IsUserLoged()) {
                header('Location: ?page=login');
                die();
            }
            $page = new PageTemplate('admin');
            //$page->set('Username', $_SESSION['user']['Username']);
            break;

        case 'login':
            $successLogin = IsUserLoged();

            if (!$successLogin && count($_POST) > 0) {
                $successLogin = ValidateLogin(isset($_POST['login']) ? $_POST['login'] : '', isset($_POST['pass']) ? $_POST['pass'] : '');
            }
            $page = new PageTemplate('login');
            $page->set('isUserLoged', $successLogin);

            if ($successLogin) {
                $page->set('UserData', $_SESSION['user']);
            }
            break;

        case 'logout':
            $isLoged = isset($_SESSION['user']);
            if ($isLoged) {
                session_destroy();
            }
            header('Location: ?');
            die();
            break;

        case 'index':
        default:
            $page = new PageTemplate('index');
            break;
    }

    $body->set('content', $page->ToString());
    $body->set('IsAAA', false);
    $body->set('AAA', 'hello');

    $html->set('body', $body->ToString());
    echo $html->ToString();
} catch (Exception $ex) {
    echo $ex->getMessage();
}