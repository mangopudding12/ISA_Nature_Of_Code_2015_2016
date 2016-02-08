
#include "Bob.h"

void Bob:: setup(float Location_x, float Location_y,float massa_) 
{
	Location.set(Location_x,Location_y);
	massa = massa_;

	radius = massa * 4; 
}

void Bob:: applyForce(ofVec2f f) 
{
	Accelaration += f/massa; 
}

void Bob:: update() 
{
	Velocity += Accelaration;
	Location += Velocity; 

	Accelaration *= 0; 
}

void Bob:: display()
{
	ofEllipse(Location.x,Location.y,radius,radius);
}
