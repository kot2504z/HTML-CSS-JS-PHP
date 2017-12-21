<?php
include_once 'TableHTML.php';
//....
include_once 'TableHTML.php'; //mozna wielokrotnie includować
?><!DOCTYPE html>
<html>
    <head>
        <meta charset="UTF-8">
        <title>test php</title>
        <style>
            table, td {
                border:1px solid #000; 
                border-collapse: collapse;
            }
        </style>
    </head>
    <body>
        <?php
        $a = array(
            array("Nag1", "Nag2", "Nag3", "Nag4"),
            array("A", "B", "C", "X"),
            array("A", "X"),
            array("G", "H", "I", "X")
        );

        $b = array(
            array("X", "Y", "Z"),
            array("A", "B", "C")
        );
        ?>

        <pre><?php var_dump($_GET); ?></pre>

        <?php
        $htmlTable = '';

//        $tab = 'a';
//        if (isset($_GET['tab'])) {
//            $tab = $_GET['tab'];
//        }
        $tab = isset($_GET['tab']) ? $_GET['tab'] : 'a';

        switch ($tab) {
            case 'a':
                $htmlTable = getTable($a);
                break;
            case 'b':
                $htmlTable = getTable($b);
                break;
            default:
                $htmlTable = '<h1>Brak tabelki</h1>';
                break;
        }

        ?>
        <div>
            <ul>
                <li><a href="?tab=a">A</a></li>
                <li><a href="?tab=b">B</a></li>
            </ul>
        </div>
        <div>
            <?php echo $htmlTable; ?>
        </div>

        <hr/>
        <pre><?php var_dump($_POST); ?></pre>
        <hr/>
        <?php
        if (count($_POST) > 0) {
//            if (isset($_POST['login']) && isset($_POST['pass'])) {
//                if ($_POST['login'] == 'admin' && $_POST['pass'] == '1234') {
//                    echo '<h1>zalogowano</h1>';
//                } else {
//                    echo '<h1>złe dane</h1>';
//                }
//            }

            include_once './code/Login.php';
            ValidateLogin(isset($_POST['login']) ? $_POST['login'] : '', 
                    isset($_POST['pass']) ? $_POST['pass'] : '');
        }
        ?>
        <hr/>
        <?php include './FormTemplate.php'; ?>
    </body>
</html>
