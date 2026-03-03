#include <iostream>
#include <string>
using namespace std;

int main() {
    int nota;
    string letra;
    string estado;

    cout << "Ingrese la nota (0-100): ";
    cin >> nota;

    if (nota >= 90 && nota <= 100) {
        letra = "A";
    }
    else if (nota >= 80 && nota < 90) {
        letra = "B";
    }
    else if (nota >= 70 && nota < 80) {
        letra = "C";
    }
    else if (nota >= 60 && nota < 70) {
        letra = "D";
    }
    else if (nota >= 0 && nota < 60) {
        letra = "F";
    }
    else {
        cout << "Nota invalida." << endl;
        return 0;
    }

    if (nota >= 60) {
        estado = "Aprobado";
    } else {
        estado = "Reprobado";
    }

    cout << "Letra: " << letra << endl;
    cout << "Estado: " << estado << endl;

    return 0;
}
