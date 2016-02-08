#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup()
{
	ofSetFrameRate(10);

	angle = 0; 
	velocity_angle = 0.4;
	amplitude = 100; 
	anderefase = false;
}

//--------------------------------------------------------------
void ofApp::update()
{

}

//--------------------------------------------------------------
void ofApp::draw()
{
	if (anderefase == false)
	{
		velocity_angle = 0.4;

		ofEnableSmoothing();
	    ofNoFill();
		ofSetColor(0,0,0);

		// Teken een lijn van het ene punt naar het andere punt hierdoor ontstaat de golf lijn.
		ofBeginShape();

		for (int x = 0; x <= ofGetWindowWidth(); x += 5)
		{
			 float y = ofMap(sin(angle),-1,1,0,ofGetHeight());

			 ofVertex(x+100,y);
			 angle += velocity_angle;
		}

		 ofEndShape();


	} else {
		velocity_angle = 0.3;

		// Dit is dus ook een manier om veel cirkels te tekenen zonder array of vector.
		for (int x = 0; x <= ofGetWidth()-50; x += 24)
		{
			float y = amplitude * cos(angle);
			ofEllipse(x,y+ofGetWidth()/4,48,48);
			angle += velocity_angle;
		}
	}


}


//--------------------------------------------------------------
void ofApp::keyPressed(int key)
{
	anderefase = !anderefase;
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key)
{
	
	
}











































