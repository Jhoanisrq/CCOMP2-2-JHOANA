/*2.19 (Aritmética, mínimo y máximo) Escriba un programa que ingrese tres números enteros 
desde el teclado e imprima la suma, el promedio, el producto, el mínimo y el máximo de estos números. 
El cuadro de diálogo en pantalla debería aparecer de la siguiente manera:

Introduzca tres números enteros diferentes: 13 27 14
La suma es 54
El promedio es 18
El producto es 4914
El más pequeño tiene 13
El más grande tiene 27                                                  */
#include<iostream>
using namespace std;

int main(){
    float num1, num2, num3 ;
    cout<< "Introduce tres numeros enteros diferentes: ";
    cin>> num1>> num2>> num3;
    float suma = num1+num2+num3 ;
    float promedio = (suma)/3 ;
    float producto = num1*num2*num3 ;
    cout << "La suma es " << suma << endl ;
    cout << "El promedio es " << promedio << endl ;
    cout << "El producto es " << producto << endl ;
    if (num1<num2 && num1<num3)
    {
        cout<<"El más pequeño tiene " << num1 << endl ;
    }
    else if (num2<num1 && num2<num3)
    {
        cout<<"El más pequeño tiene " << num2 << endl ;
    }
    else if (num3<num1 && num3<num2)
    {
        cout<<"El más pequeño tiene " << num2 << endl ;
    }

    if (num1>num2 && num1>num3)
    {
        cout<<"El más grande tiene " << num1 << endl ;
    }
    else if (num2>num1 && num2>num3)
    {
        cout<<"El más grande tiene " << num2 << endl ;
    }
    else if (num3>num1 && num3>num2)
    {
        cout<<"El más grande tiene " << num2 << endl ;
    }

return 0;
}