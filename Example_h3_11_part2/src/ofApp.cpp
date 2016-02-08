#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup()
{
	hoeveelheid = 10;

	for(int h = 0; h < hoeveelheid; h++)
	{
		Spring newSpring;
		newSpring.setup(50+(100*h),20,ofRandom(90,150));
		Springs.push_back(newSpring);

	
		Bob newBob;
		newBob.setup(Springs[h].Origin.x,Springs[h].Origin.y + Springs[h].restlength,(h+1)*2.5);
		Bobs.push_back(newBob);

	}
}

//--------------------------------------------------------------
void ofApp::update()
{
		ofVec2f zwaartekracht;
		zwaartekracht.set(0,0.01);

	for(int h = 0; h < Bobs.size(); h++)
	{

		Bobs[h].applyForce(zwaartekracht);

		
	}
}

//--------------------------------------------------------------
void ofApp::draw()
{
	for(int h = 0; h < Bobs.size(); h++)
	{
		ofVec2f springForce = Springs[h].connect(Bobs[h]); 
		Bobs[h].applyForce(springForce);
		
		//Springs[h].constanteLengte(Bobs[h],80,100); // I get the feeling this don't work
		Bobs[h].update();

		Bobs[h].display();
		Springs[h].display(Bobs[h]); 
	}
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key)
{

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key)
{

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button)
{
	for(int h = 0; h < Bobs.size(); h++)
	{
		if(Bobs[h].inside(x,y))
		{
			 Bobs[h].mousepressed(true);
		}
	}
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button)
{
	for(int h = 0; h < Bobs.size(); h++)
	{
			 Bobs[h].mousepressed(false);
	}
}

