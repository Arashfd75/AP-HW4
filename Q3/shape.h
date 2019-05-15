#ifndef SHAPE_H
#define SHAPE_H
#include "point.h"
#include <iostream>
#include <math.h>
class shape{

virtual void print(std::ostream &) const = 0;
friend std::ostream &operator<<(std::ostream &, const shape &);

   
};
#endif