#pragma once

#include "ofMain.h"
#include "Slang.h"

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		vector<Slang>Slangen; 
		int hoeveelheid;
};
