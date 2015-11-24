<?php
	//もし名前が入力されていなかったら名前がん入力されていませんと出力
	if($_POST['name'] == ""){
		echo "名前が入力されていません。";
		?><a href="index.php">戻る<a><?php
	}else{
		//ログイン処理
		try {
		$username = $_POST['name'];
		$cookie = $_COOKIE['TestCookie'];
		
		$username = htmlspecialchars($username);
		//データベース接続
			$dsn='mysql:dbname=nodetest;host=localhost';
			$user='root';
			$password='root';
			$dbh=new PDO($dsn,$user,$password);
			$dbh->query('SET NAMES utf8');

			$sql='SELECT id FROM user2 WHERE name=? AND cookie=?';
			$stmt = $dbh->prepare($sql);
			$data[] = $username;
			$data[] = $cookie;
			$stmt->execute($data);

			$dbh=null;

			$rec=$stmt->fetch(PDO::FETCH_ASSOC);

			if($rec==false) {
		?>

			<?php
			//会員登録処理

			$time = time();
			$username = $_POST['name'];
			
			$username = htmlspecialchars($username);
			//データベース接続
				$dsn2='mysql:dbname=nodetest;host=localhost';
				$user2='root';
				$password2='root';
				$dbh2=new PDO($dsn2,$user2,$password2);
				$dbh2->query('SET NAMES utf8');

				$sql2='INSERT INTO user2 (name,cookie)VALUES(?,?)';
				$stmt2 = $dbh2->prepare($sql2);
				$data2[] = $username;
				$data2[] = $time;
				$stmt2->execute($data2);

				$dbh2=null;

				setcookie("TestCookie", $time, time()+3600); 
				session_start();
				$_SESSION['login']=1;
				$_SESSION['userid']=$rec2['id'];
				$_SESSION['username']=$username;
				header("Location:mypage.php");

	
				?>
			
		<?php
		}else{
		session_start();
		$_SESSION['login']=1;
		$_SESSION['userid']=$rec['id'];
		$_SESSION['username']=$username;
		header("Location:mypage.php");
	}

		}
		catch(Exception $e){
		echo "データベース障害のため接続できません。大変ご迷惑をおかけしています。";
		exit;
		}
	}
?>