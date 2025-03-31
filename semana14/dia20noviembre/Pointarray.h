#ifndef POINTARRAY_H
#define POINTARRAY_H
#include "Point.h"
#include <iostream>

class PointArray {
    friend std::ostream& operator<<(std::ostream&, const PointArray&);
    friend std::istream& operator>>(std::istream&, PointArray&); 
    public: 
        PointArray();
        PointArray(const int arr[], int size);
        PointArray(const PointArray&);
        
        ~PointArray();

        size_t getSize() const;
        void push_back(int val);
        void insert(int val, int pos);
        void remove(int pos);

    private:
        size_t size;
        Point *ptr;

};

#endif