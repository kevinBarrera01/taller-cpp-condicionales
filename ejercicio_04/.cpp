#include <iostream>
#include <cmath>   // Para fmod()
using namespace std;

int main() {
    double num1, num2, resultado;
    char operador;

    cout << "Ingrese el primer numero: ";
    cin >> num1;

    cout << "Ingrese el operador (+, -, *, /, %): ";
    cin >> operador;

    cout << "Ingrese el segundo numero: ";
    cin >> num2;

    switch (operador) {

        case '+':
            resultado = num1 + num2;
            cout << "Resultado: " << resultado << endl;
            break;

        case '-':
            resultado = num1 - num2;
            cout << "Resultado: " << resultado << endl;
            break;

        case '*':
            resultado = num1 * num2;
            cout << "Resultado: " << resultado << endl;
            break;

        case '/':
            if (num2 == 0) {
                cout << "Error: Division por cero no permitida." << endl;
            } else {
                resultado = num1 / num2;
                cout << "Resultado: " << resultado << endl;
            }
            break;

        case '%':
            if (num2 == 0) {
                cout << "Error: Modulo por cero no permitido." << endl;
            } else {
                resultado = fmod(num1, num2); // Módulo para double
                cout << "Resultado: " << resultado << endl;
            }
            break;

        default:
            cout << "Error: Operador no valido." << endl;
    }

    return 0;
}
