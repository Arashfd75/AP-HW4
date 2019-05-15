#ifndef TWODEMENSIONAL_H
#define TWODEMENSIONAL_H

#include "shape.h"
class TwoDemensionalShape:public shape
{
    public:
    TwoDemensionalShape(double = 0, double = 0);
    virtual double area() const = 0;
    virtual void print(std::ostream &) const override = 0;
    double x,y;
};
#endif