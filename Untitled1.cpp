#include <iostream>
#include <locale> // Incluye la librería para la configuración de la localización

using namespace std;

int main() {

    bool salir = false;
    while (salir == false){
    // Intenta configurar el locale para admitir caracteres Unicode
    setlocale(LC_ALL, "es_ES.UTF-8");


    int opc;
    int num1, num2, result;


    cout << "Selecciona una opción:" << endl;
    cout << "1/suma, 2/resta, 3/multiplicar, 4/división, 5/salir" << endl;
    cin >> opc; // Leer la opción ingresada por el usuario

    if (opc == 1) {
        cout << "Inserte el primer número: ";
        cin >> num1;
        cout << "Inserte el segundo número: ";
        cin >> num2;
        result = num1 + num2;
        cout << "El resultado de la suma es: " << result << endl;
    }
    else if (opc == 2) {
        cout << "Inserte el primer número: ";
        cin >> num1;
        cout << "Inserte el segundo número: ";
        cin >> num2;
        result = num1 - num2;
        cout << "El resultado de la resta es: " << result << endl;
    }
    else if (opc == 3) {
        cout << "Inserte el primer número: ";
        cin >> num1;
        cout << "Inserte el segundo número: ";
        cin >> num2;
        result = num1 * num2;
        cout << "El resultado de la multiplicación es: " << result << endl;
    }
    else if (opc == 4) {
        cout << "Inserte el primer número: ";
        cin >> num1;
        cout << "Inserte el segundo número: ";
        cin >> num2;
    if (num2 != 0) {
            result = num1 / num2;
            cout << "El resultado de la división es: " << result << endl;}

    else{cout<<"no se puede dividir por 0";}

    }

    else if (opc == 5){
        salir = true;
        cout<<"Sistema finalizado";}

    }
    return 0;
}
