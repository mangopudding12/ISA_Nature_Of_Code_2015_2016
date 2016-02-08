#include "Ball.h"


Stip::Stip()
{
}


void Stip :: setup()
{
	radius = ofRandom(40,60); 
	kleur = ofColor (ofRandom(100,255),ofRandom(100,255),ofRandom(100,255));

	// Hier gaan we de Vectors hun waardes geven
	Location.set(ofRandom(0,ofGetWidth()),ofRandom(0,ofGetHeight()));
	Speed.set(ofRandom(10,15),ofRandom(10,15));
}


void Stip :: move()
{

	// Als je de x en y waarden van vector wil aanspreken moet je: 
	// Location.x dus je gebruikt de . om in de vector te zoeken naar x. 


	if ((Location.x < 0) || (Location.x > ofGetWidth()))
	{
		kleur = ofColor (ofRandom(100,255),ofRandom(0,150),ofRandom(100,255));
	
		Speed.x *= -1; 
	}

	if ((Location.y < 0 )|| (Location.y > ofGetHeight()))
	{
		Speed.y *= -1; 
	}

	// Je tel de vector bij elkaar op. 
	Location += Speed; 
}


void Stip :: display() 
{
	ofSetColor(kleur);
	//ofSetCircleResolution(2); // Maak soort driehoek
	ofEllipse(Location.x,Location.y,radius,radius); 
}