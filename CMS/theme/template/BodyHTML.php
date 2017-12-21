<div class="wrapper">
    <div class="header"><?php echo $this->get('header'); ?></div>
    <div class="content">

        <?php if ($this->get('IsAAA')) { ?>
            <div style="border:10px solid red;">
                <?php echo $this->get('AAA'); ?>
            </div>
        <?php } ?>

        <?php echo $this->get('content'); ?>
    </div>
    <div class="footer"><?php echo $this->get('footer'); ?></div>

</div>