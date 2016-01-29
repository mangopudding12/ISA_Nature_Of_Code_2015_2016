#pragma once

#include "ofMain.h"

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		
		ofVec2f Location; 
		ofVec2f Velocity; 
		ofVec2f Acceleration; 
		ofVec2f Lijnbegin;
		ofVec2f Lijneinde;

		ofVec2f Normal;
		ofVec2f friction;

		float Normaly;
		float angle;
		float zwaartkracht;
		float massa; 
		float radius;

		float initHeight;

		

};
