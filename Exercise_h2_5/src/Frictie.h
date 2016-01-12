
#pragma once 
#include "ofmain.h"

class Frictie 
{
public: 

	Frictie() { }; // Default constructor -- anders doet andere contructor het niet. 
	Frictie (float x_, float y_, int breedte_, int hoogte_,float coefficient_); 

	// functions 
	void setup (); 
	void frictieDriehoek(ofVec2f); 
	void display(); 

	// variable normaal
	ofVec2f location;		// x and y 
	ofColor kleur; 
	ofVec2f frictie;
	ofVec2f radius; 
	float coefficient; 

	
private: 
};