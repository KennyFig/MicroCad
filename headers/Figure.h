#ifndef FIGURE_H
#define FIGURE_H

class Figure{
    public:
        Figure();
        ~Figure();
        virtual double getArea() = 0;
        virtual double getPerimeter() = 0;
        void toString();
        double area;
        double perimeter;
        static int numCreated;
};
#endif