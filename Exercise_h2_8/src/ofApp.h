#pragma once

#include "ofMain.h"
#include "Aarde.h"
#include "Spook.h"
#define aantal 10
#define poorten 4

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();
		void mousePressed(int x, int y, int button);

		Aarde aarde1; 
		Aarde duisterpoort[poorten]; 
		Spook spook1[aantal]; 
		bool aan; 

};
