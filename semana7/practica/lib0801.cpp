#include <iostream>
using namespace std;

void cubeByReference(int*);
int main() {
    int num01{25};
    int num02{8};
    int *punt_num02= &num02 ;
    int num03=num01+num02;
    cout << "El original del numero es: " << num01 << endl;
    cout << "El valor original del numero es: " << num02 <<endl;
    cubeByReference(&num02);
    cubeByReference(&num01);
    cout << "\nEl nuevo valor del numero es: " << num01;
    cout << "\nEl nuevo valor del numero es: " << num02 << endl;
    num01= *punt_num02;
    if(num01 == num02){
        cout<<"num01 y num02 son iguales";
    }else
        cout<<"num01 y num02 son diferentes"; 
}
//.size     .size sof array
void cubeByReference(int* nPtr) {
    *nPtr = *nPtr * *nPtr * *nPtr; 
}