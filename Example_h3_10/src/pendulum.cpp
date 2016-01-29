#include "pendulum.h"

void pendel:: setup()
{
	origin.set(ofGetWidth()/2,10);
	length = 150;
	LocationBob.set(0,0);
	angle = 180; 
	velocityAngle = 0.0;
	zwaartekracht = 0.01;
	accAngle = 0.0;
}

void pendel:: move()
{	
	accAngle = -zwaartekracht * sin(angle);

	angle += velocityAngle;
	velocityAngle += accAngle;

	velocityAngle *= 0.99;
}

void pendel:: display()
{
	LocationBob.x = origin.x + length * sin(angle);
	LocationBob.y = origin.y + length * cos(angle); 

	ofSetColor(158,71,158);
	ofSetLineWidth(3);
	ofLine(origin.x,origin.y,LocationBob.x,LocationBob.y);
	ofSetCircleResolution(3);
	ofEllipse(LocationBob.x,LocationBob.y,60,60); 
}