#include "ofMain.h"

class Car 
{
	public:
		void setup(float Location_x,float Location_y, int radius_); 
		void move(int key_); 
		void display(); 
		void OUTscreen(); 

		ofVec2f Location;
		ofVec2f Velocity; 
		ofVec2f Accelaration; 

		int massa; 
		int radius;
		int topsnelheid;
	

	private: 



};