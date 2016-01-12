#pragma once

#include "ofMain.h"

class Bullet {
	public:
		void setup();
		void launchFrom(ofVec2f origin);
		void update();
		void draw();



	private:
		void applyForce(ofVec2f force);

		bool mLaunched;
		ofVec2f mLocation, mVelocity, mAcceleration;
		float mRadius;
		float mRotation;
};