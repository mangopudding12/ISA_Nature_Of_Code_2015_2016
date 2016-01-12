#pragma once

#include "ofMain.h"

class Attractor
{

	public:
		void setup();
		void attract (float massa_object, ofVec2f location_object);
		void display();	
		

		float massa; 
		ofVec2f Location; 
		ofVec2f FinalForce; 
		float g; // Constante that can make the force weaker or stronger

	private:


};