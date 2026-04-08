#ifndef RECTANGLE_H
#define RECTANGLE_H


class Rectangle{

    private : 

    float length;
    float width;

    public :

    Rectangle();
    ~Rectangle();
    
    void SetValuesOfSides(float l, float w);
    float getValuesOfSides(float& leng, float wdt);
    float calculateArea();

};

#endif