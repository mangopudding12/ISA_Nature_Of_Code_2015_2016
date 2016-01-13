#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup()
{
	Kanons.setup(ofGetWidth()/2,ofGetHeight()/2,50); // positie van kanon 
}

//--------------------------------------------------------------
void ofApp::update()
{
	for (int h = 0; h < Kogels.size(); h++)
	{
		Kogels[h].move(); 
	}

	Kanons.keyPressed(toets); // Zorgen dat kanon reageert op de toetsen 
}

//--------------------------------------------------------------
void ofApp::draw()
{
	
	for (int h = 0; h < Kogels.size(); h++)
	{
		Kogels[h].display(); 
	}
 
	Kanons.display(); // Afbeelden van kanon 
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key)
{
	toets = key;	// Zorgen dat toets wordt omgezet naar de toets die dan wordt in gedrukt.

	if (key == 32)
	{
		Kogel newKogel;
		newKogel.setup(Kanons.Location); 
		Kogels.push_back(newKogel);

		
		
		for (int h = 0; h < Kogels.size(); h++)
		{
			// Hello Reed
			// Here is the problem 
			// I try to code
			// when you press button 32 (spacebare)
			// Make a new kogel (Kogel is Dutch for bullet) push it in a vector 
			// and than I want to give the kogel a force in the direction where the kanon (kanon is Dutch for Cannon) is pionting.
			// I really don't now to tell the kogel where the kanon is pionting ?

			// I was thinking it was something with rotate function of the translate function I used but only wrong thing are happening.
			// Sorry that I writte my code I half English and Dutch, but I hope you understand it. 
			// Thanks so much for helping !!! really awesome 

			ofVec2f force;
			force.set(0.02,0.02); // Is must be something else but what ?? 
			force *= 10;
			Kogels[h].applyForce(force);
		}
	}
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key)
{
	toets = 0;
}
