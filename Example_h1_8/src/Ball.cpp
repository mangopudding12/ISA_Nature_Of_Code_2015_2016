#include "Ball.h"


Stip::Stip()
{
}


void Stip :: setup()
{
	radius = ofRandom(40,60); 
	kleur = ofColor (ofRandom(100,255),ofRandom(100,255),ofRandom(100,255));

	// Hier gaan we de Vectors hun waardes geven
	Location.set(ofRandom(0,ofGetWidth()),ofGetHeight()/2);
	Speed.set(0,0);
	
	maxspeed = 3; 
	
}


void Stip :: move(float xacc_, float yacc_)
{
	xacc = xacc_; 
	yacc = yacc_; 
	accelaration.set(xacc,yacc);
	

	if (Location.x > ofGetWidth())
	{
		kleur = ofColor (ofRandom(100,255),ofRandom(0,150),ofRandom(100,255));
		radius = ofRandom(60,80); 
	
		Location.x = 0 - radius; 
	}

	if (Location.x < 0 - (radius+20))
	{
		kleur = ofColor (ofRandom(100,255),ofRandom(0,150),ofRandom(100,255));
		radius = ofRandom(60,80); 
	
		Location.x = ofGetWidth()+radius; 
	}

	Speed -= accelaration; 
	Speed.limit(maxspeed);
	Location += Speed; 
}


void Stip :: display() 
{
	ofSetColor(kleur);
	ofSetCircleResolution(8); // Maak soort driehoek
	ofEllipse(Location.x,Location.y,radius,radius); 
}