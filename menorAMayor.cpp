#include <iostream>
using namespace std;

int main()
{
    // Declaración de variables
    float num1, num2, num3;

    // Pedir al usuario que ingrese los tres números
    cout << "Ingrese el primer número: ";
    cin >> num1;
    cout << "Ingrese el segundo número: ";
    cin >> num2;
    cout << "Ingrese el tercer número: ";
    cin >> num3;

    // Encontrar el número mayor
    float mayor = num1;
    if (num2 > mayor)
        mayor = num2;
    if (num3 > mayor)
        mayor = num3;

    // Encontrar el número menor
    float menor = num1;
    if (num2 < menor)
        menor = num2;
    if (num3 < menor)
        menor = num3;

    // Encontrar el número del medio
    float medio = num1 + num2 + num3 - mayor - menor;

    // Imprimir los resultados
    cout << "El número mayor es: " << mayor << endl;
    cout << "El número menor es: " << menor << endl;
    cout << "El número del medio es: " << medio << endl;

    return 0;
}

