
#include "Spring.h"

void Spring:: setup(float Origin_x,float Origin_y,float restlength_) 
{
	Origin.set(Origin_x,Origin_y);
	restlength = restlength_; // is de equilibrium -> rust lengte 
	k = 0.0002; // Constant scale the force 
}

ofVec2f Spring:: connect (Bob nameBob)
{
	ofVec2f force = nameBob.Location - Origin; 
	float currentLength = force.length(); // The length die ontstaat op dat moment
	float x = currentLength - restlength; // Zo reken je uit hoever je de bob extra hebt uitgetrokken 

	force.normalize(); 
	force *= (-1 * k * x );

	//nameBob.applyForce(force); // this only works in processing 

	return force;
}

void Spring :: update() 
{
}

void Spring :: display(Bob nameBob)
{
	ofRectMode(CENTER);
	ofSetLineWidth(3);
	ofSetColor(30,150,180);
	//ofLine(Origin.x,Origin.y,Origin.x,Origin.y+restlength);
	ofLine(nameBob.Location.x,nameBob.Location.y,Origin.x,Origin.y);
}


void Spring :: constanteLengte(Bob b_, float minlengte_,float maxlengte_) 
{
	ofVec2f dir = b_.Location - Origin;
	float d = dir.length(); 

	if (d < minlengte_)
	{
		dir.normalize(); 
		dir *= minlengte_;

		b_.Location = Origin + dir; 
		b_.Velocity *= 0;
		b_.Accelaration *= 0;
	} else if (d > maxlengte_) { 
		dir.normalize(); 
		dir *= maxlengte_; 

		b_.Location = Origin + dir; 
		b_.Velocity *= 0; 
		b_.Accelaration *= 0;
	}
}




