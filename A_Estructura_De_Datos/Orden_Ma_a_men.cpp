#include <iostream>
using namespace std;

//A) hacer un program que dada la entrada de 20 num, los ordene de mayor a menor y los imprima
//B) una vez ordenados los num, decidr (imprimir), dado un num en particular si esta en esos 20, sino decir que no esta

int main (){
    unsigned int z[10]={200,10,1,40,45,9,7,8,90,11};
    unsigned x;

for (int i=0; i<9; i++){
    if(z[i]> z[i+1]){
        x=z[i+1];
        z[i+1]=z[i];
        z[i]=x;
        cout<<z[i]<<" ";
    }
}
}
int main (){
    unsigned int z[10]={200,10,1,40,45,9,7,8,90,11};
    unsigned x;

    // Ordenar de mayor a menor
    for (int i=0; i<10; i++){
        for (int j=i+1; j<10; j++){
            if(z[i]< z[j]){
                x=z[i];
                z[i]=z[j];
                z[j]=x;
            }
        }
    }

    // Imprimir los números ordenados
    cout << "Números ordenados de mayor a menor: ";
    for (int i=0; i<10; i++){
        cout << z[i] << " ";
    }
    cout << endl;

    // Verificar si un número está en el arreglo
    unsigned int num;
    cout << "Ingrese un número para verificar si está en la lista: ";
    cin >> num;

    bool encontrado = false;
    for (int i=0; i<10; i++){
        if(z[i] == num){
            encontrado = true;
            break;
        }
    }

    if(encontrado){
        cout << "El número " << num << " está en la lista." << endl;
    } else {
        cout << "El número " << num << " no está en la lista." << endl;
    }

    return 0;
}














