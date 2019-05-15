#ifndef THREEDEMENSIONAL_H
#define THREEDEMENSIONAL_H

#include "shape.h"

class ThreeDemensionalShape: public shape
{
    public:
    ThreeDemensionalShape(double = 0, double = 0, double = 0);
    virtual double area() const = 0;
    virtual void print(std::ostream &) const override = 0;
    virtual double volume()const = 0;
    double x,y,z;
};

#endif