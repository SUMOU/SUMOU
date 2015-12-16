#pragma strict


//ライト取得用
var light1:GameObject;
var light2:GameObject;

//ライト場所フラグ
var back_flg:boolean = false;
var front_flg:boolean = true;

//ライト2移動フラグ
var light2_flg:boolean = false;


function Start () {

	//移動ライト取得
	light1 = GameObject.Find("move_light1");
	light2 = GameObject.Find("move_light2");

}

function Update () {

	//ライトを奥へ移動
	if(front_flg){

		//ライト（左）を移動
		if(light1.transform.position.z <= 88){
			light1.transform.position.z += 2;
			//移動間隔を空ける
			if(light1.transform.position.z >= 37 && light1.transform.position.z >= 38.9){
				light2_flg = true;
			}
		}

		//ライト（右）を移動
		if(light2.transform.position.z <= 88 && light2_flg){
			light2.transform.position.z += 2;
		}
		//手前へ移動する時間間隔を空ける
		else if(light2.transform.position.z > 88){
			if(front_flg){
				StartCoroutine("light_time1");
			}
		}

	}
	
	//ライトを手前に戻す
	if(back_flg){

		//ライト（左）を移動
		if(light1.transform.position.z >= 16){
			light1.transform.position.z -= 2;
			//移動間隔を空ける
			if(light1.transform.position.z >= 45 && light1.transform.position.z <= 46.9){
				light2_flg = true;
			}
		}

		//ライト（右）を移動
		if(light2.transform.position.z >= 16 && light2_flg){
			light2.transform.position.z -= 2;
		}
		//手前へ移動する時間間隔を空ける
		else if(light2.transform.position.z < 16){
			if(back_flg){
				StartCoroutine("light_time2");
			}
		}

	}

}


/***************************
* コルーチン（時間を空ける）
***************************/
function light_time1(): IEnumerator{

	front_flg = false;
	light2_flg = false;

	yield  WaitForSeconds(1f);	//1秒後以下の処理を行う

	back_flg = true;

}
function light_time2(): IEnumerator{
	back_flg = false;
	light2_flg = false;
	yield  WaitForSeconds(1f);
	front_flg = true;
}





