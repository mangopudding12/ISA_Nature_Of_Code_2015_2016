#pragma once 
#include "ofmain.h"

class Ball
{
public: 

	Ball() { }; // Default constructor -- anders doet andere contructor het niet. 
	Ball (int massa_,float radius_,float x_,float y_ ); 

	// functions 
	void setup (); 
	void bounce(); 
	void applyforce(ofVec2f); 
	void move(); 
	void display(); 

	// variable 
	ofVec2f velocity;		// speed
	ofVec2f location;		// x and y 
	ofVec2f accelaration;   // versnellen - verlangzamen 

	int maxspeed; 
	ofColor kleur; 
	float radius; 
	int massa; 

private: 
}; 