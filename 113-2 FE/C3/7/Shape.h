#ifndef Shape_h
#define Shape_h
#include <iostream>
using namespace std;
class Shape
{
private:
    string color;

public:
    Shape(/* args */);
    void setColor(string);
    string getColor();
};
#endif