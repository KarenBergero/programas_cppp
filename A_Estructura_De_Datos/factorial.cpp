#include <iostream>
using namespace std;

/*  ejercicio factorial de un numero. Numero multiplica hasta el N que yo ingrese 1x2x3x4...xN. 
El resultado se muestra al final. 
*/

int main(){
    int numero, resultado_factorial;
    cout<<"Ingrese un numero para calcular su factorial: ";
    cin>>numero;

    resultado_factorial=1; // El factorial de un numero se inicia en 1, ya que es el elemento neutro de la multiplicacion.  
    for(int i=1; i<=numero; i++){
        resultado_factorial= resultado_factorial * i; 
    }
    cout<<"El factorial de "<<numero<<" es: "<<resultado_factorial<<endl;
    return 0;

}

