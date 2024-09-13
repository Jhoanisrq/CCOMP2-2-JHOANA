/* Problema2
Implementar un programa que solicite un numero entero N e imprima los
numero impares desde el 1 hasta n separados por comas. OJO, despues del ´ultimo n´umero
no debe imprimir la ’,’. Por ejemplo, para N = 10, debe imprimir: 1, 3, 5, 7, 9
*/
#include <iostream>
using namespace std;

int main(){
    int x{1} ;
    int n{0} ;
    cout<<"Ingrese un numero entero: " ;
    cin >> n;
    while(x <= n){
        cout << x;
        if(x < n-1){
            cout << ", ";
        }
        x += 2;
    }
    return 0;
}