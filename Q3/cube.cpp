#include "cube.h"
#include<iostream>
cube::cube(double s, double x, double y, double z):ThreeDemensionalShape(x, y, z)
{
    side = s;
}

double cube::area() const{
    return 6 * side * side;
}

double cube::volume() const{
    return side * side * side;
}

void cube::print(std::ostream &out) const{
    out << "Cube side lenght = " << side << std::endl << "center->  (" 
    << x << "," << y << "," << z << ")" << std::endl << "area of " << area() <<
    " & Volume of " << volume() << std::endl;
}

cube& cube::operator+(const point& p){
    //newt = copy(this);
    x += p.x;
    y += p.y;
    z += p.z;
    return *this;
}

std::ostream& operator<< (std::ostream& out, cube c){
    return std::cout << "Square side lenght = " << c.side << std::endl << "center->  (" 
    << c.x << "," << c.y << "," << c.z << ")" << std::endl << "area of " << c.area() << std::endl;
}
