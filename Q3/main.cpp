#include<iostream>
#include "circle.h"
#include "cube.h"
#include "square.h"
#include "sphere.h"

//#include
 /*
std::ostream& operator<< (std::ostream& out, shape c){
    //c.print();
    return out;
}
*/

 
int main(){
    /*
    circle c1{1.0};
    //std::cout << c1.area() << std::endl;
    cube c2{2.0};
    std::cout << c2;
    circle c3{c1};
    point p1{1,2};
    c3 + p1;
    c2 + p1;
    c2.print(std::cout);
    std::cout << c2;
    */
//    c3.print();
    //std::cout << c3;
    //std::cout << c2;
    //std::cout << c2;

    square sqr( 12, 2, 2 );
	sphere sph( 5, 1.5, 4.5 );
	cube cub( 2.2 );
	circle cir( 3.5, 6, 9 );
	shape *ptr[ 4 ] = { &sph, &sqr, &cir, &cub };

	for ( int x = 0; x < 4; ++x )
		std::cout << *( ptr[ x ] ) << '\n';
    
}