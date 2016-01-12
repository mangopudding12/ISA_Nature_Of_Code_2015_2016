#pragma once
#include "ofmain.h"

class Rectt
{ 

public:
	Rectt(float massa_,float x_,float y_); 

	// Functions 
	void setup(); 
	void bounce(); 
	void applyforce(ofVec2f); // Hier hoef je de naam nog niet te vermelden -- wel vertellen wat voor soort getal het gaat worden.
	void checkedge(); 
	void display(); 

	// variable 
	ofColor kleur; 
	float radius; 
	float maxspeed; 
	float massa; 

	ofVec2f location; 
	ofVec2f velocity; 
	ofVec2f accelation;
	int richting; 

private: 

};