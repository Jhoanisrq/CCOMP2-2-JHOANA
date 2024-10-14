#include <iostream>

using namespace std;
void intercambio_ptr(int *a, int *b){
        int* temp = a;
        cout<<a <<endl;
        cout<< temp;
        a = b;
        b = temp;
}
int main() {
    int x = 10;
    cout << &x << endl;
    int *ptr = &x;
    cout << ptr << endl;
    cout << *ptr << endl;
    cout << *&x << endl;

    int y = 1000;
    cout << &y << endl;
    ptr = &y;
    cout << ptr << endl;
    cout << *ptr << endl;

    intercambio_ptr( &x , &y );
    cout<<"inter x "<< x << endl;
    cout<<"inter y "<< y << endl;
    return 0;
}