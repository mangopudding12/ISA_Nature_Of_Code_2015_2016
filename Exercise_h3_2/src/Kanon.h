#pragma once

#include "ofMain.h"

class Kanon
{
	public: 
		void setup(float Location_x,float Location_y,int radius_); 
		void display(); 
		void keyPressed(int key);

		ofVec2f Location; 
		int radius;
		float draaien;

	private:

};