/*Ejer3
¿Cuál es el factor primo más grande del número 600851475143?     */
#include <iostream>
using namespace std;

bool esPrimo(int num) {
    for (int i = num/3 ; i < num; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int esPrimoMayor(int num) {
    for (int i = num - 1; i > 1; i--) {
        if (esPrimo(i)) {
            return i;
        }
    }
}

int main() {
    int n;
    cout << "Ingrese un numero: ";
    cin >> n;
    cout << endl;
    int primoMayor = esPrimoMayor(n);
    cout << "El mayor primo es: " << primoMayor << endl;

    return 0;
}