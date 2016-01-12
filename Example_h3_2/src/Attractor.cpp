#include "Attractor.h"


void Attractor::setup() 
{
	Location.set(ofGetWidth()/2,ofGetHeight()/2);
	massa = 20; 
	g = 2;
}

void Attractor::attract(float massa_object, ofVec2f location_object)
{
	ofVec2f force = Location - location_object;
	float distance = force.length(); 

	if (distance < 5.0)
	{
		distance = 5.0;
	} else if (distance > 25.0) {
		distance = 25.0;
	}

	force.normalize(); 
	float strength = (g * massa * massa_object)/ (distance * distance);
	force *= strength;

	FinalForce = force; 
}


void Attractor::display()
{
	ofSetColor(130,247,30);
	ofSetCircleResolution(10);
	ofEllipse(Location.x,Location.y,48,48);
}