#include "../headers/Figure.h"
#include "../headers/Circle.h"
#include <iostream>
#define PI 3.14
#define _USE_MATH_DEFINES // for C
#include <math.h>
double radius;

//Constructor
Circle::Circle(double radius){
    this->radius = radius;
    std::cout << "Creating Circle with radius: " << radius << std::endl;
}

double Circle::getArea(){
    area = M_PI*radius*radius;
    return area;
}

double Circle::getPerimeter(){
    perimeter = 2*PI*radius;
    return perimeter;
}

Circle::~Circle(){
    std::cout << "Deleting Circle with radius: " << radius << std::endl;
}

Circle& Circle::operator=(Circle& copy){
    this->radius = copy.radius;
    return *this;
}
