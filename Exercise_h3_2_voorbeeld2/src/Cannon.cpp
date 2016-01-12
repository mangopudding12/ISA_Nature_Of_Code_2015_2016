#include "Cannon.h"

void Cannon::setup() {
	mColor.set(80);
	mWidth = 200;
	mHeight = 40;
	mLocation.set(ofGetWidth() * 0.7, ofGetHeight()*0.85);
	draaien = 0;
}

void Cannon::draw() {
	ofSetColor(mColor);
	ofRect(mLocation, mWidth*2, mHeight*2);
	ofPushMatrix();
		ofTranslate(mLocation.x+mWidth/2, mLocation.y-mHeight*3);
		ofRotate(draaien);
		ofRect(0, 0, mWidth*2, mHeight*2);
	ofPopMatrix();
}

void Cannon::fire( Bullet &bullet ) {
	bullet.launchFrom( ofVec2f(mLocation.x + 100, mLocation.y - 100) );
}

void Cannon:: keyPressed(int key)
{
	if (key == 356)
	{
		draaien += 0.2f;

	}  else if (key == 358){
		draaien -= 0.2f; 
	} 
}