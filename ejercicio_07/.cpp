#include <iostream>

using namespace std;

int main() {
    int anio;
    bool esBisiesto;

    cout << "Ingresa un año: ";
    cin >> anio;

    cout << "\nRazonamiento paso a paso:\n";

    // Regla: divisible entre 4
    if (anio % 4 == 0) {
        cout << "- " << anio << " es divisible entre 4.\n";

        // Regla: siglos solo si divisible entre 400
        if (anio % 100 == 0) {
            cout << "- " << anio << " es un siglo (divisible entre 100).\n";
            if (anio % 400 == 0) {
                cout << "- " << anio << " es divisible entre 400, por lo tanto es bisiesto.\n";
                esBisiesto = true;
            } else {
                cout << "- " << anio << " NO es divisible entre 400, por lo tanto NO es bisiesto.\n";
                esBisiesto = false;
            }
        } else {
            cout << "- " << anio << " no es un siglo, por lo tanto es bisiesto.\n";
            esBisiesto = true;
        }
    } else {
        cout << "- " << anio << " NO es divisible entre 4, por lo tanto NO es bisiesto.\n";
        esBisiesto = false;
    }

    cout << "\nResultado final: " << anio 
         << (esBisiesto ? " es bisiesto." : " no es bisiesto.") << endl;

    return 0;
}
