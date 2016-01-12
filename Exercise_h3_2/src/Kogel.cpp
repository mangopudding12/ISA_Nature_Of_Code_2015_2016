#include "Kogel.h"


void Kogel:: setup (ofVec2f Locatie_)
{
	Location = Locatie_;
	Acceleration.set(0,0);
	Velocity.set(0,0);
	topsnelheid = 5; 
}

void Kogel:: applyForce(ofVec2f force)
{
	Acceleration += force;
}

void Kogel:: move()
{
	Velocity += Acceleration;
	Velocity.limit(topsnelheid);

	Location += Velocity; 
	Acceleration *= 0;
}

void Kogel:: display()
{
		ofEllipse(Location.x+25,Location.y+25,20,20);
}
