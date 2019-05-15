#include"shape.h"
/*
std::ostream& shape::operator<< (std::ostream& out, cube c){
    out << c.area() << "  " << c.volume() <<std::endl;

}*/
std::ostream &operator<<(std::ostream &out, const shape &shape)
{
    shape.print(out);
    return out;
}