/*
Escribe un programa en C++ que lea un número entero
positivo desde el teclado y muestre la tabla de
multiplicación de ese número hasta un límite máximo que
también se especifica por teclado.
*/

#include<iostream>
using namespace std;

int main(){

int numeroEnteroPositivo;
int resultadoDeTabla;

cout << "Introduzca un número del 1 al 10, entero, para visualizar su tabla de multiplicar" << endl;
cin >> numeroEnteroPositivo;

switch(numeroEnteroPositivo){

case 1:
    numeroEnteroPositivo = 1;
    for (int i = 0; i <= 9; i++){
    resultadoDeTabla = i * 1;
    cout <<"1 x " << i << " = " << resultadoDeTabla<< endl;}
    break;

case 2:
    numeroEnteroPositivo = 2;
    for (int i = 0; i <= 9; i++){
    resultadoDeTabla = i * 2;
    cout <<"2 x " << i << " = " << resultadoDeTabla<< endl;}
    break;

case 3:
    numeroEnteroPositivo = 3;
    for (int i = 0; i <= 9; i++){
    resultadoDeTabla = i * 3;
    cout <<"3 x " << i << " = " << resultadoDeTabla<< endl;}
    break;


case 4:
    numeroEnteroPositivo = 4;
    for (int i = 0; i <= 9; i++){
    resultadoDeTabla = i * 4;
    cout <<"4 x " << i << " = " << resultadoDeTabla<< endl;}
    break;

case 5:
    numeroEnteroPositivo = 5;
    for (int i = 0; i <= 9; i++){
    resultadoDeTabla = i * 5;
    cout <<"5 x " << i << " = " << resultadoDeTabla<< endl;}
    break;


case 6:
    numeroEnteroPositivo = 6;
    for (int i = 0; i <= 9; i++){
    resultadoDeTabla = i * 6;
    cout <<"6 x " << i << " = " << resultadoDeTabla<< endl;}
    break;

case 7:
    numeroEnteroPositivo = 7;
    for (int i = 0; i <= 9; i++){
    resultadoDeTabla = i * 7;
    cout <<"7 x " << i << " = " << resultadoDeTabla<< endl;}
    break;

case 8:
    numeroEnteroPositivo = 8;
    for (int i = 0; i <= 9; i++){
    resultadoDeTabla = i * 8;
    cout <<"8 x " << i << " = " << resultadoDeTabla<< endl;}
    break;

case 9:
    numeroEnteroPositivo = 9;
    for (int i = 0; i <= 9; i++){
    resultadoDeTabla = i * 9;
    cout <<"9 x " << i << " = " << resultadoDeTabla<< endl;}
    break;

default:
    cout << "eleccion incorrecta" << endl;

}

 return 0;

}
