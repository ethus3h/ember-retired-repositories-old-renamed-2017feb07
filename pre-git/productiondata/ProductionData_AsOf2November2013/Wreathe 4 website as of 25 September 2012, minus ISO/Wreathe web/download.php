<?php
header('Content-disposition: attachment; filename=wreathe4.iso');
header('Content-type: application/iso-image');
readfile('wreathe4.iso');