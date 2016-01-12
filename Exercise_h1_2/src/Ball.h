#pragma once
#include "ofMain.h"

class Stip
{
public:

	// Constructor 
	Stip(); 

	// Funtions 
	void setup(); 
	void move(); 
	void display();



	// Variable 
	int	radius; 
	ofColor kleur; 

	
	// De geweldige Vectors zoals belooft
	ofVec2f Location; 
	ofVec2f Speed; 

private:
};
