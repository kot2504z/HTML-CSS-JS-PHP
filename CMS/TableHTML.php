<?php

//if (!function_exists("getTable")) {

function getTable($tab) {

    $output = '<table>';

    $max = 0;
    for ($i = 0; $i < count($tab); $i++) {
        if ($max < count($tab[$i])) {
            $max = count($tab[$i]);
        }
    }

    for ($i = 0; $i < count($tab); $i++) {
        $output .= getRows($tab[$i], $max);
    }

    $output .= '</table>';

    return $output;
}

function getRows($tab, $max) {
    $output = '<tr>';
    for ($j = 0; $j < $max; $j++) {
        $output .= '<td>' . (isset($tab[$j]) ? $tab[$j] : '&nbsp;') . '</td>';
    }
    $output .= '</tr>';
    return $output;
}

//}