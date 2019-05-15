#ifndef SQUARE_H
#define  SQUARE_H

#include "TwoDemensionalShape.h"

class square: public TwoDemensionalShape
{
    public:
    square(double, double x = 0, double y = 0);
    square(square&);
    double area() const override final;
    void print(std::ostream &) const override final;
    square& operator+ (const point&);
    square& operator= (point&);
    
    double side;
    };
std::ostream& operator<< (std::ostream& out, square c);
#endif