#pragma once

#include "ofMain.h"

class Kogel 
{
	public: 
		void setup(ofVec2f Locatie_); 
		void applyForce(ofVec2f force);
		void display(); 
		void move();

		ofVec2f Location; 
		ofVec2f Velocity; 
		ofVec2f Acceleration;
		
		int topsnelheid;

	private:

};