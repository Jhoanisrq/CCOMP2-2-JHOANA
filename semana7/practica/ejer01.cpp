/*Ejer01*/
#include <iostream>
using namespace std;

bool esPrimo(int num){
    int i=2;
    while(i < num){
        if(num%i==0)
            return false;
    i++;
    }
    return true;   
}

int cantPrimos(int array[], int b){
    int sumarPrimos = 0;
    for(int i=0; i < b ;i++){
        bool primo = esPrimo(array[i]);
        if(primo){
            sumarPrimos++;
        }
    }
    return sumarPrimos;
}

int main(){
    int array[]={2,5,10,15,13};
    cout << "La cantidad de primos es: " << cantPrimos(array,5) << endl ;
}
