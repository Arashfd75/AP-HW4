#include "point.h"

point::point(double x,double y){
    this->x = x;
    this->y = y;
    this->z = 0;
}

point::point(double x,double y, double z):point{x, y}{this->z = z;}

