#include <iostream>
#include <string>
using namespace std;

int main() {

    string nombre;
    string especialidad;

    cout << "Ingresa nombre de Heroe: ";
    cin >> nombre;

    cout << "Bienvenido, " << nombre << "! " << endl;
    cout << "====================================== \n";
    cout << "Escoje tu especialidad: \nMago, \nTanque, \nElfo, \nEnano, " << endl;
    cin >> especialidad;
    cout << "Bienvenido " << nombre <<  " de la tribu de los " << especialidad << "s" <<endl;

    return 0;
}