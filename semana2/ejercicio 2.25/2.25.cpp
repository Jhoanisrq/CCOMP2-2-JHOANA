/* 2.25 (Factores) Escriba un programa que lea tres números enteros 
y determine e imprima si los dos primeros números enteros son factores del segundo. ?? 
[Sugerencia: utilice el operador de resto (%).] */
#include<iostream>
using namespace std;

int main(){
    int num1 , num2 , num3 ;
    cout<< "Ingrese tres números: " ;
    cin >> num1 >> num2 >> num3 ;
    if(num1%num3==0 && num2%num3==0)
    {
        cout<< "son factores de "<<num3<< endl ;
    }
    else
    {
        cout<< "no son factores de "<< num3<< endl;
    }
    return 0;
}