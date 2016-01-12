#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	ofBackground(255);
	mCannon.setup();
	mBullet.setup();
}

//--------------------------------------------------------------
void ofApp::update(){
	mBullet.update();
	mCannon.keyPressed(toets);
}

//--------------------------------------------------------------
void ofApp::draw(){
	mBullet.draw();
	mCannon.draw();
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
	toets = key;
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
	mCannon.fire(mBullet);
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){

}