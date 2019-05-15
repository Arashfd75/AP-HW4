#ifndef SPHERE_H
#define  SPHERE_H

#include "ThreeDemensionalShape.h"
#include <ostream>
class sphere: public ThreeDemensionalShape
{
    public:
    sphere(double, double = 0, double = 0, double = 0);
    double area() const override final;
    double volume() const override final;
    void print(std::ostream &) const override final;
    sphere& operator+ (const point&);
    
  //std::ostream& operator<<(sphere);

    //private:
    double radius;
    double pi{3.1415};
};
std::ostream& operator<< (std::ostream& out, sphere c);
#endif