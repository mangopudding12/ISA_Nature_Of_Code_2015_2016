
#include "Frictie.h"

Frictie :: 	Frictie (float x_, float y_, int radius_)
{
	location.x = x_; 
	location.y = y_;  
	radius = radius_; 
}

void Frictie :: setup () 
{
	kleur = ofColor (ofRandom(0,255),ofRandom(100,255),ofRandom(150,200));
}

void Frictie :: frictieDriehoek(ofVec2f velocity_)
{
	float coefficient = 0.01; 
	frictie.set(velocity_.x,velocity_.y);
	frictie *= -1; 
	frictie.normalize(); 
	frictie *= coefficient;
}

void Frictie :: display()
{
	ofSetColor(kleur); 
	ofRect(location.x,location.y,radius,radius);
}

