#pragma once

#include "ofMain.h"

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();
		
		ofVec2f locatie; 
		ofVec2f center; 

		float grotemagnitude; 

};
