
#include "Bob.h"

void Bob:: setup(float Location_x, float Location_y,float massa_) 
{
	Location.set(Location_x,Location_y);
	massa = massa_;

	radius = massa * 4; 
	pressedd = false; 
	vertragen = 0.9995;
}

void Bob:: applyForce(ofVec2f f) 
{
	Accelaration += f/massa; 
}

void Bob:: update() 
{
	if (pressedd == false)
	{
		Velocity += Accelaration;
		Velocity.limit(10);
		Velocity *= vertragen;
		Location += Velocity; 

		Accelaration *= 0; 
	} else { 

		ofVec2f mouse = ofVec2f (ofGetAppPtr()-> mouseX,ofGetAppPtr()->mouseY);
		Location = mouse;
	}
}

Boolean Bob :: inside(float x_,float y_)
{
	ofVec2f MouseLocation;
	MouseLocation.set(x_,y_);

	MouseLocation -= Location;
	cout << MouseLocation - Location << " Locatie - mouselocation" << endl;

	float DistanceLenght = MouseLocation.length(); 
	ofDrag.x = Location.x - x_; 
	ofDrag.y = Location.y - y_; 

	cout << (DistanceLenght <= (radius + 10 )) << " wat voor getal komt hier uit ?? de return" << endl;
	return (DistanceLenght <= (radius + 10 ));
}

void Bob :: mousepressed(Boolean pressed)
{
	cout << "Mousepressed = treu" << endl; 
	pressedd = pressed; 
}

void Bob:: display()
{
	ofEllipse(Location.x,Location.y,radius,radius);
}
