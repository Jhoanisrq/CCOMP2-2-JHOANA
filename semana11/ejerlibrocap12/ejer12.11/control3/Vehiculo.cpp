#include <iostream>

using namespace std;

class Vehiculo{
    public:
        virtual void desplazarse(){};
};

class Coche : public Vehiculo {
    public:
        virtual void desplazarse(){
            cout << "El coche se desplaza por la carretera"<<endl;
        }
};

class Bicicleta : public Vehiculo {
    public:
        virtual void desplazarse(){
            cout << "La bicicleta se desplaza por la cendero"<<endl;
        }
};

class Avion : public Vehiculo {
    public:
        virtual void desplazarse(){
            cout << "El avion se desplaza por los aires"<<endl;
        }
};
