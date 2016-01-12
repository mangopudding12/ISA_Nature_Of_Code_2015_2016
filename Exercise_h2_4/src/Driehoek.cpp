#include "Driehoek.h"

Driehoek :: Driehoek (int massa_,float radius_) 
{
	massa = massa_; 
	radius = radius_; 
} 

void Driehoek :: setup() 
{ 
	kleur = ofColor(ofRandom(100,255),ofRandom(100,255),ofRandom(0,100));

	location.set(radius*massa,0); 
	velocity.set(0,0);
	accelaration.set(0,0);
	
	maxspeed = 4; // anders wordt snelheid eindeloos snel	
}


void Driehoek :: applyforce(ofVec2f force) 
{
	ofVec2f f = force / massa; 
	accelaration += f; 
}


void Driehoek::move() 
{
	velocity += accelaration; 
	location += velocity; 

	// Reset accelation 
	accelaration *= 0; 
}


void Driehoek:: bounce() 
{
	
	if (location.x > ofGetWidth() - radius/2*massa)
	{
		kleur = ofColor (0,0,0);
	} 
	 
	if (location.x - 100 < 0)
	{
		kleur = ofColor (0,0,0);
	}

	if (location.y < 0)
	{
		kleur = ofColor (ofRandom(100,255),ofRandom(0,150),ofRandom(100,255));
		location.y =  0;
		velocity.y *= -1; 
	}

	if (location.y > ofGetHeight() - radius/2*massa)
	{
		kleur = ofColor (ofRandom(100,255),ofRandom(0,150),ofRandom(100,255));
		location.y =  ofGetHeight() - radius/2 * massa;
		velocity.y *= -1; 
	}






}

void Driehoek:: display() 
{
	ofSetColor(kleur);
	ofSetCircleResolution(6);
	ofEllipse(location.x,location.y,radius*massa,radius*massa);
}