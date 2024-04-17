#include<iostream>
using namespace std;


/*
    -Solicitar un número al usuario
    -Calcular sus numeros pares
    -Imprimirlos en pantalla

*/


int main(){

const string marcaDeAgua = "Delgado Ugarte, Mateo Miguel";
int numeroSolicitado;
int opcion = 0;

cout << "Tablas de multiplicar (TDM) Bienvenido." << endl;

while(opcion != 1){
cout << "---------------------------------------------------------------------------------" << endl;
cout << "Para usar el sistema de TDM, seleccione 0. Si desea cancelar o salir, seleccione 1" << endl;
cout << "---------------------------------------------------------------------------------" << endl;
cin >> opcion;

if(opcion == 0){
cout << "Introduzca el numero entero del cual desee ver su tabla de multiplicar: ";
cin >> numeroSolicitado;
for(int i = 0; i <= 10; i++){
    cout << i << " x " << numeroSolicitado << " = " << i*numeroSolicitado << endl;
}
}
else if (opcion == 1){cout << "Ha seleccionado 1, saliendo del sistema... " << endl;}
else if(opcion != 0 && opcion != 1){cout<<"Ha elegido incorrectamente, vuelva a intentarlo..." << endl;}
}

cout << "Programado por: " << marcaDeAgua << endl;

  return 0;
}
