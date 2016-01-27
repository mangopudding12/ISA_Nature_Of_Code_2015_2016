#include "ofMain.h"

class Slang
{
	public:
		void setup(float xspacing_,float amplitude_,float period_); 
		void move(float Velocity_); 
		void display(float x_origin,float y_origin,int radius_,int lengtegolf); 

		float startAngle;
		float golfbeweging;
		float angle;

		 float xspacing; // How far apart should each horizontal location be spaced
		 int lengtegolf;            // Width of entire wave
		 float amplitude;         // Height of wave
		 float period;            // How many pixels before the wave repeats
		



	private: 
};