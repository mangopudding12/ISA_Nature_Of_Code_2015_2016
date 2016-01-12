#pragma once

#include "ofMain.h"
#include "Ball.h"
#include "Frictie.h"

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		vector <Ball> slak;
		int hoeveelheid; 
		
		Frictie f; 

		ofVec2f wind; 
		ofVec2f zwaartekracht;
		ofVec2f weerstand; 

		float wgrote; 
		float wspeed; 

	private:
};
