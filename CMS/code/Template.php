<?php

class Template {

    private $fileName;

    public function __construct($fileName) {
        $this->fileName = $fileName;
    }

    private $data = array();

    public function set($key, $value) {
        $this->data[$key] = $value;
    }

    public function get($key) {
        if (isset($this->data[$key]))
            return $this->data[$key];
        throw new Exception('In template ' . $this->fileName . ' key ' . $key . ' is not set');
    }

    public function ToString() {
        ob_start();
        include $this->fileName;
        return ob_get_clean();
    }

}