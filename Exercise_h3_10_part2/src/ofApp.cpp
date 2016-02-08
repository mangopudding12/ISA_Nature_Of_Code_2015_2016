#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup()
{
	hoeveelheid = 7; 
	ofSetFrameRate(40);

	
		
	for(int h = 0; h < hoeveelheid; h++)
	{
		Slang newSlangg;
		// xspacing -> amplitude -> periode
		newSlangg.setup(2*((h+1)*2.5),100+((h+2)*25),800);
		Slangen.push_back(newSlangg);
	}

}

//--------------------------------------------------------------
void ofApp::update()
{
	for(int h = 0; h < Slangen.size(); h++)
	{
		// velcity ->
		Slangen[h].move(0.08); 
	}
}

//--------------------------------------------------------------
void ofApp::draw()
{
	for(int h = 0; h < Slangen.size(); h++)
	{
		// Here you must set the origin of the was first -> x -> y -> radius -> lengthgolf
		Slangen[h].display(5+(h*100),ofGetHeight()-((h)*200),100/((h+1)*4),100+((h+2)*50)); 
	}
}
