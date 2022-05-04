#ifndef TRIANGLE_H
#define TRIANGLE_H
#include "../headers/Figure.h"

class Triangle : public Figure{
    public:
        Triangle(double a, double b, double c);
        ~Triangle();
        Triangle& operator=(Triangle& copy);
        double getArea();
        double getPerimeter();
        double a, b, c;
};
#endif