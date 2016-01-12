#include "Spook.h"

Spook :: Spook (int massa_,float x_,float y_ ) 
{
	massa = massa_; 
	location.set( x_, y_); 	
	
} 

void Spook :: setup() 
{ 
	kleur = ofColor(ofRandom(100,255),ofRandom(100,255),ofRandom(0,100));
	
	velocity.set (0.5,0);
	accelaration.set(0,0);
}


void Spook :: applyforce(ofVec2f force) 
{
	ofVec2f f = force / massa; 
	accelaration += f; 
}


void Spook::move() 
{
	velocity += accelaration; 
	velocity.limit(3);

	location += velocity; 

	// Reset accelation 
	accelaration *= 0; 
}


void Spook:: bounce() 
{
	
	if (location.x > ofGetWidth())
	{
		velocity.x *= -1; 
		location.x = ofGetWidth(); 
	} 
	 
	if (location.x < 0)
	{
		velocity.x *= -1; 
		location.x = 0;
	}

	if (location.y < 0)
	{
		kleur = ofColor (ofRandom(100,255),ofRandom(0,150),ofRandom(100,255));
		velocity.y *= -1; 
		location.y = 0; 
	}

	if (location.y > ofGetHeight())
	{
		kleur = ofColor (ofRandom(100,255),ofRandom(0,150),ofRandom(100,255));
		velocity.y *= -1; 
		location.y = ofGetHeight(); 
	}
}

void Spook :: display() 
{
	ofSetColor(kleur);
	ofSetCircleResolution(6);
	ofEllipse(location.x,location.y,massa*25,massa*25);
}