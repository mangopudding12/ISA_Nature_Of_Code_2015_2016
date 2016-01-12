#include "Bullet.h"

void Bullet::setup() {
	mLaunched = false;
	mLocation = ofVec2f(0, 0);
	mVelocity = ofVec2f(0, 0);
	mAcceleration = ofVec2f(0, 0);
	mRadius = 48.0;
	mRotation = 45;
}

void Bullet::launchFrom(ofVec2f origin) {
	setup();
	mLaunched = true;
	mLocation.set(origin);

	ofVec2f firingForce = ofVec2f(-9.6, -9.6);
	applyForce( firingForce );
}

void Bullet::update() {
	ofVec2f gravity = ofVec2f(0, 0.4);
	applyForce(gravity);

	mVelocity += mAcceleration;
	mLocation += mVelocity;
	mAcceleration *= 0.0;
	mRotation -= 0.8;
}

void Bullet::draw() {
	if (mLaunched) {
		ofPushMatrix();
			ofTranslate(mLocation.x, mLocation.y);
			ofRotate(mRotation);
			ofSetColor(0);
			ofFill();
			ofRect(0, 0, mRadius, mRadius);
			ofSetColor(200, 200);
			ofRect(0, 0, mRadius - 1, mRadius - 1);
		ofPopMatrix();
	}
}

void Bullet::applyForce(ofVec2f force) {
	mAcceleration += force;
}