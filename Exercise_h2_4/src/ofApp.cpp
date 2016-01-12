#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup()
{
	// Dit is de manier om een constructor aan te roepen 
	slak = Driehoek (20,5);
	slak.setup();

	f = Frictie (300,300,300);
	f.setup(); 

	zwaartekracht.set(0,0.02f*slak.massa);
	wind.set(0.01,0);
	wgrote = 100; 

}

//--------------------------------------------------------------
void ofApp::update()
{
		slak.applyforce(wind); 
		slak.applyforce(zwaartekracht); 

		weerstand *= 0; 

		if (slak.location.x + wgrote*3 > ofGetWidth())
		{
			weerstand.x = (slak.location.x / (ofGetWidth())) * -0.05;
		

		} else if (slak.location.x - wgrote*2.5 < 0) { 
			// Waarom is deze eigenlijk niet nodig ?? 
			weerstand.x =  (slak.location.x / ofGetWidth()) * 0.02;
		}
	

		if (slak.location.x > f.location.x && slak.location.x < f.location.x + f.radius)
		{
			if (slak.location.y > f.location.y && slak.location.y < f.location.y + f.radius)
			{
				f.frictieDriehoek(slak.velocity);
				slak.applyforce(f.frictie);
				cout << "Slak is binnen het vierkant en ondervind frictie" << endl; 
				cout << slak.accelaration << endl; 
			}
		}

		slak.applyforce(weerstand);  
		slak.bounce();
		slak.move();
}

//--------------------------------------------------------------
void ofApp::draw()
{ 
	f.display(); 
	slak.display();
}
