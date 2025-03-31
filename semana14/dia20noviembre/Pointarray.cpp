#include <iostream>
#include "Pointarray.h"

using namespace std;

PointArray::PointArray() :
    
    tam{0}, ptr{new Point[tam]} {}

PointArray::PointArray(const Point arr[], int s) :
        tam{s}, ptr{new Point[tam]} {
    for(size_t i{0}; i < tam; i++) {
        ptr[i] = arr[i];
    }
}

PointArray::PointArray(const PointArray &o) :
        tam{o.tam}, ptr{new Point[tam]}{
    for(size_t i{0}; i < tam; i++) {
        ptr[i] = o.ptr[i];
    }
}
PointArray::~PointArray() {
    delete[] ptr;
}
size_t PointArray::getSize() const {
    return tam;
}
void PointArray :: push_back(int val) {
    int *tmp = new int[tam+1];
    for(size_t i{0}; i < tam; i++) {
        tmp[i] = ptr[i];
    }
    tam++;
    delete[] ptr;
    ptr = tmp;
    ptr[tam-1] = val;
}
void PointArray :: insert(int val, int pos) {
    int *tmp = new int[size+1];
    for(size_t i{0}; i < pos; i++) {
        tmp[i] = ptr[i];
    }
    tmp[pos] = val;
    size++;
    for(size_t i{pos}; i < size; i++) {
        tmp[i+1] = ptr[i];
    }
    delete[] ptr;
    ptr = tmp;
}
void DynamicArray::remove(int pos) {
    int *tmp = new int[size-1];
    for(size_t i{0}; i < size; i++) {
        if(i >= pos) {
            tmp[i] = ptr[i+1];    
        } else {
            tmp[i] = ptr[i];
        }
    }
    size--;
    delete[] ptr;
    ptr = tmp;
}
ostream& operator<<(ostream& output, const DynamicArray& a) {
    output << "[ ";
    for(size_t i{0}; i < a.size; ++i) {
        output << a.ptr[i] << " ";
    }
    output <<"]";
    return output;
}