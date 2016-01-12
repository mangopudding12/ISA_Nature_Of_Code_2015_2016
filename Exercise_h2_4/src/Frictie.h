
#pragma once 
#include "ofmain.h"

class Frictie 
{
public: 

	Frictie() { }; // Default constructor -- anders doet andere contructor het niet. 
	Frictie (float x_, float y_, int radius_); 

	// functions 
	void setup (); 
	void frictieDriehoek(ofVec2f); 
	void display(); 

	// variable normaal
	ofVec2f location;		// x and y 
	ofColor kleur; 
	ofVec2f frictie;
	float radius; 

	
private: 
};