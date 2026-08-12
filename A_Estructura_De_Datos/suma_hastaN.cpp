#include <iostream>
using namespace std;

//pedir un numero N y mostrae la suma de 1 hasta N
int main(){
    int num, suma=0;
    cout<<"Ingrese un numero: ";
    cin>>num;
    for(int i=1; i<=num; i++){
        suma= suma + i;
    }
    cout<<"La suma de 1 hasta "<<num<<" es: "<<suma;
    return 0;

}