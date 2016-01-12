#pragma once

#include "ofMain.h"

class Monster
{

	public:
		void setup(float massa_,float x_,float y_,float radius_);
		void move();
		void display();	
		void applyForce(ofVec2f force);

		float angle; 
		float aAcceleration; 
		float aVelocity; 
		float massa; 
		float radius;

		ofVec2f Location; 
		ofVec2f Velocity; 
		ofVec2f Acelaration; 

	private:


};