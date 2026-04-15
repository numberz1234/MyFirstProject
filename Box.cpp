#pragma once
#include "Box.h"

Box::Box(){
    length = 0.0;
    breadth = 0.0;
    height = 0.0;
}

Box::Box(const double newLength, const double newBreadth, const double newHeight){
    length = newLength;
    breadth = newBreadth;
    height = newHeight;
}

Box::~Box(){} // destructor doing nothing for now.

double Box::GetVolume(){
    return length * breadth * height;
}

void Box::SetLenght(double len){
    length = len;
}

void Box::SetBreadth(double bre){
    breadth = bre;
}

void Box::SetHeight(double hei){
    height = hei;
}


//operator overloading
Box Box::operator+(const Box& b){
    Box box;

    box.length = this -> length + b.length;
    box.breadth = this -> breadth + b.breadth;
    box.height = this -> height + b.height;

    return box;
}