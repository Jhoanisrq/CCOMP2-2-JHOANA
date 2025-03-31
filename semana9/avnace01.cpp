#include <iostream>

using namespace std;
//this: el puntero this es un puntero a la instancia actual
class integer{
    public:
        int val;
        integer(){
            val=1; cout << val;
        }
        integer(int v){
            val = v; cout <<"constructor con argumento "<< v << endl;
        }
};

int main(){
    integer i(3);
    integer j;
}