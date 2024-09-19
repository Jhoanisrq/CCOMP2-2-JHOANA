/*Ejer2
Cada término nuevo en la secuencia de Fibonacci se genera sumando los dos términos anteriores. 
Comenzando con 1 y 2 , la primera 10
Los términos serán:

Considerando los términos de la secuencia de Fibonacci cuyos valores no superan los cuatro millones, 
encuentre la suma de los términos de valor par                           */
#include <iostream>
using namespace std;
int fibonacci(int t1, int t2){
    int tsig = 0;    
    tsig = t1 + t2;
    return tsig;
}
int main(){
    int n;
    int t1=1;
    int t2=2;
    int sumaPares = 2;
    cout << "Ingrese un numero: ";
    cin >> n ;
    cout << endl;
    //cout << t1 << " " << t2 << " ";
    for (int i{0};i <=n ; i++){
        int sigt = fibonacci(t1,t2);
        t1 = t2;
        t2 = sigt;
        //cout << sigt << " "; 
        if(sigt%2==0){
            sumaPares += sigt;
        }
    }
    cout << endl;
    cout << "la suma de pares es: "<< sumaPares; 
}