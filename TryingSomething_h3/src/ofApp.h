#pragma once

#include "ofMain.h"

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);

		float Velocity_graden;
		float Accelarationgraden; 
		float straal;
		ofVec2f Location; 
		float angle; 
		float richting;

		ofVec2f richting_Locatie;
};
