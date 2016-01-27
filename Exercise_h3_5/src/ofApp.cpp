#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup()
{
	hoeveelheid = 1; 

	for (int h = 0; h < hoeveelheid; h++)
	{
		Raket newKogel;
		newKogel.setup(ofGetWidth()/2,ofGetHeight()/2,50); 
		Rakets.push_back(newKogel);
	}

}

//--------------------------------------------------------------
void ofApp::update()
{
	ofBackground(0);

	for (int h = 0; h < Rakets.size(); h++)
	{
		Rakets[h].OUTscreen(); 
		Rakets[h].sturen(toets); 
		Rakets[h].gasgeven(); 
	}
}

//--------------------------------------------------------------
void ofApp::draw()
{
		


	for (int h = 0; h < Rakets.size(); h++)
	{
		Rakets[h].display(); 
	}
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key)
{
	toets = key;	// Zorgen dat toets wordt omgezet naar de toets die dan wordt in gedrukt.
	
	if (key == 32)
	{	
		for (int h = 0; h < Rakets.size(); h++)
		{
			// Het omzetten van normale cijfer naar graden 
			float angle = ofMap(Rakets[h].draaien, 0 , 360, 0, TWO_PI);

			ofVec2f force_; 
			force_.set(cos(angle),sin(angle));
			force_ *= 0.1;
			Rakets[h].applyForce(force_); 
			Rakets[h].kracht = true;
			cout << force_ << endl;
		}
	}
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key)
{
		for (int h = 0; h < Rakets.size(); h++)
		{
			Rakets[h].kracht = false;
		}

	toets = 0;
}
