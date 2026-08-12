#include <iostream>
#include <cmath>
using namespace std;
/* una funcion que me diga cual es el mayor de dos numeros  */


int numero_mayor(int a, int b){
    int mayor;
    if(a>b){
        mayor=a;
    }
    else{
        mayor=b;
    }
    return mayor; 
}


int main(){
    int x,y;
    cout<<"ingrese dos numero: ";
    cin>>x>>y;
    cout<<"el numero mayor es: "<<numero_mayor(x,y)<<endl;
    return 0;
}