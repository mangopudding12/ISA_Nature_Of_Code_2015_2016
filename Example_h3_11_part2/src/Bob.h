#pragma once 
#include "ofMain.h"

class Bob
{
public:
	void setup(float Location_x, float Location_y,float massa_); 
	void update(); 
	void applyForce(ofVec2f f); 
	void display(); 
	Boolean inside(float x_,float y_); 
	void mousepressed(Boolean pressed); 

	ofVec2f Location; 
	ofVec2f Velocity; 
	ofVec2f ofDrag;
	ofVec2f Accelaration;

private:

	float radius; 
	float massa; 
	float vertragen;

	Boolean pressedd;
};