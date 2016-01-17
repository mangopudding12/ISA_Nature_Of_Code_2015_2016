#pragma once

#include "ofMain.h"

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);

		float straal; 
		float graden;

		ofVec2f Location; 

		float Accelarion_graden; 
		float Velocity_graden; 
		bool draaien;

		ofTrueTypeFont myfont;
};
