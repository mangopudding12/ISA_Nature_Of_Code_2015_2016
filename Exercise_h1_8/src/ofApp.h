#pragma once

#include "ofMain.h"
#include "Ball.h"

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		Ball cat1; 
		Ball cat2; 
		Ball cat3; 

		Ball cat4; 
		Ball cat5;
};

