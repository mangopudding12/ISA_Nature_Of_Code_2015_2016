#include "Ball.h"


Ball::Ball()
{
}


void Ball :: setup()
{
	radius = ofRandom(40,60); 
	kleur = ofColor (ofRandom(100,255),ofRandom(100,255),ofRandom(100,255));

	// Hier gaan we de Vectors hun waardes geven
	Location.set(ofRandom(0,ofGetWidth()),ofGetHeight()/2);
	Speed.set(0,0);
	 mouse = ofVec2f(2,4); 


	maxspeed = 4; 	
}

void Ball :: bounce() 
{
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
}

void Ball :: move(int mouseX,int mouseY,float beweging_)
{	
	mousex = mouseX; 
	mousey = mouseY; 
	beweging = beweging_;

	mouse.set(mousex,mousey);  
	afstand.set(mouse.x-Location.x, mouse.y - Location.y);
	afstand.normalize();  
	afstand *= beweging;

	accelaration = afstand; 

	Speed += accelaration; 
	Speed.limit(maxspeed);
	Location += Speed; 
}


void Ball :: display() 
{
	ofSetColor(kleur);
	ofSetCircleResolution(8); // Maak soort driehoek
	ofEllipse(Location.x,Location.y,radius,radius); 
}