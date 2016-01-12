#pragma once

#include "ofMain.h"
#include "Driehoek.h"
#include "Frictie.h"

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		Driehoek slak;
		Frictie f; 

		ofVec2f wind; 
		ofVec2f zwaartekracht;
		ofVec2f weerstand; 

		float wgrote; 
		float wspeed; 

	private:
};
