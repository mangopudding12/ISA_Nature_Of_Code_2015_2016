
#pragma once 
#include "ofMain.h"

class Bob
{
public:
	void setup(float Location_x, float Location_y,float massa_); 
	void update(); 
	void applyForce(ofVec2f f); 
	void display(); 

	ofVec2f Location; 
	ofVec2f Velocity; 

private:

	float radius; 
	float massa; 
	ofVec2f Accelaration;
};