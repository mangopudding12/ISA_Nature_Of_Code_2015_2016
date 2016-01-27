#include "Slang.h"

void Slang:: setup(int radius_,float Velocity_)
{
	radius = radius_; 
	draaien = 0;
	amplitude = 300; // hoogte 
	x = 0; 
	//y = 0;
	startAngle = 0;
    angleVel = Velocity_; // hoeveel golven 
}

void Slang:: move()
{
	// THis is the speed 
	startAngle += 0.08;
    angle = startAngle;
}

void Slang::display(float x_,float y_) 
{	
	
    
    for (float x = 0; x <= (x_); x += 1.5) {
		float y = amplitude * sin(angle);
        ofSetColor(0, 30);
        ofEllipse(x_+x,y+y_,35,35);
       
        angle += angleVel;
    }
}