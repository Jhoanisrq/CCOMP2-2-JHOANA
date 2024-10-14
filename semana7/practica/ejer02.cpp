/*Ejer02*/
#include <iostream>

using namespace std;

int cantidadletras(char arr[]){
    int sumletras = 0 ;
    for(int i=0; arr[i] != '\0'; i++){
        int o = static_cast<int>(arr[i]);
        if ((o >= 65 && o <= 90)||(o >= 97 && o <=122))
            sumletras++;
    }
    return sumletras;
}


int main(){
    char cad[] ="parangutidimicuaro";
    cout<< "cad tiene "<< cantidadletras(cad)<< " letras"; 
}