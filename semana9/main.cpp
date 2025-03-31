#include <iostream>
#include "point.h"
//crea un arreglo de ponst en el main y despues implementar
/*int *x= new int;
stack variables existenete
heap variabless creadas por mi
*/

using namespace std;
void printPointArr(point *arr, int tam) {
    for(int i = 0; i < tam; i++, arr++){
        arr->print(); //puntero
    }
}

int main() {
    point p;
    // para invocar a los métodos de la instancia
    // usando usando la misma instancia se utiliza . (punto)
    p.print();

    point *ptr = &p; // ptr tiene la dirección de memoria de p
    // para invocar a los métodos de la instancia
    // usando el puntero se utiliza el operador -> (flechita)
    ptr->print();

    ptr->setX(6);
    ptr->setY(4);
    ptr->print();

    point arr[3];
    int tam = sizeof(arr) / sizeof(arr[0]);
    printPointArr(arr, tam);

}