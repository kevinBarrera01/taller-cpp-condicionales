#include <iostream>
using namespace std;

const int LEER = 4;      // 100
const int ESCRIBIR = 2;  // 010
const int EJECUTAR = 1;  // 001

int main() {
    int permisos;

    cout << "Ingrese un valor de permisos (0-7): ";
    cin >> permisos;

    cout << "\nPermisos actuales:\n";

    if (permisos & LEER)
        cout << "Tiene permiso de LEER\n";
    else
        cout << "No tiene permiso de LEER\n";

    if (permisos & ESCRIBIR)
        cout << "Tiene permiso de ESCRIBIR\n";
    else
        cout << "No tiene permiso de ESCRIBIR\n";

    if (permisos & EJECUTAR)
        cout << "Tiene permiso de EJECUTAR\n";
    else
        cout << "No tiene permiso de EJECUTAR\n";

    permisos = permisos | ESCRIBIR;
    cout << "\nAgregando permiso de ESCRIBIR con |" << endl;

    permisos = permisos & ~EJECUTAR;
    cout << "Quitando permiso de EJECUTAR con & y ~" << endl;

    cout << "\nNuevo valor de permisos: " << permisos << endl;

    return 0;
}
