#include <iostream>
#include <cmath>
using namespace std;

/* hacer una funcion que reciba un num y devuelva su cuadrado */

int num_cuadrado(int num){
    return (num*num);
}

int main(){
    int numero;
    cout<<"ingrese un numero: ";
    cin>>numero;
    cout<<"el cuadrado del numero es: "<<num_cuadrado(numero)<<endl;
    return 0;
}