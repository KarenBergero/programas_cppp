#include <iostream>
using namespace std;

//A) hacer un program que dada la entrada de 20 num, los ordene de mayor a menor y los imprima
//B) una vez ordenados los num, decidr (imprimir), dado un num en particular si esta en esos 20, sino decir que no esta

int main() {
    int numeros[20];
    cout << "Ingrese 20 numeros:" << endl;
    for (int i = 0; i < 20; i++) {
        cin >> numeros[i];
    }

    // Ordenar de mayor a menor
    for (int i = 0; i < 19; i++) {
        for (int j = 0; j < 19 - i; j++) {
            if (numeros[j] < numeros[j + 1]) {
                swap(numeros[j], numeros[j + 1]);
            }
        }
    }

    cout << "Numeros ordenados de mayor a menor:" << endl;
    for (int i = 0; i < 20; i++) {
        cout << numeros[i] << " ";
    }
    cout << endl;

    int numBuscado;
    cout << "Ingrese un numero para buscar: ";
    cin >> numBuscado;

    bool encontrado = false;
    for (int i = 0; i < 20; i++) {
        if (numeros[i] == numBuscado) {
            encontrado = true;
            break;
        }
    }

    if (encontrado) {
        cout << "El numero " << numBuscado << " esta en la lista." << endl;
    } else {
        cout << "El numero " << numBuscado << " no esta en la lista." << endl;
    }

    return 0;
}
