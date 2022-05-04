#include "../headers/Figure.h"
#include <iostream>

using namespace std;

/*static*/ int Figure::numCreated = 0;

Figure::Figure(){
    area = 0;
    perimeter = 0;
    numCreated++;
    cout << "Figure Constructor Called." << endl;
}
double Figure::getArea(){
    return area;
}
double Figure::getPerimeter(){
    return perimeter;
}
void Figure::toString(){
    cout << "Area = " << getArea() << " Perimeter = " << getPerimeter() << endl;
}
Figure::~Figure(){
    numCreated--;
    cout << "Figure destructor called. " << numCreated << " objects left." << endl;
}