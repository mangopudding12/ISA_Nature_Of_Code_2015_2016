#include "ofApp.h"

//--------------------------------------------------------------

void ofApp::setup(){

	stippie.setup(); 
}

//--------------------------------------------------------------
void ofApp::update(){

	if (ofGetKeyPressed() == true)
	{
		// Zorgt voor de mooie opstart
		stippie.move(-0.0001,0); 
	} else { 

		if (stippie.Speed.x > 0)
		{
			// Zorgt voor de geleidelijke afrem systeem
			stippie.move(0.0001,0); 
		}
	}
}

//--------------------------------------------------------------
void ofApp::draw(){
	stippie.display(); 
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
	//stippie.move(-0.0001,0); 
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){
	//stippie.move(0.0001,0); 
}