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

   cout<< "Enter the length for a Rectabgle 2:  ";
   cin >> length;
   cout << "Enter the width for a Recatangle 2:  ";
   cin >> width;
   Rectangle secondObjectOfRecatangle(length, width);
   float area2 = secondObjectOfRecatangle.calculateArea();
   cout << "Area Of Rectangle2 :  "<< area2<< endl;



    return 0;
}