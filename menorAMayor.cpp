#include <iostream>
using namespace std;

int main()
{
    // Declaraci�n de variables
    float num1, num2, num3;

    // Pedir al usuario que ingrese los tres n�meros
    cout << "Ingrese el primer n�mero: ";
    cin >> num1;
    cout << "Ingrese el segundo n�mero: ";
    cin >> num2;
    cout << "Ingrese el tercer n�mero: ";
    cin >> num3;

    // Encontrar el n�mero mayor
    float mayor = num1;
    if (num2 > mayor)
        mayor = num2;
    if (num3 > mayor)
        mayor = num3;

    // Encontrar el n�mero menor
    float menor = num1;
    if (num2 < menor)
        menor = num2;
    if (num3 < menor)
        menor = num3;

    // Encontrar el n�mero del medio
    float medio = num1 + num2 + num3 - mayor - menor;

    // Imprimir los resultados
    cout << "El n�mero mayor es: " << mayor << endl;
    cout << "El n�mero menor es: " << menor << endl;
    cout << "El n�mero del medio es: " << medio << endl;

    return 0;
}

