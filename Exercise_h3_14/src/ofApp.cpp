#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup()
{
	ofSetFrameRate(25);

	Lijnbegin.set(0,150);
	Lijneinde.set(600,600);
	radius = 50;
	initHeight = 400; 
	
	angle = 39.9 * RAD_TO_DEG;
	Acceleration.set(0.0);
	Velocity.set(0.0);
	Location.set(Lijnbegin.x + 50 ,(Lijnbegin.y - tan(angle))-27); 
	zwaartkracht = 0.1;
}

//--------------------------------------------------------------
void ofApp::update()
{
	//Normaly = zwaartkracht * sin(angle);
	//Normal.set(Normaly,zwaartkracht);

	cout << "Normal force" << Normal << endl;

	Acceleration.set(cos(angle),cos(angle)-0.178);

	cout << "Acceleration" << Acceleration << endl;

	//friction.set(Velocity.x,Velocity.y);
    //friction.normalize();
	//friction *= -1; 
	//friction *= Normal.length();

	cout <<  friction << "friction" << endl;
	//Acceleration += friction;
	Velocity += Acceleration;
	Location += Velocity;

	Acceleration *= 0;
}

//--------------------------------------------------------------
void ofApp::draw()
{	
		
		
		
	ofSetColor(5,133,155);
	ofSetLineWidth(3);
	ofLine(Lijnbegin.x,Lijnbegin.y,Lijneinde.x,Lijneinde.y);
	ofSetColor(11,92,106);
	ofLine(600,600,ofGetWidth(),600);

	ofTranslate(Location.x,Location.y);
	ofRectMode(OF_RECTMODE_CENTER);
		ofRotate(angle);
		ofSetColor(198,34,97);
		ofRect(0,0,radius,radius);
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key)
{
	
}
