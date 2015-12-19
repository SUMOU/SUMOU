#pragma strict

//効果音
var source : AudioSource;
var SE : AudioClip;

// user(親要素)を取得
var user:GameObject;

// HP用
var slider:UI.Slider;// HP(GUI・Slider)用変数
private var Current_HP:float = 0;//hp
private var hp:float = 0.5;//hp

function Start () {

}

function Update () {

}

function OnTriggerEnter(collider:Collider){

	//張り手力
	var force = 20;

	//効果音取得
	source = this.gameObject.GetComponent(AudioSource);

	// 張り手の当たり判定(手の判定が身体に触れれば相手が後ろへ吹っ飛ぶ)
	var name = collider.gameObject.name;

	if(name == "CollisionPoint_enemy"){
		//効果音再生
		source.PlayOneShot(SE);

		//相手が吹っ飛ぶ
		collider.gameObject.GetComponent.<Rigidbody>().AddForce(Vector3.right * force,ForceMode.Impulse);
		Debug.Log(name + "にHit!");
	}
	
}