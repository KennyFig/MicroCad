#include "../headers/Figure.h"
#include "../headers/Triangle.h"
#include <math.h>
#include <iostream>

Triangle::Triangle(double a, double b, double c){
    this->a = a;
    this->b = b;
    this->c = c;
    std::cout << "Creating Triangle with sides: " << a << " " << b << " " << c << " " << std::endl;
}
double Triangle::getArea(){
    double s = (a+b+c)/2;
    area = sqrt(s*(s-a)*(s-b)*(s-c));
    return area;
}
double Triangle::getPerimeter(){
    perimeter = a+b+c;
    return perimeter;
}
Triangle::~Triangle(){
    std::cout << "Deleting Triangle with sides: " << a << " " << b << " " << c << " " << std::endl;
}

Triangle& Triangle::operator=(Triangle& copy){
    this->a = copy.a;
    this->b = copy.b;
    this->c = copy.c;
    return *this;
}