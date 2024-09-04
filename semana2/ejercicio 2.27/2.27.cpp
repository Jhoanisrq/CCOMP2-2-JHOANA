/*2.27 (Equivalente entero de un carácter) A continuación, se muestra un avance. En este capítulo, 
aprendió sobre los números enteros y el tipo int. C++ también puede representar letras mayúsculas, 
letras minúsculas y una variedad considerable de símbolos especiales. 
C++ utiliza números enteros pequeños internamente para representar cada carácter diferente. 
El conjunto de caracteres que utiliza una computadora y las representaciones enteras correspondientes 
para esos caracteres se denominan conjunto de caracteres de esa computadora. 
Puede imprimir un carácter encerrándolo entre comillas simples, como en el caso de

cout << 'A'; // imprime una A mayúscula

Puede imprimir el equivalente entero de un carácter utilizando static_cast de la siguiente manera:

cout << static_cast<int>('A'); // imprime 'A' como un entero

Esto se denomina operación de conversión (introducimos formalmente las conversiones en el Capítulo 4). 
Cuando se ejecuta la instrucción anterior, imprime el valor 65 (en sistemas que utilizan el conjunto de caracteres ASCII). 
Escriba un programa que imprima el equivalente entero de un carácter escrito en el teclado. 
Almacene la entrada en una variable de tipo char. 
Pruebe su programa varias veces utilizando letras mayúsculas, letras minúsculas, 
dígitos y caracteres especiales (como $).
*/
#include<iostream>
using namespace std;

int main(){
    char a ;
    cout<<"Escribe una letraentre : " ;
    cin>> a ;
    cout << a << " en enteros es " << static_cast<int>(a) ;   
    return 0;
}