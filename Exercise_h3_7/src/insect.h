
#include "ofMain.h"

class insect 
{
public:
	void setup(float radius_,float amplitude_x,float amplitude_y,float Velocity_x,float Velocity_y,float kleur1,float kleur2,float kleur3);
	void move(); 
	void display(); 

	ofVec2f Location;
	ofVec2f Velocity; 
	ofVec2f angle; 
	ofVec2f amplitude;

	float radius; 
	float topsnelheid;

	ofColor kleur;

private:


};