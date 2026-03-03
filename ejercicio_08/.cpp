#include <iostream>

using namespace std;

int main() {
    double saldo = 1000.0;  // saldo inicial
    int opcion;
    double monto;
    int numTransacciones = 0;

    do {
        cout << "\n--- MENU DE CAJERO ---\n";
        cout << "1. Depositar\n";
        cout << "2. Retirar\n";
        cout << "3. Consultar saldo\n";
        cout << "4. Salir\n";
        cout << "Elige una opcion: ";
        cin >> opcion;

        switch(opcion) {
            case 1: 
                cout << "Ingresa el monto a depositar: ";
                cin >> monto;
                if (monto > 0) {
                    saldo += monto;  // acumuladora
                    numTransacciones++;
                    cout << "Deposito exitoso. Nuevo saldo: " << saldo << endl;
                } else {
                    cout << "Monto invalido.\n";
                }
                break;

            case 2: 
                cout << "Ingresa el monto a retirar: ";
                cin >> monto;
                if (monto > 0 && monto <= saldo) {
                    saldo -= monto;  // acumuladora
                    numTransacciones++;
                    cout << "Retiro exitoso. Nuevo saldo: " << saldo << endl;
                } else {
                    cout << "Saldo insuficiente o monto invalido.\n";
                }
                break;

            case 3: 
                cout << "Saldo actual: " << saldo << endl;
                cout << "Numero de transacciones: " << numTransacciones << endl;
                break;

            case 4:
                cout << "Gracias por usar el cajero.\n";
                break;

            default:
                cout << "Opcion invalida.\n";
        }

    } while(opcion != 4);

    return 0;
}
