#pragma once

#include "ofMain.h"
#include "Monster.h"
#include "Attractor.h"

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
		
		vector <Monster> Monstertje;
		Attractor a; 

		int hoeveelheid;
		int plusEEN; 
};
