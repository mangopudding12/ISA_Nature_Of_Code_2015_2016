#include "Frictie.h"

Frictie :: 	Frictie (float x_, float y_,  int breedte_, int hoogte_, float coefficient_)
{
	location.x = x_; 
	location.y = y_;  
	radius.x = breedte_; 
	radius.y = hoogte_;
	coefficient = coefficient_; 
}

void Frictie :: setup () 
{
	kleur = ofColor (ofRandom(0,255),ofRandom(100,255),ofRandom(150,200));
}

void Frictie :: frictieDriehoek(ofVec2f velocity_)
{
	float speed = velocity_.length();
	float dragmagnitude = coefficient * speed * speed; 

	frictie.set(velocity_.x,velocity_.y);
	frictie *= -1; 
	frictie.normalize(); 

	frictie *= dragmagnitude;
}

void Frictie :: display()
{
	ofSetColor(kleur); 
	ofRect(location.x,location.y,radius.x,radius.y);
}

