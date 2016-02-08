#include "ofApp.h"

//--------------------------------------------------------------

void ofApp::setup()
{
	ofSetFrameRate(40);
	stippie.setup(); 
}

//--------------------------------------------------------------
void ofApp::update(){
	stippie.move(); 
}

//--------------------------------------------------------------
void ofApp::draw(){
	stippie.display(); 
}

