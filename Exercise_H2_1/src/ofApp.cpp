#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup()
{
	vissen.setup(); 
	zwaartekracht.set(0,-0.02f);
	wind.set(0.01,0);

	tijd = 0; 
}

//--------------------------------------------------------------
void ofApp::update()
{
	float noise = ofNoise(tijd);
	float windSpeed = ofMap(noise,0.0,1.0,-0.03,0.03);

	vissen.checkedge(); 
	wind.set(windSpeed,0.0);
	vissen.applyforce(wind); 
	vissen.applyforce(zwaartekracht); 
	vissen.bounce();

	tijd += 0.01; 
}

//--------------------------------------------------------------
void ofApp::draw()
{
	vissen.display(); 
}

