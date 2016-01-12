#pragma once

#include "ofMain.h"
#include "Bullet.h"

class Cannon {
	public:
		void setup();
		void draw();
		void fire( Bullet &bullet );
		void keyPressed(int key);

		float draaien;

	private:
		float mWidth, mHeight;
		ofColor mColor;
		ofPoint mLocation;
};