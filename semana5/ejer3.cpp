/*Ejer3
¿Cuál es el factor primo más grande del número 600851475143?     */
#include <iostream>
using namespace std;

bool esPrimo(int num) {
    for (int i = 2 ; i < num ; i++) {          
        if(num%i == 0){                                     
            return false;                                   
        }      
    }
    return true;
}

int main() {
    int n;
    cout << "Ingrese un numero: ";
    cin >> n;
    cout << endl;
    for (int i = n - 1; i > 1; i--) {
        if (esPrimo(i)) {
        cout << "El mayor primo es: " << i << endl;
        break;
        }
    }
    return 0;
}