#include "Car.h"

void Car:: setup(float Location_x,float Location_y, int radius_)
{
	Location.set(Location_x,Location_y);
	radius = radius_; 
	Velocity.set(0,0);
	Accelaration.set(0.001,0);

	topsnelheid = 3; 
}

void Car:: OUTscreen()
{
	if (Location.x < 0 + radius)
	{
		Location.y += 150;
		Location.x = ofGetWidth()/2;
	} else if (Location.x > ofGetWidth() - radius) {
		Location.y -= 100;
		Location.x = ofGetWidth()/2; 
	} else if (Location.y < 0 +radius) {
		Location.y = ofGetHeight()-radius;
	} else if (Location.y > ofGetHeight()-radius){
		Location.y = 0+radius;
	}
}

void Car::move(int key_)
{
	if (key_ == 356)
	{
		Velocity -= Accelaration;
	} else if (key_ == 358){
		Velocity += Accelaration; 
	}

	Velocity.limit(topsnelheid);
	Location += Velocity;

}

void Car::display() 
{
	float graden = ofRadToDeg(atan2(-Velocity.y,-Velocity.x));
	cout << graden << endl;

	ofPushMatrix();
		
		ofTranslate(Location.x,Location.y);	
		ofRotateZ(graden);
		ofRotateX(graden);

		cout << graden << endl;

		ofSetColor(170,0,168);
		ofRect(0,0,radius,radius-20);
		ofRect(15,-15,radius-15,radius-15);

		ofSetColor(2,128,173);
		ofRect(18,-13,radius-20,radius-20);

		ofSetColor(0);
		ofEllipse(38,20,radius-30,radius-30);
		ofEllipse(3,20,radius-30,radius-30);

		ofSetColor(255,218,3);
		ofEllipse(6,7,radius-30,radius-30);
	ofPopMatrix();
}