#include <iostream>
using namespace std;


//ingresar un numero y decir si es par o impar   
int main(){
    int numero;
    cout<<"Ingrese un numero: ";
    cin>>numero;
    if(numero % 2 == 0){
        cout<<"El numero es par";
    }
    else{
        cout<<"El numero es impar";
    }
    return 0;
}



//pedir un numero N y mostrae la suma de 1 hasta N
int suma(){
    int num, suma=0;
    cout<<"Ingrese un numero: ";
    cin>>num;
    for(int i=1; i<=num; i++){
        suma= suma + i;
    }
    cout<<"La suma de 1 hasta "<<num<<" es: "<<suma;
return 0;

}