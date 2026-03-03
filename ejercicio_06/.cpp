#include <iostream>

using namespace std;

int main() {
    int a, b;

    cout << "Ingresa el primer numero (a): ";
    cin >> a;
    cout << "Ingresa el segundo numero (b): ";
    cin >> b;

    cout << "\n--- Metodo 1: con variable temporal ---\n";
    int temp = a;   // variable temporal
    a = b;
    b = temp;
    cout << "a = " << a << ", b = " << b << endl;

    a = temp;
    b = a ^ b ^ a;  // solo para dejarlo igual que el original (o se puede pedir otra entrada)

    cout << "\n--- Metodo 2: con operaciones aritmeticas ---\n";
    a += b;  // a = a + b
    b = a - b;  // b = (a+b)-b = a
    a = a - b;  // a = (a+b)-a = b
    cout << "a = " << a << ", b = " << b << endl;

    a += b;  // a = a + b
    b = a - b;  // b = original a
    a = a - b;  // a = original b

    cout << "\n--- Metodo 3: con XOR ---\n";
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    cout << "a = " << a << ", b = " << b << endl;

    return 0;
}
