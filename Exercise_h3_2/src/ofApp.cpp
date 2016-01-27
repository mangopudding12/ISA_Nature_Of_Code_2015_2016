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
        
      
	

		// Here happened's the magic !!!!! Now I understand a little bit 
		// Who to say he the force must shoot in this direction :) 
		// Super happy 
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
