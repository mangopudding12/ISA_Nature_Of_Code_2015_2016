#pragma once

#include "ofMain.h"
#include "Car.h"

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);

		int toets;
		vector <Car> Cars; 
		int hoeveelheid; 
};
