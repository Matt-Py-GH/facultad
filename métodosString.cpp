#include<iostream>
#include<string>
using namespace std;


int main()
{
    //M�todo empty, length, y funci�n size() No hay comentarios o explicaciones ac�, puesto que se di� anteriormente
    string vacio = "";
    string llenardo = "Este string esta lleno";
    string contarCaracteres = "Hello World!";

    cout << "Length: " << contarCaracteres.length() << endl;
    cout << "Size: " << contarCaracteres.size() << endl;
    cout << (vacio.empty() ? "esta vacio este string" : "este string esta mas lleno que ") << endl;
    cout << (llenardo.empty() ? "esta vac�o el string" : "esta lleno el string") << endl;

    //Clase 24/04/2024 M�todo append, funciones insert() y erase().


    //M�TODO APPEND

    string fraseIncompleta = "Una frase sin final... ";

    //Agregaremos una palabra con el m�todo append, al final de ese string, exactamente en el �ltimo caracter

    fraseIncompleta.append("final de la frase"); //aplicamos el append y todo lo que pongamos entre par�ntesis va entre comillas y ser� lo agregado al string
    cout << fraseIncompleta<<endl; //Imprimimos el nuevo valor de la variable tras aplicarle el append


    /*
    FUNCI�N INSERT(), tiene dos par�metros, separados por una ","
    en primer lugar se pone la posici�n donde ir� lo que se va a insertar en el string
    y en segundo lugar va lo que se va a insertar per se
    */
    string otraFrase = "Hola "; //Este string tiene 5 caracteres, podemos saberlo contando o usando un metodo length
    otraFrase.insert(5, "Mundo!"); /* aplicamos el insert, el primer par�metro es el 5, que indica la posici�n donde voy a pegar la palabra
                                      el segundo par�metro es lo que vamos a pegar en ESA posicion*/
    cout<<otraFrase <<endl; // printeamos la variable string con lo que agregamos

    //ACLARACI�N: no dimos la funci�n Find(), que sirve para localizar un lugar espec�fico de un string, pero la daremos mas adelante
    //Esa funci�n sirve para encontrar un lugar espec�fico en un string por mas largo o confuso que sea
    //Por si queremos pegar una palabra o un string, en esa posicion especifica

    //ACLARACI�N 2: puede guardarse el tama�o del string en una variable y poner esa variable en el parametro
    //Demostraci�n

    string fraseNumeroTres = "Hola ";
    int tamanioDelString = fraseNumeroTres.length(); //el string tiene un tama�o, que calculamos con length, ese valor lo guardamos en una variable, que es un int
    fraseNumeroTres.insert(tamanioDelString, "Mundo! 2"); //ac� guardamos la variable donde guardamos el valor entero del tama�o del string
    cout<<fraseNumeroTres<<endl;
    //Solo se pueden guardar enteros o variables que contengan enteros en el primer par�metro de la funci�n

    //Aclaraci�n insert(PRIMER PAR�METRO, SEGUNDO PAR�METRO)
    //Eso aplica para CUALQUIER funcion, los parametros pueden ser muchisimos mas, ac� son estrictamente dos, y siguen en orden secuencial


    //Funcion erase() sirve para eliminar caracteres, se le pasa como par�metro 2 enteros, (Posicion, cantidad)
    //En posicion ir�a desde donde se va a eliminar caracteres, y en cantidad, CUANTOS caracteres van a ser eliminados
    //cantidad debe ser <= que la cantidad de caracteres que haya en el string
    fraseNumeroTres.erase(3, 5);
    cout << fraseNumeroTres << endl; //no es dificil deducir que hace

    return 0;
}
