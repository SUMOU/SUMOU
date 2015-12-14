#pragma strict

//削除命令用座布団番号用
var zab:int=0;

//飛ばす座布団指定乱数用
var r:int;

//全座布団取得用
//左
var zabuton0:GameObject;
var zabuton1:GameObject;
var zabuton2:GameObject;
//奥
var zabuton3:GameObject;
var zabuton4:GameObject;
var zabuton5:GameObject;
//右
var zabuton6:GameObject;
var zabuton7:GameObject;
var zabuton8:GameObject;
//手前
var zabuton9:GameObject;
var zabuton10:GameObject;
var zabuton11:GameObject;


//falseのときは該当の座布団を飛ばせる
var flg0 = false;
var flg1 = false;
var flg2 = false;

var flg3 = false;
var flg4 = false;
var flg5 = false;

var flg6 = false;
var flg7 = false;
var flg8 = false;

var flg9 = false;
var flg10 = false;
var flg11= false;


//座布団削除命令重複回避用フラグ
var zflg = new Array ();
zflg[0] = false;
zflg[1] = false;
zflg[2] = false;

zflg[3] = false;
zflg[4] = false;
zflg[5] = false;

zflg[6] = false;
zflg[7] = false;
zflg[8] = false;

zflg[9] = false;
zflg[10] = false;
zflg[11] = false;


function Start () {

	//座布団取得
	zabuton0 = GameObject.Find("zabuton0");
	zabuton1 = GameObject.Find("zabuton1");
	zabuton2 = GameObject.Find("zabuton2");

	zabuton3 = GameObject.Find("zabuton3");
	zabuton4 = GameObject.Find("zabuton4");
	zabuton5 = GameObject.Find("zabuton5");

	zabuton6 = GameObject.Find("zabuton6");
	zabuton7 = GameObject.Find("zabuton7");
	zabuton8 = GameObject.Find("zabuton8");

	zabuton9 = GameObject.Find("zabuton9");
	zabuton10 = GameObject.Find("zabuton10");
	zabuton11 = GameObject.Find("zabuton11");

}


function Update () {

	//応援があった
	//Aキー押下
	if(Input.GetKeyDown(KeyCode.A)){

		//飛ばす座布団番号 乱数
		r = Random.Range(0,12);

		//左座席0座布団
		if(r==0){
			//以前同位置から投げた座布団が消えるまで処理させない
			if(flg0 == false){
				flg0 = true;
				
				//座布団複製
				var clone0 = Instantiate(zabuton0 , Vector3(-74.2,5.2,13.4) , Quaternion.identity);

				var zbt0:GameObject = GameObject.Find("zabuton0(Clone)");

				//座布団を飛ばす
				var rb0 = zbt0.GetComponent.<Rigidbody>();
				  rb0.AddForce(
				  Vector3(30 , 20 , 0),
				  ForceMode.VelocityChange
				);
			}
		}
		//左座席1座布団
		else if(r==1){
			if(flg1 == false){
				flg1 = true;
				var clone1 = Instantiate(zabuton1 , Vector3(-74.2,5.2,-14.5) , Quaternion.identity);
				var zbt1:GameObject = GameObject.Find("zabuton1(Clone)");
				var rb1 = zbt1.GetComponent.<Rigidbody>();
				  rb1.AddForce(
				  Vector3(27 , 18 , 0),
				  ForceMode.VelocityChange
				);
			}
		}
		//左座席2座布団
		else if(r==2){
			if(flg2 == false){
				flg2 = true;
				var clone2 = Instantiate(zabuton2 , Vector3(-84,7.6,0) , Quaternion.identity);
				var zbt2:GameObject = GameObject.Find("zabuton2(Clone)");
				var rb2 = zbt2.GetComponent.<Rigidbody>();
				  rb2.AddForce(
				  Vector3(30 , 20 , 0),
				  ForceMode.VelocityChange
				);
			}
		}

		//奥座席3座布団
		if(r==3){
			if(flg3 == false){
				flg3 = true;
				var clone3 = Instantiate(zabuton3 , Vector3(45.6,5.2,104.7) , Quaternion.identity);
				var zbt3:GameObject = GameObject.Find("zabuton3(Clone)");
				var rb3 = zbt3.GetComponent.<Rigidbody>();
				  rb3.AddForce(
				  Vector3(0 , 20 , -30),
				  ForceMode.VelocityChange
				);
			}
		}
		//奥座席4座布団
		else if(r==4){
			if(flg4 == false){
				flg4 = true;
				var clone4 = Instantiate(zabuton4 , Vector3(14.8,5.2,104.7) , Quaternion.identity);
				var zbt4:GameObject = GameObject.Find("zabuton4(Clone)");
				var rb4 = zbt4.GetComponent.<Rigidbody>();
				  rb4.AddForce(
				  Vector3(0 , 18 , -27),
				  ForceMode.VelocityChange
				);
			}
		}
		//奥座席5座布団
		else if(r==5){
			if(flg5 == false){
				flg5 = true;
				var clone5 = Instantiate(zabuton5 , Vector3(30.5,7.6,115) , Quaternion.identity);
				var zbt5:GameObject = GameObject.Find("zabuton5(Clone)");
				var rb5 = zbt5.GetComponent.<Rigidbody>();
				  rb5.AddForce(
				  Vector3(0 , 20 , -30),
				  ForceMode.VelocityChange
				);
			}
		}

		//右座席6座布団
		if(r==6){
			if(flg6 == false){
				flg6 = true;
				var clone6 = Instantiate(zabuton6 , Vector3(137,5.2,-14.5) , Quaternion.identity);
				var zbt6:GameObject = GameObject.Find("zabuton6(Clone)");
				var rb6 = zbt6.GetComponent.<Rigidbody>();
				  rb6.AddForce(
				  Vector3(-30 , 20 , 0),
				  ForceMode.VelocityChange
				);
			}
		}
		//右座席7座布団
		else if(r==7){
			if(flg7 == false){
				flg7 = true;
				var clone7 = Instantiate(zabuton7 , Vector3(137,5.2,13.4) , Quaternion.identity);
				var zbt7:GameObject = GameObject.Find("zabuton7(Clone)");
				var rb7 = zbt7.GetComponent.<Rigidbody>();
				  rb7.AddForce(
				  Vector3(-27 , 18 , 0),
				  ForceMode.VelocityChange
				);
			}
		}
		//右座席8座布団
		else if(r==8){
			if(flg8 == false){
				flg8 = true;
				var clone8 = Instantiate(zabuton8 , Vector3(147,7.6,0) , Quaternion.identity);
				var zbt8:GameObject = GameObject.Find("zabuton8(Clone)");
				var rb8 = zbt8.GetComponent.<Rigidbody>();
				  rb8.AddForce(
				  Vector3(-30 , 20 , 0),
				  ForceMode.VelocityChange
				);
			}
		}

		//手前座席9座布団
		if(r==9){
			if(flg9 == false){
				flg9 = true;
				var clone9 = Instantiate(zabuton9 , Vector3(14.8,5.2,-105) , Quaternion.identity);
				var zbt9:GameObject = GameObject.Find("zabuton9(Clone)");
				var rb9 = zbt9.GetComponent.<Rigidbody>();
				  rb9.AddForce(
				  Vector3(0 , 20 , 30),
				  ForceMode.VelocityChange
				);
			}
		}
		//手前座席10座布団
		else if(r==10){
			if(flg10 == false){
				flg10 = true;
				var clone10 = Instantiate(zabuton10 , Vector3(45.6,5.2,-105) , Quaternion.identity);
				var zbt10:GameObject = GameObject.Find("zabuton10(Clone)");
				var rb10 = zbt10.GetComponent.<Rigidbody>();
				  rb10.AddForce(
				  Vector3(0 , 18 , 27),
				  ForceMode.VelocityChange
				);
			}
		}
		//手前座席11座布団
		else if(r==11){
			if(flg11 == false){
				flg11 = true;
				var clone11 = Instantiate(zabuton11 , Vector3(30.5,7.6,-115) , Quaternion.identity);
				var zbt11:GameObject = GameObject.Find("zabuton11(Clone)");
				var rb11 = zbt11.GetComponent.<Rigidbody>();
				  rb11.AddForce(
				  Vector3(0 , 20 , 30),
				  ForceMode.VelocityChange
				);
			}
		}

	}
}


/***********************
*座布団当たり判定にHIT
***********************/
function OnCollisionEnter(obj:Collision){

	//当たった物体の名前を取得
	var name = obj.gameObject.name;
	
	if(name == "zabuton0(Clone)"){
		zab=0;
	}
	else if(name == "zabuton1(Clone)"){
		zab=1;
	}
	else if(name == "zabuton2(Clone)"){
		zab=2;
	}
	else if(name == "zabuton3(Clone)"){
		zab=3;
	}
	else if(name == "zabuton4(Clone)"){
		zab=4;
	}
	else if(name == "zabuton5(Clone)"){
		zab=5;
	}
	else if(name == "zabuton6(Clone)"){
		zab=6;
	}
	else if(name == "zabuton7(Clone)"){
		zab=7;
	}
	else if(name == "zabuton8(Clone)"){
		zab=8;
	}
	else if(name == "zabuton9(Clone)"){
		zab=9;
	}
	else if(name == "zabuton10(Clone)"){
		zab=10;
	}
	else if(name == "zabuton11(Clone)"){
		zab=11;
	}

	//投げた座布団が消えるまで同じ場所から投げさせない
	if(zflg[zab] == false){
		StartCoroutine("zabDelete",zab);
	}

}


/**************************
* コルーチン（座布団削除）
**************************/
function zabDelete(zab): IEnumerator{

	//削除命令の重複防止
	zflg[zab] = true;
	
	yield  WaitForSeconds(2f);
	Destroy(GameObject.Find("zabuton"+zab+"(Clone)"));
	
	//座布団を消したので削除命令に入れるようになる
	zflg[zab] = false;

	//再度当該位置から座布団を投げられるようにする
	if(zab==0){
		flg0 = false;
	}
	else if(zab==1){
		flg1 = false;
	}
	else if(zab==2){
		flg2 = false;
	}
	else if(zab==3){
		flg3 = false;
	}
	else if(zab==4){
		flg4 = false;
	}
	else if(zab==5){
		flg5 = false;
	}
	else if(zab==6){
		flg6 = false;
	}
	else if(zab==7){
		flg7 = false;
	}
	else if(zab==8){
		flg8 = false;
	}
	else if(zab==9){
		flg9 = false;
	}
	else if(zab==10){
		flg10 = false;
	}
	else if(zab==11){
		flg11 = false;
	}

}
