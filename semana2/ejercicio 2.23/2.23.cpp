/* 2.23 (Números enteros más grandes y más pequeños) Escriba un programa que lea cinco números enteros 
y determine e imprima el número entero más grande y el más pequeño del grupo. 
Utilice únicamente las técnicas de programación que aprendió en este capítulo. */

#include<iostream>
using namespace std;

int main(){
    int num1,num2,num3,num4,num5 ;
    cout<< "Ingrece 5 numeros enteros diferentes: " ;
    cin >> num1 >> num2 >> num3 >> num4 >> num5 ;
    //mas grande
    if (num1 > num2 && num1 > num3 && num1 > num4 && num1 > num5) 
    {
    cout << num1 << " es el más grande" << endl ;
    }
    else if (num2 > num1 && num2 > num3 && num2 >num4 && num2 > num5)
    {
    cout << num2 << " es el más grande" << endl ;
    }
    else if (num3 > num1 && num3 > num2 && num3 >num4 && num3 > num5)
    {
    cout << num3 << " es el más grande" << endl ;
    }
    else if (num4 > num1 && num4 > num2 && num4 >num3 && num4 > num5)
    {
    cout << num4 << " es el más grande" << endl ;
    }
    else if (num5 > num1 && num5 > num2 && num5 >num3 && num5 > num4)
    {
    cout << num5 << " es el más grande" << endl ;
    }
    //mas pequeño
    if (num1 < num2 && num1 < num3 && num1 < num4 && num1 < num5) 
    {
    cout << num1 << " es el más pequeño" << endl ;
    }
    else if (num2 < num1 && num2 < num3 && num2 < num4 && num2 < num5)
    {
    cout << num2 << " es el más pequeño" << endl ;
    }
    else if (num3 < num1 && num3 < num2 && num3 < num4 && num3 < num5)
    {
    cout << num3 << " es el más pequeño" << endl ;
    }
    else if (num4 < num1 && num4 < num2 && num4 < num3 && num4 < num5)
    {
    cout << num4 << " es el más pequeño" << endl ;
    }
    else if (num5 < num1 && num5 < num2 && num5 < num3 && num5 < num4)
    {
    cout << num5 << " es el más pequeño" << endl ;
    }


    return 0;    
}