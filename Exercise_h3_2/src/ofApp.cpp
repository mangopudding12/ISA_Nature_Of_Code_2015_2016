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

		if (Kogels[h].Location.x < 100 || Kogels[h].Location.x > (ofGetWidth()-100) || Kogels[h].Location.y < 100 || Kogels[h].Location.y > (ofGetHeight()-100))
		{
				Kogels.erase(Kogels.begin()+h);  
		}
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
	toets = key;	
	if (key == 32)
	{
			Kogel newKogel;
			newKogel.setup(Kanons.Location.x-Kanons.radius/2,(Kanons.Location.y)-Kanons.radius/2);
        
      
		// Hey Reed, 
		// AAAAAA it works, I am so happy 
		// Thanks so much for helping !!! |
		// But I really don't understand why it works, can you explain me ? 
		// I put Kanons.draaien inside the map function because I was thinking that is only number I have of the rotation of the kanon
		// I put 0 360 inside the function because I was thing mm a whole circle is 360 graden
		// And the TWO_PI is yours.
		// But why does it works so good ? 
		// What is happening there ? 
		// I am really curious to know :) 


        float angle = ofMap(Kanons.draaien, 0 , 360, 0, TWO_PI);
        
        ofVec2f force;
        force.set(cos(angle),sin(angle)); 
        force *= 0.9; // This is the speed of de bullet 
        newKogel.applyForce(force);
       
		Kogels.push_back(newKogel);
	}
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key)
{
	toets = 0;
}
