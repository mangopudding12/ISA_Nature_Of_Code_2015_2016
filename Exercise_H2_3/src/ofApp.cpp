#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup()
{
	for (int i =0; i < aantal; i ++ )
	{
		vissen[i] = new Rectt (1*i,i,i*60);

		vissen[i]->setup(); 
		zwaartekracht.set(0,0.02f);
		wind.set(0.01,0);

		wgrote = 100; 
	}
}

//--------------------------------------------------------------
void ofApp::update()
{
	for (int i =0; i < aantal; i ++ )
	{
		vissen[i]->applyforce(wind); 
		vissen[i]->applyforce(zwaartekracht); 

		weerstand *= 0; 

		if (vissen[i]->location.x + wgrote*3.5 > ofGetWidth())
		{
			weerstand.x = (vissen[i]->location.x / (ofGetWidth())) * -0.05;
		

		} else if (vissen[i] ->location.x - wgrote*2 < 0) { 
			// Waarom is deze eigenlijk niet nodig ?? 
			weerstand.x =  (vissen[i]->location.x / ofGetWidth()) * 0.02;
		}
	

		vissen[i] -> applyforce(weerstand); 

		vissen[i]->checkedge(); 
		vissen[i]->bounce();
	}
}

//--------------------------------------------------------------
void ofApp::draw()
{
	for (int i =0; i < aantal; i ++ )
	{
		vissen[i]->display(); 
	}
}



void ofApp:: exit() 
{
	for (int i =0; i < aantal; i ++ )
	{
		delete vissen[i]; 
	}
}