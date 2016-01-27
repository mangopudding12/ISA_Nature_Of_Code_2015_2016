#include "Slang.h"

void Slang:: setup(float xspacing_,float amplitude_, float period_)
{
	amplitude = amplitude_; // hoogte 
	xspacing = xspacing_;
	startAngle = 0;
	period = period_; // aantal golven -> in het gebied wat je hebt aangegeven.
	golfbeweging = (TWO_PI/period)*xspacing; // hoeveel golven min 70 -- max 6000
}

void Slang:: move(float Velocity_)
{
	// THis is the speed 
	startAngle += Velocity_;
    angle = startAngle;
}

void Slang::display(float x_origin,float y_origin,int radius_,int lengtegolf) 
{	
	
    
	for (float x = 0; x <= lengtegolf; x += xspacing) {
		float y = amplitude * sin(angle);
        ofSetColor(90,10,200);
		ofEllipse(x_origin+x,y+y_origin,radius_,radius_);
       
        angle += golfbeweging;
    }
}