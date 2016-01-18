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
        
        // the force and angle of each bullet should be set ONCE before going out/push into vector
        // because bullet shouldn't change direction/speed, unless there are outside force like wind
        
        // we need some trigonometry here to set the angle
        // I mapped it to mouseX here but ultimately should be a variable that plugged with the cannon
        float angle = ofMap(mouseX, 0 , ofGetWidth(), 0, TWO_PI);
        // angle in Radian not degree
        ofVec2f force;
        force.set(0.02*cos(angle),0.02*sin(angle)); //just multiply with amplitude to set direction
        force *= 100;
        newKogel.applyForce(force);
        // set here! if you do this down in the for loop when you fire ofVec2f force will be applied to *every* bullet
        // or you can avoid it by making another vector<ofVec2f> forces; but I think it's quite redundant
        
		Kogels.push_back(newKogel);
        // so this bullet have its own force set in its acceleration already, let move() do its work!

		
		// you don't really even need the loop here
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

		}
	}
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key)
{
	toets = 0;
}
