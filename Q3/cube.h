#ifndef CUBE_H
#define  CUBE_H

#include "ThreeDemensionalShape.h"
#include <ostream>
class cube: public ThreeDemensionalShape
{
    public:
    cube(double, double = 0, double = 0, double = 0);
    double area() const override final;
    double volume() const override final;
    void print(std::ostream &) const override final;
    cube& operator+ (const point&);
    
  //std::ostream& operator<<(cube);

    //private:
    double side;

};
std::ostream& operator<< (std::ostream& out, cube c);
#endif