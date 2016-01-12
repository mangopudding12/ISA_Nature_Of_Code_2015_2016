#pragma once
#include "ofMain.h"

class Stip
{
public:

	// Constructor 
	Stip(); 

	// Funtions 
	void setup(); 
	void move(float xacc_, float yacc_); 
	void display();



	// Variable 
	int	radius; 
	ofColor kleur; 

	
	// De geweldige Vectors zoals belooft
	ofVec2f Location; 
	ofVec2f Speed;

	// Anders gaat de ball accelaratie oneindig gebruiken 
	// Op een gegeven moment heeft die gewoon zijn top snelheid bereikt 
	int maxspeed; 

	// Optrekken en afremmen kracht 
	ofVec2f accelaration; 
	float xacc; 
	float yacc;

private:
};
