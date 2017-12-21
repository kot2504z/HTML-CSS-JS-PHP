<?php

function ValidateLogin($login, $pass) {
    $login = trim($login);
    $pass = trim($pass);
//    if (isset($_POST['login'])) {
//        $login = trim($_POST['login']);
//    }
//    if (isset($_POST['pass'])) {
//        $pass = trim($_POST['pass']);
//    }

    if (strlen($login) > 0 && strlen($pass) > 0) {

        if ($login == 'admin') {
            if ($pass == '1234') {

                $_SESSION['user'] = array(
                    'Username' => 'admin',
                    'Role' => 0
                );

                ///echo '<h1>Zalogowano</h1>';
                return true;
            } else {
                //echo '<h1>Złe hasło, może przypomnienie?</h1>';
            }
        } else {
            //echo '<h1>Brak konta</h1>';
        }
    } else {
        //echo '<h1>Nie podano danych</h1>';
    }
    return false;
}

function IsUserLoged() {
    return isset($_SESSION['user']);
}