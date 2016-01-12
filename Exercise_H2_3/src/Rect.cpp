#include "Rect.h"

Rectt:: Rectt (float massa_,float x_,float y_) 
{
	massa = massa_; 
	location.x = x_; 
	location.y = y_;
} 

void Rectt :: setup() 
{ 
	radius = 10; 
	kleur = ofColor(ofRandom(100,255),ofRandom(100,255),ofRandom(0,100));

	location.set(10,0); 
	velocity.set(0,0);
	accelation.set(0,0);

	richting = 1; 
	maxspeed = 4; // anders wordt snelheid eindeloos snel	
}


void Rectt:: applyforce(ofVec2f force_) 
{
	ofVec2f f = force_ / massa; 
	accelation += f; 
}


void Rectt::bounce() 
{
	velocity += accelation; 
	location += velocity; 

	// Reset accelation 
	accelation *= 0; 
}


void Rectt:: checkedge() 
{
	
	if (location.x > ofGetWidth() - radius/2*massa)
	{
		kleur = ofColor (0,0,0);
		//location.x = ofGetWidth() - radius/2*massa;
		//velocity.x *= -1; 
	} 
	 
	if (location.x - 100 < 0)
	{
		kleur = ofColor (0,0,0);
		//location.x = 0;
		//velocity.x *= -1; 
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

void Rectt:: display() 
{
	ofSetColor(kleur);
	ofRect(location.x,location.y,radius*massa,radius*massa);
}