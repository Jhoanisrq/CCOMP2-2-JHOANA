#ifndef POINT_H
#define POINT_H
#include <string>
#include <iostream>

class Point{
    friend std::ostream& operator<<(std::ostream&, const Point&);
    friend std::istream& operator>>(std::istream&, Point&);
private:
    int x;
    int y;

public:
    Point();
    Point(int x, int y);  

};

#endif
