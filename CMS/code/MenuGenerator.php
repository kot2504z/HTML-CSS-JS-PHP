<?php

class MenuGenerator {

    private $menuItems;

    public function __construct() {
        $this->menuItems = array();
    }

    public function Add($link, $label, $title) {
        $this->menuItems[] = array(
            'link' => $link,
            'label' => $label,
            'title' => $title
        );
    }

    public function ToHtml() {
        $output = '<ul>';

        for ($i = 0; $i < count($this->menuItems); $i++) {
            $output .= '<li><a href="'
                    . $this->menuItems[$i]['link']
                    . '" title="' .
                    $this->menuItems[$i]['title'] . '">'
                    . $this->menuItems[$i]['label']
                    . '</a></li>';
        }
        $output .= '</ul>';
        return $output;
    }

}