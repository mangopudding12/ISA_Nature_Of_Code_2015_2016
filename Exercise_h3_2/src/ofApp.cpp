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
			
			ofVec2f force;
			force.set(0.02,0.02); // Hier zitten de problemen !!!!!!!!!! 
			// Hoe in godsnaam laat ik de computer weten in welke richting de kracht moet zijn
			// Als je met de pijltjes toetsen de buis van kanon beweegt uit die richting moet de kogel ook komen
			// maar hoe ??????
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
