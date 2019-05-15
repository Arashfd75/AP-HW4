#ifndef CIRCLE_H
#define  CIRCLE_H

#include "TwoDemensionalShape.h"

class circle: public TwoDemensionalShape
{
    public:
    circle(double, double x = 0, double y = 0);
    circle(circle&);
    double area() const override final;
    void print(std::ostream &) const override final;
    circle& operator+ (const point&);
    circle& operator= (point&);
    
    double radius;
    const double pi{3.1415};
};
std::ostream& operator<< (std::ostream& out, circle c);
#endif