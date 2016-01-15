#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup()
{
	hoeveelheid = 1; 

	for (int y = 0; y < hoeveelheid; y++)
	{
		Car newCar;
		newCar.setup(ofRandom(300,600),ofRandom(ofGetHeight()-100,ofGetHeight()-300),40); 
		Cars.push_back(newCar);
	}
}

//--------------------------------------------------------------
void ofApp::update()
{
	for (int h = 0; h < Cars.size(); h++)
	{
		Cars[h].OUTscreen();
		Cars[h].move(toets); 
	}

}

//--------------------------------------------------------------
void ofApp::draw()
{
	for (int h = 0; h < Cars.size(); h++)
	{
		Cars[h].display(); 
	}
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key)
{
	toets = key; 
	//cout << toets << endl;
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key)
{
	toets = 0;
}
