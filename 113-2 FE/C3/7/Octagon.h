#ifndef Octagon_h
#define Octagon_h
#include "Shape.h"
class Octagon : Shape
{
private:
    double length;

public:
    Octagon(/* args */);
    Octagon(double, string);
    void setLength(double);
    double getLength();
    double getPerimeter();
    void print();
};
#endif