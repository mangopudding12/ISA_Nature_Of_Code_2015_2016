#include "ofMain.h"

class Slang
{
	public:
		void setup(int radius_,float Velocity_); 
		void move(); 
		void display(float x_,float y_); 

		float x;
		float Velocity; 
		float radius;
		float startAngle;
		float angleVel;

		float draaien;
		float amplitude;
		float angle;

	private: 
};