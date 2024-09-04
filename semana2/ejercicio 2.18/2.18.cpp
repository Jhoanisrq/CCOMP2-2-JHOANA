/* 2.18(Comparación de números enteros) Escriba un programa que le pida al usuario que ingrese dos números enteros y obtenga el resultado.
números del usuario, luego imprime el número más grande seguido de las palabras "es más grande". Si el
los números son iguales, imprime el mensaje "Estos números son iguales". */
#include<iostream>
using namespace std;

int main() {
int num1, num2 ;
cout << "Ingrse dos números enteros: " ;
cin >> num1 >> num2 ;
//comparando
if (num1 > num2) 
{
    cout << num1 << "es más grande" << endl ;
}
else if (num2 > num1)
{
    cout << num2 << "es más grande" << endl ;
}
else
{
    cout << "Estos números son iguales" << endl ;
}

return 0 ;
}