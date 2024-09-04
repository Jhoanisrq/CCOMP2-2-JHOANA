/*2.29 (Tabla) Utilizando las técnicas de este capítulo, escriba un programa que calcule el área de superficie y 
el volumen de cubos con longitudes de caras de 0 a 4 cm. 
Utilice tabuladores para imprimir la siguiente tabla de valores con un formato ordenado:

Longitud de la cara del cubo (cm)
0
1
2
3
4
Área de la superficie del cubo (cm^2)
0
6
24
54
96
Volumen del cubo (cm^3)
0
1
8
27
64                                                                                    */
#include<iostream>
using namespace std;

int main(){
    int a=0 ;
    int cubo = a*a*a ;
    int area = 6*a*a ;
    cout<< "Longitud de la cara del cubo(cm)\tÁrea de la superficie del cubo(cm^2)\tVolumen del cubo(cm^3)\n" <<endl;
    cout<< a <<"\t\t\t\t\t"<< 6*a*a <<"\t\t\t\t\t"<< a*a*a <<"\n";
    a = a+1 ;
    cout<< a <<"\t\t\t\t\t"<< 6*a*a <<"\t\t\t\t\t"<< a*a*a <<"\n";
    a = a+1 ;
    cout<< a <<"\t\t\t\t\t"<< 6*a*a <<"\t\t\t\t\t"<< a*a*a <<"\n";
    a = a+1 ;
    cout<< a <<"\t\t\t\t\t"<< 6*a*a <<"\t\t\t\t\t"<< a*a*a <<"\n";
    a = a+1 ;
    cout<< a <<"\t\t\t\t\t"<< 6*a*a <<"\t\t\t\t\t"<< a*a*a <<"\n";


    return 0;
}