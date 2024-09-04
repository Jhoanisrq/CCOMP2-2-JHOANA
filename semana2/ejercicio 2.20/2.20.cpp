/*2.20(Diámetro, Circunferencia y Área de un Círculo) Escribe un programa que lea en el radio de
un círculo como un número entero e imprime el diámetro, la circunferencia y el área del círculo. 
Utilice el valor constante 3.14159 para π. Realice todos los cálculos en las instrucciones de salida. 
[Nota: En este capítulo, solo hemos analizado Constantes y variables enteras. 
En el Capítulo 4 analizamos los números de punto flotante, es decir, valores que
[tienen puntos decimales.]                                                                                       */
#include<iostream>
using namespace std;

int main(){
    float pi = 3.14159 ;
    float radio ;

    cout<<"Ingrese el radio de un circulo como un número entero: " ;
    cin >> radio ;

    float diametro = 2*radio ;
    float circunferencia = 2*pi*radio ;
    float area = pi * radio * radio ;

    cout<< "El diametro del circulo es " << diametro << endl ; 
    cout<< "La circunferencia del circulo es " << circunferencia << endl ; 
    cout<< "El area del circulo es " << area << endl ; 

    return 0 ;
}