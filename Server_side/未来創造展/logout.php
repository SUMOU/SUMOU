<?php
	
	$_SESSION = array();
	@session_destroy();

	if(isset($_COOKIE[session_name()])==true){
		setcookie(session_name(),'',time()-42000,'/');
	}

	header("Location:index.php");

?>