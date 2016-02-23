//#include "testApp.h"
//testApp.h
//-- it's not great practice to declare class variables outside the header, but do it
//   anyway so you can turn in this one file -- thanks!~
ofColor color;
int hue;

//--------------------------------------------------------------
void testApp::setup(){
    ofSetFrameRate(12);
    color = ofColor::fromHsb(0, 255, 255);
}

//--------------------------------------------------------------
void testApp::update(){
    color.setHue(hue);
    ofSetColor(color);
    hue++;
}

//--------------------------------------------------------------
void testApp::draw(){
    ofBackground(0);
    for (int x=4; x<=1024; x+=10)
        for (int y=4; y<=768; y+=10)
            ofCircle(x, y, ofRandom(2,5));
}

//--------------------------------------------------------------
void testApp::keyPressed(int key){

}

//--------------------------------------------------------------
void testApp::keyReleased(int key){

}

//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void testApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void testApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void testApp::dragEvent(ofDragInfo dragInfo){

}
