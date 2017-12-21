<?php
if (!$this->get('isUserLoged')) {
    ?>
    <form method="POST" action="">
        <p>
            <label for="login">Username</label>
            <input type="text" id="login" name="login"/>
        </p>
        <p>
            <label for="pass">Password</label>
            <input type="password" id="pass" name="pass"/>
        </p>
        <p>
            <input type="submit" value="Login"/>
        </p>
    </form>
    <?php
} else {
    echo '<h1>Zalogowano</h1>';
    echo '<h2>Witaj ' . $this->get('UserData')['Username'] . '!</h2>';
}