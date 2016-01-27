#pragma once

#include "ofMain.h"
#include "insect.h"

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);

		vector <insect> Insects; 
		int hoeveelheid; 
};
