#include<stdio.h>
using namespace std;

int main(){

int valorInicial;
int valorFinal;

printf("Introduzca el valor entero inicial del rango: ");
scanf("%i", &valorInicial, "\n");
printf("Introduzca el valor inicial del rango: ");
scanf("%i", &valorFinal, "\n");

if(valorInicial > valorFinal){printf("El valor inicial es mayor al final, este rango no esta permitido. \a");}
else if(valorFinal == valorInicial){printf("Ambos valores son iguales, no hay rango establecido entre estos, introduzca valores validos. \a");}

printf("\n Los valores impares de tu rango son los siguientes: ");
printf("\n");
if(valorFinal > valorInicial){
    for(valorInicial; valorInicial <= valorFinal; valorInicial++){
        if(valorInicial % 2 != 0){printf("\n %i", valorInicial);}
    }
  } //L�nea de c�digo innecesaria para este tipo de l�gica.

  return 0;
}
