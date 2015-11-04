<!DOCTYPE>
<html>
	<head>
		<meta http-equiv="Content-Type" content="text/html; charset=utf-8" />
		<title></title>
		<link rel="stylesheet" type="text/css" href="css/style.css" />
	</head>
	<body>
	<?php
	session_start();
	session_regenerate_id(true);
	if(isset($_SESSION['login'])==false){
		 ?>
		 <p>ログインされていません。</p>
		 <a href="index.php">ログインページに戻ってください。</a>
		 <?php
		 exit;
	}
	?>
	<?php
	$username = $_SESSION['username'];
	echo "ようこそ「".$username."」さん";
	?>
	<p><a href="touch.html">ゲーム開始スタンバイ</a></p>
	<p><a href="">観戦</a></p>
	<p><a href="">ランキング</a></p>
	<a href="logout.php">ログアウト!</a>
	</body>
</html>