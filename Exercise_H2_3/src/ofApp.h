#pragma once

#include "ofMain.h"
#include "Rect.h"
#define aantal 15

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();
		void exit();  

		Rectt *vissen[aantal];  

		ofVec2f wind; 
		ofVec2f zwaartekracht;
		ofVec2f weerstand; 

		float wgrote; 
		float wspeed; 
};

