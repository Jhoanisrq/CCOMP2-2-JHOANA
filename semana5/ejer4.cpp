/* Ejer3
Encontrar el palindromo mas grande producto de 3 digitos 
como 91*99 = 9009 - 2digitos  

NO acabado :/ */
#include <iostream>
using namespace std;

bool esPalindromo(int produc){
    int iproduc = 0;
    for(int i = 5; i>=0 ; i--){
        int r = produc % 10;
        iproduc += r*(10*i);
    }
    if(produc == iproduc){
        return true;
    }
    return false;
}

int main(){
    int a=25;
    int b=13;
    int p= a*b;
    cout<< esPalindromo(p);
}
