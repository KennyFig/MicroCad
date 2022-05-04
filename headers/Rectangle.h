#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "../headers/Figure.h"

class Rectangle : public Figure{
    public:
        Rectangle(double length, double width);
        ~Rectangle();
        Rectangle& operator=(Rectangle& copy);
        double getArea();
        double getPerimeter();
        double length, width;
};
#endif