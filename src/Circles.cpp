//
//  Circles.cpp
//  abstractArt
//
//  Created by Jake Hobbs on 16/12/2019.
//

#include "Circles.hpp"

void Circles::setup(){

}

void Circles::update(){
    
}

void Circles::draw(){
    ofSetColor(255, 48, 27);
    ofDrawCircle(100, 50, 25);
    ofDrawCircle(58, 158, 16);

    ofSetColor(86, 167, 72);
    ofDrawCircle(678, 653, 9);
    ofDrawCircle(987, 75, 45);
    ofDrawCircle(682, 88, 50);

    ofSetColor(98, 0, 155);
    ofDrawCircle(98, 173, 20);
    ofDrawCircle(389, 200, 100);

    ofSetColor(39, 52, 2);
    ofDrawCircle(1000, 456, 76);
    ofDrawCircle(500, 500, 3);
    ofDrawCircle(145, 700, 46);

    ofSetColor(65, 4, 50);
    ofDrawCircle(98, 469, 130);
    ofDrawCircle(512, 384, 50);
}
