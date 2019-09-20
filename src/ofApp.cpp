#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetLogLevel(OF_LOG_VERBOSE);
    
    // .h で ofVideoGrabber grabber; と定義済みとする
    video.setVerbose(true);
    video.listDevices();
    
    ofSetFrameRate(30);
    ofSetVerticalSync(true);
    ofBackground(0);
    video.videoSettings();
    video.setDeviceID(0);
    video.initGrabber(WIDTH, HEIGHT);
    //fbo.allocate(320, 240, GL_RGB);
    
    


}

//--------------------------------------------------------------
void ofApp::update(){
    //change();
    video.update();

//
//    if (video.isFrameNew())
//    {
//        fbo.begin();
//        video.draw(0, 0, fbo.getWidth(), fbo.getHeight());
//        fbo.end();
//
//        ofPixels pix;
//        fbo.readToPixels(pix);
//
//        // do something
//    }

}

//--------------------------------------------------------------
void ofApp::draw(){
     //fbo.draw(0,0);
    video.draw(0,0,ofGetWidth(),ofGetHeight());

}
//--------------------------------------------------------------
void ofApp::change(){
    
//    int n = ofRandom(200);
//
//
//    if(n < 2){
//        cout << "change" << endl;
//        video.close();
//        ofBackground(0);
//        camNUM = ofRandom(4);
//        video.setDeviceID(camNUM);
//        video.initGrabber(WIDTH, HEIGHT);
//    }
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    if (key == '1') {
        video.close();
        ofBackground(0);
        video.setDeviceID(0);
        video.initGrabber(ofGetWidth(), ofGetHeight());
        //my_grabber.setDeviceID(0);
    }
    if (key == '0') {
        video.close();
        ofBackground(0);
        video.setDeviceID(1);
        video.initGrabber(ofGetWidth(), ofGetHeight());
        //my_grabber.setDeviceID(1);
    }
//    if (key == '3') {
//        video.close();
//        ofBackground(0);
//        video.setDeviceID(2);
//        video.initGrabber(ofGetWidth(), ofGetHeight());
//        //my_grabber.setDeviceID(2);
//    }
//    if (key == ' ') {
//        if(flg){
//            flg = false;
//        }else{
//            flg = true;
//        }
//    }
    


}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

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
