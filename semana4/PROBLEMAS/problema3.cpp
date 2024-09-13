/* Problema3
Implemente un programa que solicite un numero n e imprima todos los numeros primos menores a n 
*/

#include <iostream>
using namespace std;

int main() {
  int n;

  cout << "Ingrese un número entero: ";
  cin >> n;

  cout << "Los números primos menores que " << n << " son: ";
  int i = 2;                      // n = 8
  while (i < n) {                 // 2 < 8       3 < 8     4 < 8      5 < 8                6 < 8      7 < 8
    bool esPrimo = true;            
    int j = 2;
    while (j * j <= i) {          // 4<=2 no     4<=2 no   4<=4 si    4<=5 si    9<=5 no  4<=6 si    4<=7 si    9<=7 no
      if (i % j == 0) {           //                       4%4==0 si  4%5==0 no            6%2==0 si  7%2==0 no
        esPrimo = false;          //                       break   
        break;
      }
      j++;                        //                                  j=3                             j=3
    }
    if (esPrimo) {                // true        true      false                 true     false                 true
      cout << i << " ";           //  2           3                               5                              7
    }
    i++;
  }
  
  return 0;
}