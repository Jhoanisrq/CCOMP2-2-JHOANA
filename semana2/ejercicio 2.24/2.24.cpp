/*2.24 (Par o impar) Escriba un programa que lea dos números enteros y determine e imprima si cada uno de ellos, 
así como la suma de los dos números enteros, es un número impar. [Sugerencia: utilice el operador de resto (%). 
Un número impar no es múltiplo de dos. Cualquier número impar tiene un resto de uno cuando se divide por 2.]*/
#include<iostream>
using namespace std;

int main(){
    long x ;
    long y ;
    cout <<"Ingrese 2 numeros enteros: ";
    cin >> x >> y ;

    if ( x%2 == 0)
    {
        cout<< x << " es par" << endl ;
    }
    else
    {
        cout<< x <<" es impar" << endl ;
    }

    if ( y % 2 == 0)
    {
        cout<< y << " es par" << endl ;
    }
    else
    {
        cout<< y <<" es impar" << endl ;
    }
    
    int suma = x + y ;
    cout<<"Su suma es "<< suma << endl;
    if ( suma % 2 == 0)
    {
        cout<< suma << " es par" << endl ;
    }
    else
    {
        cout<< suma <<" es impar" << endl ;
    }

    return 0 ;
}