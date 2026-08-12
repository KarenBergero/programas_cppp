include <iostream>
#include <cmath>
using namespace std;

/* una funcion que me diga cual es el mayor de dos numeros  */

int mayor(int a, int b){
    int numero mayor;
    if(a>b){
        mayor=a;
    }
    else{
        mayor=b;
    }
    return mayor; 
}