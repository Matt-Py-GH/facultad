#include<stdio.h>
#include<iostream>
using namespace std;

int main(){

int edadDelUsuario;
int contadorDePares = 0;
int contadorDeImpares = 0;

printf("Introduzca su edad en anios: ");
scanf("%i", &edadDelUsuario);

if(edadDelUsuario <= 0 ){printf("Usted no ha vivido o ha introducido mal su edad \n");}

printf("Usted ha vivido estos anios: \n");
for(int i = 1; i <= edadDelUsuario; i++){
    if(i % 2 == 0){contadorDePares += 1; printf("\n %i Anio par", i);}
    if(i % 2 != 0){contadorDeImpares += 1;printf("\n %i Anio impar", i);}
    }
    cout << endl;
    cout << endl;
    cout << "Usted ha vivido "; printf("%i", contadorDeImpares); cout << " anios impares." <<endl;
    cout << "Y en total "; printf("%i", contadorDePares); cout << " anios pares." << endl;

  return 0;
}
