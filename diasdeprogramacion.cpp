#include<iostream>
#include<string>

using namespace std;

/*
    - Solicitar al usuario un día de la semana de lunes a viernes.
    - Guardar ese día en un String.
    - Convertir el string en un entero del 1 al 5 para mas tarde usarlo en un switch.
    - Verificar si ese día seleccionado, siendo Lunes el 1 y Viernes el 5, se cursa programación o no.
    - De cursar, imprimir en pantalla, de no cursar, lo mismo.
*/


int main(){

string diaDelUsuario;
int numeroDeDia;

cout << "Elige un día para saber si se cursa programación o no: Lunes/Martes/Miercoles/Jueves/Viernes" << endl;
cin >> diaDelUsuario;

if(diaDelUsuario == "Lunes"){numeroDeDia = 1;}
else if(diaDelUsuario == "Martes"){numeroDeDia = 2;}
else if(diaDelUsuario == "Miercoles"){numeroDeDia = 3;}
else if(diaDelUsuario == "Jueves"){numeroDeDia = 4;}
else if(diaDelUsuario == "Viernes"){numeroDeDia = 5;}

switch(numeroDeDia){
case 1:
    cout<< "El dia seleccionado (Lunes) no se cursa programación, se cursa Arq y S.O, y Org. empresarial";
break;
case 2:
    cout<< "El dia seleccionado (Martes) no se cursa programación, se cursa Org. empresarial y matematica";
break;
case 3:
    cout<< "El dia seleccionado (Miercoles) si se cursa programacion durante las ultimas 2 horas";
break;
case 4:
    cout<< "El dia seleccionado (Jueves) si se cursa programacion durante las ultimas 2 horas";
break;
case 5:
    cout<< "El dia seleccionado (Viernes) si se cursa programacion, durante 4 horas";
break;

default:
    cout << "el dia seleccionado es incorrecto";
}

  return 0;

}
