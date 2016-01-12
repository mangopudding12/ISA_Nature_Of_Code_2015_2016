#include "Kanon.h"

void Kanon:: setup (float Location_x,float Location_y,int radius_)
{
	Location.x = Location_x;
	Location.y = Location_y;
	radius = radius_;

	draaien = 0; 
}


void Kanon:: display()
{
	ofPushMatrix();
		ofTranslate(Location.x+radius/2,Location.y+radius/2);
		ofRotate(draaien);
		ofSetColor(255,188,3);
		ofRect(0,-radius/2,radius*2,radius/2);
	ofPopMatrix();
	
	ofSetColor(216,110,11);
	ofRect(Location.x,Location.y,radius,radius);
	
	ofSetColor(8,111,165);
	ofEllipse(Location.x+25,Location.y+50,radius/1.25f,radius/1.25f);

	ofPushMatrix();
		ofTranslate(Location.x+radius/2,Location.y+radius/2);
		ofRotate(draaien);
		ofSetColor(154,0,102);
		ofRect(90,-radius/2,radius/4,radius/2);
	ofPopMatrix();

}

void Kanon:: keyPressed(int key)
{
	if (key == 356)
	{
		draaien += 0.2;

	}  else if (key == 358){
		draaien -= 0.2f; 
	} 
}