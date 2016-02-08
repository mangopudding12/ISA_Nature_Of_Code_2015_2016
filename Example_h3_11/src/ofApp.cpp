#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup()
{
	hoeveelheid = 10;

	for(int h = 0; h < hoeveelheid; h++)
	{
		Spring newSpring;
		newSpring.setup(50+(100*h),20,ofRandom(90,150));
		Springs.push_back(newSpring);

		Bob newBob;
		newBob.setup(Springs[h].Origin.x,Springs[h].Origin.y + Springs[h].restlength,ofRandom(3,20));
		Bobs.push_back(newBob);
	}
}

//--------------------------------------------------------------
void ofApp::update()
{
		ofVec2f zwaartekracht;
		zwaartekracht.set(0,0.01);

	for(int h = 0; h < Bobs.size(); h++)
	{

		Bobs[h].applyForce(zwaartekracht);

		
	}
}

//--------------------------------------------------------------
void ofApp::draw()
{
	for(int h = 0; h < Bobs.size(); h++)
	{
		ofVec2f springForce = Springs[h].connect(Bobs[h]); 
		Bobs[h].applyForce(springForce);
		
		Bobs[h].update();
		


		Bobs[h].display();
		Springs[h].display(Bobs[h]); 
	}
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key)
{

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key)
{

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

