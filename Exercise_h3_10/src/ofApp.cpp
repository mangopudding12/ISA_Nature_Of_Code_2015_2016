#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup()
{
	hoeveelheid = 1; 
	ofSetFrameRate(25);

	for(int h = 0; h < hoeveelheid; h++)
	{
		Slang newSlang;
		newSlang.setup(15*(h+1),0.08*(h+1));
		Slangen.push_back(newSlang);
	}


}

//--------------------------------------------------------------
void ofApp::update()
{
	for(int h = 0; h < Slangen.size(); h++)
	{
		cout << Slangen[h].Velocity << endl;

		Slangen[h].move(); 
	}
}

//--------------------------------------------------------------
void ofApp::draw()
{
	for(int h = 0; h < Slangen.size(); h++)
	{
		Slangen[h].display(50,ofGetHeight()/2); 
	}
}
