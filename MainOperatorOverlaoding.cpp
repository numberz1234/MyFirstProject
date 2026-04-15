#include <iostream>
#include "Box.h"

using namespace std;

int main(){

    Box Box1;
    Box Box2;
    Box Box3;
    double volume = 0.0;

    //box1 specification

    Box1.SetLenght(6.0);
    Box1.SetBreadth(7.0);
    Box1.SetHeight(5.0);


    // box 2 specification
    Box2.SetLenght(12.0);
    Box2.SetBreadth(13.0);
    Box2.SetHeight(10.0);

    //volume of box1

    volume = Box1.GetVolume();
    cout << "Volume of Box1: "<< volume<<endl;

    //volume of Box2
    volume = Box2.GetVolume();
    cout<<"Volume of Box2: "<<volume<<endl;

    //adding two objects
    Box3 = Box1 + Box2;

    //volume of Box3
    volume = Box3.GetVolume();
    cout <<"Volume of Box3: "<< volume<<endl;



    return 0;
}