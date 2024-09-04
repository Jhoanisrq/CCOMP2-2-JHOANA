/*2.17 (Impresión) Escriba un programa que imprima los caracteres V a Z en la misma línea 
con cada par de caracteres adyacentes separados por un espacio, es decir, VX YZ. 
Haga esto de varias maneras:*/
#include<iostream>
using namespace std;
//a) Utilizando una declaración con dos operadores de inserción de flujo.
int main(){
char v= 'V' ;
char x= 'X' ;
char y= 'Y' ;
char z= 'Z' ;
cout << v << x << " " << y << z << endl ;

return 0 ;
}