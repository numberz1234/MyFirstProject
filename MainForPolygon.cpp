#include "Rectangle.h"
#include "Polygon.h"
#include "Triangle.h"
#include <iostream>

using namespace std;

int main(){
    Rectangle rect;
    Triangle trgl;

    rect.SetValues(4,5);
    trgl.SetValues(4,5);

    cout << rect.area()<<endl;
    cout << trgl.area()<<endl;





    return 0;
}