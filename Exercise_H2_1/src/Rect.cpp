#include "Rect.h"

Rectt:: Rectt () 
{
} 

void Rectt :: setup() 
{ 
	radius = ofRandom(60,80); 
	kleur = ofColor(ofRandom(100,255),ofRandom(100,255),ofRandom(0,100));

	location.set(((ofGetWidth()/2)-300),((ofGetWidth()/2)+300)); 
	velocity.set(0,0);
	accelation.set(0,0);


	maxspeed = 4; // anders wordt snelheid eindeloos snel
}


void Rectt:: applyforce(ofVec2f force_) 
{
	// Op deze manier gaan alle krachten (wind zwaartekracht) hun kracht uitoefenen op de rect. 
	// Je doet het + anders kan er maar 1 kracht tergelijker tijd werken op de rect. 
	accelation += force_; 
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
	ofVec2f weerstandmuren; 

	if (location.x > ofGetWidth() - radius/2)
	{
		kleur = ofColor (0,0,0);
		location.x = ofGetWidth() - radius/2;

		// Waarom -1.5f ??? 
		weerstandmuren.set (velocity.x * -1.5f,0.0f);
		applyforce(weerstandmuren); 
	}
	 
	if (location.x < 0)
	{
		kleur = ofColor (0,0,0);
		location.x = 0;
	
		// Waarom -1.5f ??? 
		weerstandmuren.set (velocity.x * -1.5f,0.0f);
		applyforce(weerstandmuren); 
	}

	if (location.y < 0)
	{
		kleur = ofColor (ofRandom(100,255),ofRandom(0,150),ofRandom(100,255));
		location.y =  0;

		weerstandmuren.set(0.0f,velocity.y * -2.0f);
		applyforce(weerstandmuren);

		cout << velocity.y << endl; 
	}

	if (location.y > ofGetHeight() - radius/2)
	{
		kleur = ofColor (ofRandom(100,255),ofRandom(0,150),ofRandom(100,255));
		location.y =  ofGetHeight() - radius/2;

		weerstandmuren.set(0.0f,velocity.y * 2.0f);
		applyforce(weerstandmuren);
	}
}

void Rectt:: display() 
{
	ofSetColor(kleur);
	ofRect(location.x,location.y,radius,radius);
}