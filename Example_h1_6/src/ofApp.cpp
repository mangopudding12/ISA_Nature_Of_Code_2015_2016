#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup()
{
	
}

//--------------------------------------------------------------
void ofApp::update()
{
	locatie.set (mouseX,mouseY); 
	center.set(ofGetWindowWidth()/2,ofGetWindowHeight()/2);  

	//locatie-= center; // Zet de muis in het midden van het scherm gelijk met de ofline 
	//grotemagnitude = locatie.length(); 


	//Normalizing means to scale the vector so that its length (magnitude) is exactly 1, at which stage all that is left is the direction. 
	//A normalized vector is usually called a unit vector, and can be used to represent a pure direction (heading).
	locatie.normalize(); 
	locatie*= 200; 
}

//--------------------------------------------------------------
void ofApp::draw()
{
	ofSetColor(200,100,150); 
	ofRect(0,400,grotemagnitude,10);
	
	ofSetLineWidth(4);
	ofTranslate(ofGetWidth()/2,ofGetHeight()/2);
	ofLine(0,0,locatie.x,locatie.y); // zet de ofline in het midden van het scherm 
}

