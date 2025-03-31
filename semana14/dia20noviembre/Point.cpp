#include <iomanip>
#include "Point.h"
using namespace std; 

Point :: Point() : x{0},y{0} {}

Point :: Point(int _x,int _y) {
    x = _x;
    y = _y;
}


ostream& operator<<(ostream& output, const Point& punto ){
output<< "("<< punto.x << "," << punto.y << ")";
    return output;
}


istream& operator>>(istream& input, Point& punto){
    input >> punto.x >> punto.y;
    return input;
}