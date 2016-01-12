#pragma once

#include "ofMain.h"
#include "Rect.h"

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		Rectt vissen; 

		ofVec2f wind; 
		ofVec2f zwaartekracht;

		float tijd; 
};
