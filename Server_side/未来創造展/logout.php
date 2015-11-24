<<<<<<< HEAD
﻿<?php
	
	$_SESSION = array();
	@session_destroy();

	if(isset($_COOKIE[session_name()])==true){
		setcookie(session_name(),'',time()-42000,'/');
	}

	header("Location:index.php");

=======
﻿<?php
	
	$_SESSION = array();
	@session_destroy();

	if(isset($_COOKIE[session_name()])==true){
		setcookie(session_name(),'',time()-42000,'/');
	}

	header("Location:index.php");

>>>>>>> 0af71211fe254cc43d984da4c300c78a1426f74f
?>