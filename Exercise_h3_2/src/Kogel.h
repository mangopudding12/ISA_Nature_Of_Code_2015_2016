#pragma once

#include "ofMain.h"

class Kogel 
{
	public: 
		void setup(float Locatie_x,float Locatie_y); 
		void applyForce(ofVec2f force);
		void display(); 
		void move();

		ofVec2f Location; 
		ofVec2f Velocity; 
		ofVec2f Acceleration;
		
		int topsnelheid;

	private:

};