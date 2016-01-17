#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup()
{
	ofBackground(255,255,255);
	ofSetBackgroundAuto(false); // Achtergrond wordt maar 1 keer upgedate 

	Location.set(0,0);
	straal = 0; 
	graden = (2*PI)/4;
	Accelarion_graden = 0.000001;

	draaien =  false; 
}

//--------------------------------------------------------------
void ofApp::update()
{
	Location.x = straal * cos(graden);
	Location.y = straal * sin(graden);

	Velocity_graden += Accelarion_graden;
	Velocity_graden = ofClamp (Velocity_graden,0,0.1);
	graden += Velocity_graden;

	if (draaien == true && straal > 5)
	{
		straal -= (Velocity_graden*2.3);
	} else if (draaien == false && straal <= 5) { 
		ofBackground(255,255,255);
		straal = ofRandom(300,600);
	} else { 
	}
	
}

//--------------------------------------------------------------
void ofApp::draw()
{
	ofPushMatrix();

	ofTranslate(ofGetWidth()/2,ofGetHeight()/2); 
	ofSetColor(200,10,100);
	ofSetLineWidth(2);
	ofEllipse(Location.x,Location.y,10,10);

	ofPopMatrix();
}


//--------------------------------------------------------------
void ofApp::keyPressed(int key)
{
	draaien = !draaien; 

	// Als je left pijltje indrukt zet je snelheid op 0. 
	if (key == 358)
	{
		Velocity_graden = 0; 
	} 
		
	
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){
}

