#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double peso, altura, imc;

    cout << "Ingresa tu peso en kg: ";
    cin >> peso;

    cout << "Ingresa tu altura en metros: ";
    cin >> altura;

    imc = peso / (altura * altura);

    cout << fixed << setprecision(2);
    cout << "\nTu IMC es: " << imc << endl;

    if (imc < 18.5) {
        cout << "Clasificacion: Bajo peso\n";
        cout << "Sugerencia: Aumentar ingesta calórica y consultar nutricionista.\n";
    } else if (imc < 25.0) {
        cout << "Clasificacion: Normal\n";
        cout << "Sugerencia: Mantener hábitos saludables.\n";
    } else if (imc < 30.0) {
        cout << "Clasificacion: Sobrepeso\n";
        cout << "Sugerencia: Revisar dieta y aumentar actividad física.\n";
    } else if (imc < 35.0) {
        cout << "Clasificacion: Obesidad I\n";
        cout << "Sugerencia: Consultar médico y plan de control de peso.\n";
    } else {
        cout << "Clasificacion: Obesidad II\n";
        cout << "Sugerencia: Atención médica especializada y control estricto de peso.\n";
    }

    return 0;
}
