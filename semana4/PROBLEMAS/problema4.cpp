/*Problema4
Cree una clase llamada Date que incluya tres datos como miembros de la
clase: month(de tipo int), day (de tipo int int) y year (de tipo int). Su clase debe tener un
constructor con tres parametros que utilice los parametros para inicializar los datos miembro
de la clase. Para fines de este ejercicio, suponga que los valores proporcionados para year y
day son correctos, pero asegurese de que el valor de month este en el rango de 1 a 12; si no
es asi, establezca month en 1. Proporcione las funciones de acceso y modificacion para cada
miembro de datos (setters y getters). Proporcione una funcion miembro displayDate que
muestre el mes, dia y año separados por barras diagonales (/). Escriba la funcion principal
donde cree dos objetos de tipo date, uno con el mes valido y otro con el mes invalido, imprima
los valores de ambos objetos.
*/
#include <iostream>
using namespace std;

class Date {
    private:
        int month ;
        int day ;
        int year ;
    
    public:
        Date(int m, int d, int y) {
            month = (m >= 1 && m <= 12) ? m : 1; //m si es verdadero y 1 si es falso 
            day = d;
            year = y;
        }

    // Getters
    int getMonth() const { 
        return month; 
    }
    int getDay() const { 
        return day; 
    }
    int getYear() const { 
        return year; 
    }

    // Setters
    void setMonth(int m) { 
        month = (m >= 1 && m <= 12) ? m : 1; 
    }
    void setDay(int d) { 
        day = d; 
    }
    void setYear(int y) { 
        year = y; 
    }

    void displayDate() const {
        cout << month << " / " << day << " / " << year << endl;
    }
    };

int main() {                   // m / d / y
    Date date1(10, 25, 2015);  // Date con un mes válido
    Date date2(25, 8, 2024);   // Date con un mes inválido

    cout << "Fecha 1: ";
    date1.displayDate();

    cout << "Fecha 2: ";
    date2.displayDate();

    return 0;
}