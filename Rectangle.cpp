#include "Rectangle.h"

Rectangle::Rectangle(){
    length = 0.0f;
    width = 0.0f;
}

// Assigning new values to sides (length and width). Initially they both holds 0.
void Rectangle::SetValuesOfSides(float l, float w){

    length = l;
    width = w;

}

//getting the values of sides by assigning the to new varibales since they are private so should be accessibe.
float Rectangle::getValuesOfSides(float& leng, float wdt){

    //I have used a reference so that the function should output two values.
    leng = length;
    wdt = width;

    return width;
}

float Rectangle::calculateArea(){
    float area = length * width;
    return area;
}

Rectangle::~Rectangle(){
    //nothing here for now.
}