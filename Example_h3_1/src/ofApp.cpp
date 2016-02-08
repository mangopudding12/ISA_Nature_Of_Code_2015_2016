#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup()
{
	// Dingen inladen 
	myfont.loadFont("spahrtyg.ttf", 50);

	graden = 0;
	accelaration = 0.05;
	velocity = 0; 
}

//--------------------------------------------------------------
void ofApp::update()
{
	if (anderekantop == false)
	{
		velocity += accelaration; 
		graden += velocity;
	} else {
		velocity -= accelaration; 
		graden += velocity;
	}

}
	

//--------------------------------------------------------------
void ofApp::draw()
{
	ofBackground(100,200,255,200);

	ofSetColor(0);
	ofPushMatrix();
		ofScale(0.5, 0.5, 1);
		myfont.drawString("De snelheid is nu       ", 500,60);
	
	if (anderekantop == false)
	{
		myfont.drawString( "positief ++", 1150,60);
	} else { 
		myfont.drawString( "negatief --", 1150,60);
	
	}
	ofPopMatrix();


	myfont.drawString("Druk op enter of spatiebalk", 50,700);
	


	ofTranslate(ofGetWidth()/2.0f,ofGetHeight()/2.0f);
	ofRotate(graden);

	ofSetColor(kleur);
	ofLine(0,0,0,200);
	ofSetColor(kleur+100);
	ofEllipse(0,175,50,50);
	ofLine(0,0,150,100);
	ofSetColor(kleur-100);
	ofEllipse(150,100,50,50);
	ofSetColor(kleur);
	ofEllipse(0,0,50,50);
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key)
{
		// Spatiebalk is 32 
		if (key == 32)
		{
			kleur = ofColor (ofRandom(0,255),ofRandom(0,255),ofRandom(0,255));
		}

		// Enter knop is 13
		if (key == 13)
		{
			anderekantop = !anderekantop;
		}
}
