#pragma once

#include "ofMain.h"
#include "Kogel.h"
#include "Kanon.h"

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);

		vector <Kogel> Kogels; 
		int hoeveelheid; 
		int plusEEN; 
		int toets;
		Kanon Kanons;
};
