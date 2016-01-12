#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup()
{
	ofSetFrameRate(40);

	hoeveelheid = 10; 
	plusEEN = 0; 


	for (int d = 0; d < hoeveelheid; d++)
	{
		Monster newMonster; // Hier dus toch geen haakjes achter pffffff zoveel tijd verloren
		newMonster.setup(ofRandom(0.1,2),ofRandom(ofGetWidth()),ofRandom(ofGetHeight()),ofRandom(20,100)); 
		Monstertje.push_back(newMonster); 

	}

	a.setup();

}

//--------------------------------------------------------------
void ofApp::update()
{
	ofBackground(0);
	

	for (int d = 0; d < Monstertje.size(); d++)
	{
		a.attract(Monstertje[d].massa,Monstertje[d].Location);

		Monstertje[d].applyForce(a.FinalForce);
		Monstertje[d].move(); 
	}

	cout << a.FinalForce << endl;
}

//--------------------------------------------------------------
void ofApp::draw()
{
	a.display();
	
	for (int d = 0; d < Monstertje.size(); d++)
	{
		Monstertje[d].display(); 
	}
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}
