/*2.28 (Dígitos de un entero) Escriba un programa que ingrese un entero de cuatro dígitos, 
separe el entero en sus dígitos y los imprima en orden inverso separados por dos espacios cada uno. 
[Sugerencia: Use los operadores de división y resto de enteros.] 
Por ejemplo, si el usuario escribe 4315, el programa debería imprimir:
5 1 3 4*/
#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Ingrece un entero de 4 digitos: " ;
    cin>> num ;
    cout<< num%10 << " ";
    num/=10;
    cout << num%10 << " ";
    num/=10;
    cout << num%10 << " ";
    num/=10;
    cout<<num%10<<endl ;

    return 0;
}