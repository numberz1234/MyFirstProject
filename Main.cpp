#include <iostream>
#include "Rectangle.h"
using namespace std;

int main(){
    Rectangle firstObjectOfRectangle;
    float length;
    float width;

    cout<< "Enter the length for a Rectabgle:  ";
    cin >> length;
    cout << "Enter the width for a Recatangle:  ";
    cin >> width;

    firstObjectOfRectangle.SetValuesOfSides(length,width);
    float area = firstObjectOfRectangle.calculateArea();

    cout << "Area Of Rectangle:  "<< area<< endl;


    return 0;
}