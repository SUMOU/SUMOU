#pragma strict

var flg:boolean=false;

function Start () {

}

function Update () {

}

function OnCollisionEnter(obj:Collision){
	
	if(flg == false){
		
		// 壁に衝突したか否かで勝敗を判定する
		var name = obj.gameObject.name;
		if(name == "CollisionPoint_enemy"){
			res("勝利");
		}else if(name == "CollisionPoint_user"){
			res("敗北");
		}else{
			
		}
	}

}


function res(WL){

	flg = true;
	Debug.Log(WL);
	
	if(WL=="勝利"){
		GameObject.Find("res_switch").transform.position.x = 20;
	}
	else if(WL=="敗北"){
		GameObject.Find("res_switch").transform.position.x = 30;
	}

}
