#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup()
{
	period = 900; 
	amplitude = 350; 
	radius = 40;
}

//--------------------------------------------------------------
void ofApp::update()
{
	Location.x = amplitude * cos(TWO_PI * ofGetFrameNum() / period);
}

//--------------------------------------------------------------
void ofApp::draw()
{
	ofTranslate(ofGetWidth()/2,ofGetHeight()/2);
	ofSetLineWidth(3);
	ofSetColor(10,15,150);
	ofLine(0,0,Location.x,Location.y);
	ofEllipse(Location.x,Location.y,radius,radius);
}
