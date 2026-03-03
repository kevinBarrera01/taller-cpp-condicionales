#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b, c;
    
    cout << "Ingrese el lado 1: ";
    cin >> a;
    cout << "Ingrese el lado 2: ";
    cin >> b;
    cout << "Ingrese el lado 3: ";
    cin >> c;

    if (a > 0 && b > 0 && c > 0 && 
        a + b > c && a + c > b && b + c > a) {

        cout << "Forman un triangulo valido." << endl;

        if (a == b && b == c) {
            cout << "Es un triangulo equilatero." << endl;
        }
        else if (a == b || a == c || b == c) {
            cout << "Es un triangulo isosceles." << endl;
        }
        else {
            cout << "Es un triangulo escaleno." << endl;
        }

        double a2 = pow(a, 2);
        double b2 = pow(b, 2);
        double c2 = pow(c, 2);

        if (a >= b && a >= c) {
            if (a2 == b2 + c2) {
                cout << "Es un triangulo rectangulo." << endl;
            }
            else if (a2 < b2 + c2) {
                cout << "Es un triangulo acutangulo." << endl;
            }
            else {
                cout << "Es un triangulo obtusangulo." << endl;
            }
        }
        else if (b >= a && b >= c) {
            if (b2 == a2 + c2) {
                cout << "Es un triangulo rectangulo." << endl;
            }
            else if (b2 < a2 + c2) {
                cout << "Es un triangulo acutangulo." << endl;
            }
            else {
                cout << "Es un triangulo obtusangulo." << endl;
            }
        }
        else {
            if (c2 == a2 + b2) {
                cout << "Es un triangulo rectangulo." << endl;
            }
            else if (c2 < a2 + b2) {
                cout << "Es un triangulo acutangulo." << endl;
            }
            else {
                cout << "Es un triangulo obtusangulo." << endl;
            }
        }

    } else {
        cout << "No forman un triangulo valido." << endl;
    }

    return 0;
