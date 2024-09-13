/* Problema1
Si se imprimiera todos los n´umeros naturales menores que 10, 
los cuales sean multiplos de 3 o 5, obtendr´ıamos: 3, 5, 6, 9. La suma
de estos m´ultiplos es 23.
Encontrar la suma de todos los m´ultiplos de 3 o 5 menores a 1000000 
*/

#include <iostream>
using namespace std;

int main(){
    int x{0};
    long long suma{0}; 
    while(x<1000000){
        if( x%3==0 || x%5==0 ){
            suma = suma + x;
        }
        x = x + 1;
    }
    cout<< "La suma es: "<< suma << endl ;
    return 0;
}