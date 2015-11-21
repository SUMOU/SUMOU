#pragma strict

var alpha : Color = Color(0.0, 0.0, 0.0, 0.05);

function Start () {
	GetComponent.<Renderer>().material.color.a = 0;
}

function Update () {

	if(GetComponent.<Renderer>().material.color.a >= 0){
		if (GetComponent.<Renderer>().material.color.a <= 1) {
			GetComponent.<Renderer>().material.color += alpha;
		}
	}
}