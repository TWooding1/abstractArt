#include "Rectangles.hpp"


void Rectangles::setup(){
    randomColour = ofRandom(0,255);
}

void Rectangles::update(){
    
}

void Rectangles::draw(){
    
    
    ofSetColor(randomColour, 011, 130, 125);
    ofDrawRectangle(100, 10, 100, 100);
    
    ofSetColor(randomColour, randomColour, 130, 155);
    ofDrawRectangle(500, 50, 100, 100);
    
    
    
}
