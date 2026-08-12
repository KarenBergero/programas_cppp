#include <iostream>
using namespace std;

//ejercicio:pido 2 numeros. imprimir los valores de menor a mayor entre esos dos numeros

int  main(){
    int num1, num2;
    int menor, mayor;

    cout<<"Ingrese el primer numero: ";
    cin>>num1;
    cout<<"Ingrese el segundo numero: ";
    cin>>num2;

    if(num1< num2){
        menor=num1;
        mayor=num2;
    }
    else{
        menor=num2;
        mayor=num1;
    

    }

    cout << "Los numeros de menor a mayor entre n1 y n2 son: ";

    // Mostrar los números entre ellos (sin incluirlos)
    for (int i = menor + 1; i < mayor; i++) {
        cout << i;
        if (i < mayor - 1) {
            cout << ", ";
        }

}
return 0;
}