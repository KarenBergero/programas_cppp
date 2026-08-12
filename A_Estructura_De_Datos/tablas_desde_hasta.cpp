#include <iostream>
using namespace std;

/* Programa muestra tabla de multiplicar. 
Pide ingreso dos numeros, desde tabla, hasta tabla*/

int main(){
    int num1, num2;
    cout<<"Ingrese el numero de la tabla a mostrar: ";
    cin>>num1;
    cout<<"Ingrese el numero hasta donde mostrar la tabla: ";
    cin>>num2;

    for(int i=1; i<=num2; i++){
        cout<<num1<<"x"<<i<<"="<<i*num1<<endl;
    }
return 0;
}