/*
Cree un programa que solicite la siguiente información: Nombre, sexo, cantidad de hijos y monto total de
compra. En base a esa información, se debe realizar lo siguiente. Si el cliente es hombre y no tiene hijos, le
debes aplicar un descuento de 2.5% al monto total de compra. Si tiene 1 a más hijos, debes aplicarle un
descuento de 5% al monto de compra. Si es mujer y no tiene hijo, debe aplicarle 10% de descuento, si tiene 1
o 2, debes aplicar 15% de descuento y si tiene 3 a más hijos, debes aplicar el 20% de descuento a la compra.
*/
#include<iostream>
using namespace std;

int main(){

int opcionElegida;

printf("Elija una opcion segun su caso: \n");
printf("Hombre sin hijos: Presione 1 \n");
printf("Hombre con 1 o mas hijos: Presione 2 \n");
printf("Mujer sin hijos: Presione 3 \n");
printf("Mujer uno o dos hijos maximo: Presione 4 \n");
printf("Mujer 3 o mas hijos: Presione 5 \n");
scanf("%i", &opcionElegida);

switch(opcionElegida)



  return 0;

}
