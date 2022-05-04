#ifndef CIRCLE_H
#define CIRCLE_H
#include "../headers/Figure.h"

class Circle : public Figure{
    public:
        Circle(double radius);
        ~Circle();
        Circle& operator=(Circle& copy);
        double getArea();
        double getPerimeter();
        double radius;
};
#endif