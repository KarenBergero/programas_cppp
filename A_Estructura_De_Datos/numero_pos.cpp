#include <iostream>
using namespace std;


//validar entradas
//pedir un numero positivo. Si es negativo, volver a pedirlo hasta que sea positivo


int main(){
    int num;
    cout<<"Ingrese un numero positivo: ";
    cin>>num;

    while(num<0){
        cout<<"El numero es negativo. volver a ingresar: ";
        cin>>num;

    }
return 0;
}
