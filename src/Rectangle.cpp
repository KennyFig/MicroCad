#include "../headers/Figure.h"
#include "../headers/Rectangle.h"
#include <iostream>

double length;
double width;

Rectangle::Rectangle(double length, double width){
    this->length = length;
    this->width = width;
    std::cout << "Creating Rectangle with length: " << length << " and width: " << width << std::endl;
}
double Rectangle::getArea(){
    area = length*width;
    return area;
}
double Rectangle::getPerimeter(){
    perimeter = (2*length)+(2*width);
    return perimeter;
}
Rectangle::~Rectangle(){
    std::cout << "Deleting Rectangle with length: " << length << " and width: " << width << std::endl;
}

Rectangle& Rectangle::operator=(Rectangle& copy){
    this->length = copy.length;
    this->width = copy.width;
    return *this;
}