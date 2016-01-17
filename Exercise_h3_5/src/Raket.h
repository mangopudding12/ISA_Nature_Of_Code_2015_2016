#include "ofMain.h"

class Raket
{
	public:
		void setup(float Location_x,float Location_y, int radius_); 
		void sturen(int key_); 
		void display(); 
		void applyForce(ofVec2f force); 
		void OUTscreen(); 
		void gasgeven(); 

		ofVec2f Location;
		ofVec2f Velocity; 
		ofVec2f Accelaration; 

		int radius;
		int topsnelheid;
		float weerstand;

		float draaien;

	private: 
};