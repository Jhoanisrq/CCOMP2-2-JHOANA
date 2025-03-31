#include <iostream>
#include <vector>

using namespace std;

class Vehiculos{
    public:
        virtual void desplazarse(){};
        virtual ~Vehiculos(){
            cout << "fue eliminado";
        };
};
class Coche : public Vehiculos {
    public:
        void desplazarse() override {
            cout << "El coche se desplaza por carretera";
        }
};
class Bicicleta : public Vehiculos {
    public:
        void desplazarse() override {
            cout << "La bicicleta se desplaza por el sendero";
        }
};
class Avion : public Vehiculos  {
    public:
        void desplazarse() override {
        cout << "El avion se desplaza por el aire" << endl;
    }
};

int main() {

    Vehiculos* arrayVehiculos[3];
    arrayVehiculos[0] = new Coche();
    arrayVehiculos[1] = new Bicicleta();
    arrayVehiculos[2] = new Avion();

    cout << "Usando array de punteros:" << endl;
    for (int i = 0; i < 3; ++i) {
        arrayVehiculos[i]->desplazarse();
        cout << endl;
    }
    for (int i = 0 ; i < 3 ; i++){
        delete arrayVehiculos[i];
    }
    return 0;
}