#include "Lines.hpp"

void Lines::setup(){




}

void Lines::update(){

}

void Lines::draw(){
	ofSetColor(23, 76, 189);
	ofDrawLine(100, 100, 200, 200);
	ofDrawLine(250, 200, 500, 600);
	ofDrawLine(250, 200, 500, 600);

	ofSetColor(123, 218, 78);
	ofDrawLine(123, 456, 563, 352);
	ofDrawLine(735, 162, 472, 462);
}
