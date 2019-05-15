#include "circle.h"
#include <iostream>

circle::circle(double r, double x,double y):TwoDemensionalShape(x,y){
    radius = r; 
}

double circle::area() const{
    return pi * radius * radius;
}

circle::circle(circle& c):TwoDemensionalShape(c.x, c.y){radius = c.radius;}

circle& circle::operator+(const point& p){
    //newt = copy(this);
    x += p.x;
    y += p.y;
    return *this;
}
void circle::print(std::ostream &out) const{
    out << "Circle radius = " << radius << std::endl << "center->  (" 
    << x << "," << y << ")" << std::endl << "area of " << area() << std::endl;
    //return out;
}

std::ostream& operator<< (std::ostream& out, circle c){
    return std::cout << "Circle radius = " << c.radius << std::endl << "center->  (" 
    << c.x << "," << c.y << ")" << std::endl << "area of " << c.area() << std::endl;
    }

/*
std::ostream circle::print(){
    std::cout << "Circle radius = " << radius << std::endl << "center->  (" 
    << x << ", " << y << ")" << std::endl << "area of " << this->area() << std::endl;
}*/