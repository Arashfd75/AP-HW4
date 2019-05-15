#include "square.h"
#include <iostream>

square::square(double s, double x,double y):TwoDemensionalShape(x,y){
    side = s; 
}

double square::area() const{
    return side * side;
}

square::square(square& c):TwoDemensionalShape(c.x, c.y){side = c.side;}

square& square::operator+(const point& p){
    //newt = copy(this);
    x += p.x;
    y += p.y;
    return *this;
}
void square::print(std::ostream &out) const{
    out << "square side = " << side << std::endl << "center->  (" 
    << x << "," << y << ")" << std::endl << "area of " << area() << std::endl;
    //return out;
}

std::ostream& operator<< (std::ostream& out, square c){
    return std::cout << "square side = " << c.side << std::endl << "center->  (" 
    << c.x << "," << c.y << ")" << std::endl << "area of " << c.area() << std::endl;
    }
