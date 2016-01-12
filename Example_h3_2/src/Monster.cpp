#include "Monster.h"



// Het is slim om code nog af te maken door accelaration dingen te doen daar had ik geen tijd voor !!!! 


void Monster::setup(float massa_,float x_,float y_,float radius_)
{
	angle = 0; 
	aVelocity = 0; 
	aAcceleration = 0;

	radius = radius_;
	massa = massa_; 
	Location.set(x_,y_); 
	Velocity.set(ofRandom(-1,1),ofRandom(-1,1));
	Acelaration.set(0,0);
}

void Monster::applyForce (ofVec2f force) 
{
	ofVec2f f = force; 
	Acelaration += force; 
}

void Monster :: move() 
{
	Velocity += Acelaration;
	Location += Velocity;

	aAcceleration = Acelaration.x * 3; 
	aVelocity += aAcceleration; 
	
	// Hoe ik godsnaam maak je een constante in openframeworks ?? 
		if (aVelocity < -4)
		{
			aVelocity = -4;
		} else if (aVelocity > 4){
			aVelocity = 4;
		}

	angle += aVelocity;
	Acelaration *= 0; 	// Reset acelaration -> anders wordt acelaration steeds groter en gaan de ballen oneindig snel op gegeven moment.
}


void Monster :: display()
{

	ofPushMatrix();
		ofTranslate(Location.x,Location.y); // zet de origin om de positie van het object.

		ofRotate(angle);
		ofSetColor(30,224,247,100);
		ofSetCircleResolution(3);
		ofEllipse(0,0,radius,radius);
	ofPopMatrix(); 
}