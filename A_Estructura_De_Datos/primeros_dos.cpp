#include <iostream>
using namespace std;

/*
int hola_algoritmos(){
    cout<<"Hola Algoritmos y estructuras de datos";
    return 0;
}
*/
int main(){
    cout<<"ingrese dos numeros: ";
    int a,b;
    cin>>a>>b;
    if(a>b){
        cout<<"el mayor es: "<<a;
    }
    else{
        cout<<"el mayor es: "<<b;
    }
    return 0;
}
