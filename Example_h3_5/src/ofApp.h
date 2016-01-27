#pragma once

#include "ofMain.h"

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		float period;
		float amplitude;
		ofVec2f Location;
		int radius;
		
};
