/*
Cree un programa que solicite la siguiente información: Nombre, sexo, cantidad de hijos y monto total de
compra. En base a esa información, se debe realizar lo siguiente. Si el cliente es hombre y no tiene hijos, le
debes aplicar un descuento de 2.5% al monto total de compra. Si tiene 1 a más hijos, debes aplicarle un
descuento de 5% al monto de compra. Si es mujer y no tiene hijo, debe aplicarle 10% de descuento, si tiene 1
o 2, debes aplicar 15% de descuento y si tiene 3 a más hijos, debes aplicar el 20% de descuento a la compra.
*/
#include<iostream>
using namespace std;

int main()
{

    int opcionElegida;
    float montoCargado;


    printf("----------Calculadora de descuentos---------- \n");
    printf("\n");
    printf("Elija una opcion segun su caso: \n");
    printf("\n");
    printf("- Hombre sin hijos: Presione 1 \n");
    printf("\n");
    printf("- Hombre con 1 o mas hijos: Presione 2 \n");
    printf("\n");
    printf("- Mujer sin hijos: Presione 3 \n");
    printf("\n");
    printf("- Mujer con uno o dos hijos maximo: Presione 4 \n");
    printf("\n");
    printf("- Mujer con 3 o mas hijos: Presione 5 \n");
    scanf("%i", &opcionElegida);
    printf("Ingrese el monto de dinero de la compra en pesos: ");
    scanf("%f", &montoCargado);

    switch(opcionElegida)
    {
    case 1:
        cout << "Su monto final con el descuento aplicado es de: " << montoCargado - montoCargado * 0.025 << " pesos. Su descuento es del 2.5%"<<endl;
        break;
    case 2:
        cout << "Su monto final con el descuento aplicado es de: " << montoCargado - montoCargado * 0.05 << " pesos. Su descuento es del 5%"<<endl;
        break;
    case 3:
        cout << "Su monto final con el descuento aplicado es de: " << montoCargado - montoCargado * 0.1 << " pesos. Su descuento es del 10%"<<endl;
        break;
    case 4:
        cout << "Su monto final con el descuento aplicado es de: " << montoCargado - montoCargado * 0.15 << " pesos. Su descuento es del 15%"<<endl;
        break;
    case 5:
        cout << "Su monto final con el descuento aplicado es de: " << montoCargado - montoCargado * 0.2 << " pesos. Su descuento es del 20%"<<endl;
        break;
    default:
        cout<<"Opcion incorrecta, vuelva a intentarlo... \n";
    }

    return 0;

}
