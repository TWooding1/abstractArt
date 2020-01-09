#include "Triangles.hpp"

void Triangles::setup(){
    
}

void Triangles::update(){
    
}

void Triangles::draw(){
	ofSetColor(0);
	ofDrawTriangle(100, 200, 150, 200, 125, 250);
	ofSetColor(100);
	ofDrawTriangle(300, 50, 900, 300, 300, 600);
	ofSetColor(255);
	ofDrawTriangle(500,500,850,500,550,750);
	ofSetColor(75);
	ofDrawTriangle(150, 500, 75, 600, 225, 700);

}
