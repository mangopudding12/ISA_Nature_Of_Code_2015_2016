
#pragma once 
#include "ofMain.h"
#include "Bob.h"

class Spring
{
public:
	void setup(float Origin_x,float Origin_y,float restlength_); 
	void update(); 
	void display(Bob); 
	ofVec2f connect(Bob);
	ofVec2f Origin; 
	float restlength; 
	float radius; 
	
private: 
	float k; 
	
};