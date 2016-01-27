#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup()
{
	hoeveelheid = 100; 

	for (int h = 0; h < hoeveelheid; h++)
	{
		insect newKogel;
		newKogel.setup(ofRandom(10,60),ofRandom(30,350),ofRandom(30,350),ofRandom(0.003,0.006),ofRandom(0.003,0.006),ofRandom(0,255),ofRandom(0,255),ofRandom(0,255)); 
		Insects.push_back(newKogel);
	}
}

//--------------------------------------------------------------
void ofApp::update()
{
	for (int h = 0; h < Insects.size(); h++)
	{
		Insects[h].move(); 
	}
}

//--------------------------------------------------------------
void ofApp::draw()
{
	for (int h = 0; h < Insects.size(); h++)
	{
		Insects[h].display(); 
	}
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}
