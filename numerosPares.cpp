#include<iostream>
using namespace std;


/*
    -Solicitar un numero al usuario
    -Contar cuantos numeros pares hay desde el 0 hasta ese numero y verificarlos
    -Imprimirlos en pantalla

*/


int main(){

int numeroSolicitado;
int contador = 0;

cout << "Introduzca el numero que desea ver sus pares: ";
cin >> numeroSolicitado;
cout << "----------------------------------------------" << endl;
cout << "Los numeros pares del 0 al " << numeroSolicitado << " son: " << endl;
for(int i = 0; contador < numeroSolicitado - 1; ++i){
    if(numeroSolicitado % 2 == 0){
        contador += 2;
    cout << contador << endl;
}
    else{contador +=2;
    cout << contador << endl;
    }
}
  return 0;
}
