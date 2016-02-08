#pragma once

#include "ofMain.h"
#include "Bob.h"
#include "Spring.h"

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);

		vector <Bob> Bobs; 
		vector <Spring> Springs; 
		int hoeveelheid; 
};
