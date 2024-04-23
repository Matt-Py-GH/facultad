#include<iostream>
#include<string>
using namespace std;


int main()
{

    string vacio = "";
    string llenardo = "Este string está llenardo";
    string contarCaracteres = "Hello World!";

    cout << "Length: " << contarCaracteres.length() << endl;
    cout << "Size: " << contarCaracteres.size() << endl;
    cout << (vacio.empty() ? "esta vacio este string" : "este string esta mas lleno que ") << endl;
    cout << (llenardo.empty() ? "esta re vacío el string" : "esta llenardo el string") << endl;

    return 0;
}
