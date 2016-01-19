#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup()
{
	straal = 100; 
	angle = 0; 
}

//--------------------------------------------------------------
void ofApp::update()
{
	richting = atan2(Location.y,Location.x);
	//cout << richting << endl;
}

//--------------------------------------------------------------
void ofApp::draw()
{
	ofPushMatrix();
	ofTranslate(ofGetWidth()/2,ofGetHeight()/2); 
		ofSetColor(200,10,100);
		ofSetLineWidth(5);
		ofLine(0,0,Location.x,Location.y);
	ofPopMatrix();
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key)
{
	angle += 0.1;
	Location.x = straal * cos(angle);
	Location.y = straal * sin(angle);

	richting_Locatie.x = straal * cos(richting);
	cout << richting_Locatie.x + (ofGetWidth()/2) << endl;
	cout << Location.x + (ofGetWidth()/2)<< "Ik weet niet zeker of ik het snap" << endl;
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}
