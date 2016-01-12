#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	ofSetFrameRate(90);

	cat1.setup(); 
	cat2.setup(); 
	cat3.setup();
	cat4.setup();
	cat5.setup();
}

//--------------------------------------------------------------
void ofApp::update(){

	cat1.move(ofGetMouseX(),ofGetMouseY(),0.05); 
	cat1.bounce(); 
	
	cat2.move(ofGetMouseX(),ofGetMouseY(),0.07); 
	cat2.bounce(); 

	cat3.move(ofGetMouseX(),ofGetMouseY(),0.09); 
	cat3.bounce();

	cat4.move(ofGetMouseX(),ofGetMouseY(),0.1); 
	cat4.bounce();

	cat5.move(ofGetMouseX(),ofGetMouseY(),0.5); 
	cat5.bounce();

}

//--------------------------------------------------------------
void ofApp::draw(){
	ofBackground(0);

	cat1.display(); 
	cat2.display();
	cat3.display();
	cat4.display();
	cat5.display();
}

