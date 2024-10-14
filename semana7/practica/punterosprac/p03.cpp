/*Ejer02*/
#include <iostream>

using namespace std;
int cantidadletras_ptr(char* arr){
    int sumletras=0;
    while(*arr != '\0'){
        int o = static_cast<int>(*arr);
        if ((o >= 65 && o <= 90)||(o >= 97 && o <=122))
            sumletras++;
        arr++;
    }
    return sumletras;
}

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
    char cad[] ="p2123456#%$arangutidimicuaro";
    cout<< "cad tiene "<< cantidadletras(cad)<< " letras"; 
    cout<< "cad tiene "<< cantidadletras_ptr(cad)<< " letras"; 

}