#include "ofMain.h"

class pendel
{
	public:
		void setup(); 
		void move(); 
		void display(); 

		ofVec2f LocationBob; 
		ofVec2f origin; 
		float length; 
		float angle;
		float velocityAngle; 
		float accAngle;
		float zwaartekracht;


	private: 
};