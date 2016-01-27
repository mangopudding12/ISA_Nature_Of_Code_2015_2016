
#include "insect.h"

void insect:: setup(float radius_,float amplitude_x,float amplitude_y,float Velocity_x,float Velocity_y,float kleur1,float kleur2,float kleur3)
{
	kleur = ofColor(kleur1,kleur2,kleur3);
	radius = radius_;
	amplitude.x = amplitude_x;
	amplitude.y = amplitude_y;
	Velocity.x = Velocity_x;
	Velocity.y = Velocity_y;
	topsnelheid = 0.05;
}


void insect:: move()
{
	angle += Velocity;
	Velocity.limit(topsnelheid);
	Location.x = cos(angle.x)*amplitude.x; 
	Location.y = sin(angle.y)*amplitude.y; 
}

void insect:: display()
{
	ofPushMatrix();
		ofTranslate(ofGetWidth()/2,ofGetHeight()/2);
		ofSetLineWidth(3);
		ofSetColor(kleur);
		ofLine(0,0,Location.x,Location.y);
		ofEllipse(Location.x,Location.y,radius,radius);
	ofPopMatrix(); 
}


