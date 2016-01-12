#pragma once
#include "ofMain.h"

class Ball
{
public:

	// Constructor 
	Ball(); 

	// Funtions 
	void setup(); 
	void bounce(); 
	void move(int mouseX,int mouseY, float beweging_); 
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
	int mousex; 
	int mousey; 
	float beweging; 

	// Optrekken en afremmen kracht 
	ofVec2f accelaration; 
	ofVec2f mouse; 
	ofVec2f afstand; 

private:
};
