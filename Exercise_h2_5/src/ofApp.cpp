#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup()
{
	hoeveelheid = 10;

	for (int h = 0; h < hoeveelheid; h ++)
	{
		Ball newslak = Ball(5 , 2 + (h*2), (h*2)); 
		newslak.setup(); 
		slak.push_back(newslak);
	}

	f = Frictie (0,500,ofGetWidth(),ofGetHeight(),0.001);
	f.setup(); 

	wind.set(0.01,0);
	wgrote = 100; 

	
	for (int h = 0; h < hoeveelheid; h ++)
	{
		zwaartekracht.set(0,0.02f*slak[h].massa);
	}
}

//--------------------------------------------------------------
void ofApp::update()
{
	for (int h = 0; h < hoeveelheid; h ++)
	{
	
		slak[h].applyforce(wind); 
		slak[h].applyforce(zwaartekracht); 

		weerstand *= 0; 

		if (slak[h].location.x + wgrote*3 > ofGetWidth())
		{
			weerstand.x = (slak[h].location.x / (ofGetWidth())) * -0.05;
		

		} else if (slak[h].location.x - wgrote*2.5 < 0) { 
			// Waarom is deze eigenlijk niet nodig ?? 
			weerstand.x =  (slak[h].location.x / ofGetWidth()) * 0.02;
		}
	

		if (slak[h].location.x > f.location.x && slak[h].location.x < f.location.x + f.radius.x)
		{
			if (slak[h].location.y > f.location.y && slak[h].location.y < f.location.y + f.radius.y)
			{
				f.frictieDriehoek(slak[h].velocity);
				slak[h].applyforce(f.frictie);
			}
		}


		slak[h].applyforce(weerstand);  

		for (int h = 0; h < hoeveelheid; h ++)
		{
			zwaartekracht.set(0,0.01f*slak[h].massa);
		}

		slak[h].bounce();
		slak[h].move();
	}
}

//--------------------------------------------------------------
void ofApp::draw()
{ 
	f.display(); 

	for (int h = 0; h < hoeveelheid; h ++)
	{
		slak[h].display();
	}
}
