#pragma once
#include <iostream>
using namespace std;

class Box{

    public:
        Box();

        Box(const double newLength, const double newBreadth, const double newHieght);

        ~Box();

        double GetVolume();
        void SetLenght(double len);
        void SetBreadth(double bre);
        void SetHeight(double hei);

        // overload + oparetor to add two Box objects

        Box operator+(const Box& b);

        private:
            double length;
            double breadth;
            double height;
};