#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup()
{
	hoeveelheid = 1; 
	ofSetFrameRate(25);

		
	for(int h = 0; h < hoeveelheid; h++)
	{
		pendel newSlangg;
		newSlangg.setup();
		pendell.push_back(newSlangg);
	}

}

//--------------------------------------------------------------
void ofApp::update()
{
	for(int h = 0; h < pendell.size(); h++)
	{
		pendell[h].move(); 
	}
}

//--------------------------------------------------------------
void ofApp::draw()
{
	for(int h = 0; h < pendell.size(); h++)
	{
		pendell[h].display(); 
	}
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}
