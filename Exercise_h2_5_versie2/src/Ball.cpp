#include "Ball.h"

Ball :: Ball (int massa_,float radius_,float x_ ,float y_) 
{
	massa = massa_; 
	radius = radius_; 

	location.set(radius*massa + x_, y_); 	
} 

void Ball :: setup() 
{ 
	kleur = ofColor(ofRandom(100,255),ofRandom(100,255),ofRandom(0,100));
	
	velocity.set(0,0);
	accelaration.set(0,0);
	
	maxspeed = 4; // anders wordt snelheid eindeloos snel	
}


void Ball :: applyforce(ofVec2f force) 
{
	ofVec2f f = force / massa; 
	accelaration += f; 
}


void Ball::move() 
{
	velocity += accelaration; 
	location += velocity; 

	// Reset accelation 
	accelaration *= 0; 
}


void Ball:: bounce() 
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

void Ball :: display() 
{
	ofSetColor(kleur);
	ofSetCircleResolution(6);
	ofEllipse(location.x,location.y,radius*massa,radius*massa);
}