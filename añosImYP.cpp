#include <iostream>
using namespace std;

int main() {
    int arreglo[] = {1, 1, 1, 2, 2, 3, 4, 5};
    int n = sizeof(arreglo) / sizeof(arreglo[0]);

    int maxRepeticiones = 0;
    int numeroMasRepetido = arreglo[0];

    for (int i = 0; i < n; i++) {
        int repeticiones = 0;
        for (int j = 0; j < n; j++) {
            if (arreglo[i] == arreglo[j]) {
                repeticiones++;
            }
        }
        if (repeticiones > maxRepeticiones) {
            maxRepeticiones = repeticiones;
            numeroMasRepetido = arreglo[i];
        }
    }

    cout << "El numero que mas se repite es: " << numeroMasRepetido << endl;

    return 0;
}