#include<iostream>
#include<string>
using namespace std;


int main()
{
    //Método empty, length, y función size() No hay comentarios o explicaciones acá, puesto que se dió anteriormente
    string vacio = "";
    string llenardo = "Este string esta lleno";
    string contarCaracteres = "Hello World!";

    cout << "Length: " << contarCaracteres.length() << endl;
    cout << "Size: " << contarCaracteres.size() << endl;
    cout << (vacio.empty() ? "esta vacio este string" : "este string esta mas lleno que ") << endl;
    cout << (llenardo.empty() ? "esta vacío el string" : "esta lleno el string") << endl;

    //Clase 24/04/2024 Método append, funciones insert() y erase().


    //MÉTODO APPEND

    string fraseIncompleta = "Una frase sin final... ";

    //Agregaremos una palabra con el método append, al final de ese string, exactamente en el último caracter

    fraseIncompleta.append("final de la frase"); //aplicamos el append y todo lo que pongamos entre paréntesis va entre comillas y será lo agregado al string
    cout << fraseIncompleta<<endl; //Imprimimos el nuevo valor de la variable tras aplicarle el append


    /*
    FUNCIÓN INSERT(), tiene dos parámetros, separados por una ","
    en primer lugar se pone la posición donde irá lo que se va a insertar en el string
    y en segundo lugar va lo que se va a insertar per se
    */
    string otraFrase = "Hola "; //Este string tiene 5 caracteres, podemos saberlo contando o usando un metodo length
    otraFrase.insert(5, "Mundo!"); /* aplicamos el insert, el primer parámetro es el 5, que indica la posición donde voy a pegar la palabra
                                      el segundo parámetro es lo que vamos a pegar en ESA posicion*/
    cout<<otraFrase <<endl; // printeamos la variable string con lo que agregamos

    //ACLARACIÓN: no dimos la función Find(), que sirve para localizar un lugar específico de un string, pero la daremos mas adelante
    //Esa función sirve para encontrar un lugar específico en un string por mas largo o confuso que sea
    //Por si queremos pegar una palabra o un string, en esa posicion especifica

    //ACLARACIÓN 2: puede guardarse el tamaño del string en una variable y poner esa variable en el parametro
    //Demostración

    string fraseNumeroTres = "Hola ";
    int tamanioDelString = fraseNumeroTres.length(); //el string tiene un tamaño, que calculamos con length, ese valor lo guardamos en una variable, que es un int
    fraseNumeroTres.insert(tamanioDelString, "Mundo! 2"); //acá guardamos la variable donde guardamos el valor entero del tamaño del string
    cout<<fraseNumeroTres<<endl;
    //Solo se pueden guardar enteros o variables que contengan enteros en el primer parámetro de la función

    //Aclaración insert(PRIMER PARÁMETRO, SEGUNDO PARÁMETRO)
    //Eso aplica para CUALQUIER funcion, los parametros pueden ser muchisimos mas, acá son estrictamente dos, y siguen en orden secuencial


    //Funcion erase() sirve para eliminar caracteres, se le pasa como parámetro 2 enteros, (Posicion, cantidad)
    //En posicion iría desde donde se va a eliminar caracteres, y en cantidad, CUANTOS caracteres van a ser eliminados
    //cantidad debe ser <= que la cantidad de caracteres que haya en el string
    fraseNumeroTres.erase(3, 5);
    cout << fraseNumeroTres << endl; //no es dificil deducir que hace

    return 0;
}
