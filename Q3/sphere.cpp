#include "sphere.h"
#include<iostream>
sphere::sphere(double s, double x, double y, double z):ThreeDemensionalShape(x, y, z)
{
    radius = s;
}

double sphere::area() const{
    return 4 * pi * radius;
}

double sphere::volume() const{
    return (4.0/3) * pi * radius * radius * radius;
}

void sphere::print(std::ostream &out) const{
    out << "Sphere radius = " << radius << std::endl << "center->  (" 
    << x << "," << y << "," << z << ")" << std::endl << "area of " << area() << 
    " & Volume of " << volume() << std::endl;

}

sphere& sphere::operator+(const point& p){
    //newt = copy(this);
    x += p.x;
    y += p.y;
    z += p.z;
    return *this;
}

std::ostream& operator<< (std::ostream& out, sphere c){
    return std::cout << "Square radius lenght = " << c.radius << std::endl << "center->  (" 
    << c.x << "," << c.y << "," << c.z << ")" << std::endl << "area of " << c.area() << std::endl;
}
