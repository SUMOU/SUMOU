#pragma strict

function Start () {
	var MainCam = gameObject.Find("MainCamera");//メインカメラ
	var FirstCam = gameObject.Find("Camera_FirstPerson");//一人称用カメラ
}

function Update () {

	if(transform.position.z <= 7){
		transform.position.z += 1;
	}//徐々に名前が近づいてくる。

	//アニメーション終了時にhakuho・asashoryuが削除される
	var asashoryu = gameObject.Find("asashoryu");
	var hakuho = gameObject.Find("hakuho");
	Destroy(asashoryu,10);
	Destroy(hakuho,10);

	// transform.position.z = 7; //期待値z軸25
	//アニメーション終了と同時にカメラが切り替わる
	


}