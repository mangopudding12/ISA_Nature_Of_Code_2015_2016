#include "Raket.h"

void Raket:: setup(float Location_x,float Location_y, int radius_)
{
	Location.set(Location_x,Location_y);
	radius = radius_; 
	Accelaration.set(0.0);
	Velocity.set(0.0);

	draaien = 0;
	weerstand = 0.998; 
	kracht = false;
}

void Raket:: OUTscreen()
{
	if (Location.x < 0 + radius)
	{
		Location.x = ofGetWidth()-radius;

	} else if (Location.x > ofGetWidth() - radius) {
		Location.x = 0 + radius; 

	} else if (Location.y < 0 +radius) {
		Location.y = ofGetHeight()-radius;

	} else if (Location.y > ofGetHeight()-radius){
		Location.y = 0+radius;
	}
}


void Raket::applyForce(ofVec2f force)
{
	ofVec2f f = force; 
	Accelaration += f; 
}

void Raket::sturen(int key_)
{
	// Pijltjes toetsen 
	if (key_ == 356)
	{
		draaien += -0.09;
	} else if (key_ == 358){
		draaien += 0.09;
	} 
}

void Raket::gasgeven()
{


	// Wanneer je spatiedruk wordt accelaratie hoog en beweegt de raket
	Velocity += Accelaration;
	Velocity *= weerstand; // Wordt steeds iets af geremt. 
	Velocity.limit(0.899);
	Location += Velocity;

	Accelaration *= 0; // Reset accelaration 
}

void Raket::display() 
{
	ofPushMatrix();
		ofTranslate(Location.x,Location.y);

		ofRotate(draaien);
		
		ofSetColor(70,255,100);
		ofRect(-radius/2,-radius/2,radius,radius);

		if (kracht == false)
		{
			ofSetColor(20,250,100);
		} else { 
			ofSetColor(200,50,80);
		}
		
		ofRect(-radius,-radius/4,radius/4,radius/2);
		ofRectMode(OF_RECTMODE_CENTER);
		
	ofPopMatrix();
}