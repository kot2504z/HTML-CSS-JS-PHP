<?php

include_once './code/Template.php';

class PageTemplate extends Template {

    public function __construct($pageName) {
        parent::__construct('./theme/template/page/' . $pageName . '.php');
    }

}
