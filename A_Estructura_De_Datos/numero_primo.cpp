#include <iostream>
using namespace std;

/* ejercicio para determinar si un numero es primo o no. 
Un numero primo es aquel que solo es divisible por 1 y por si mismo.
*/

int main(){
    int numero;
    cout<<"Ingrese un numero para determinar si es primo o no: ";
    cin>>numero;

    if(numero<=1){
        cout<<numero<<" no es un numero primo."<<endl;
    }
    else{
        bool es_primo=true; //  el numero es primo hasta que se demuestre lo contrario.
        for(int i=2; i<numero; i++){
            if(numero%i==0){
                es_primo=false; // Si el numero es divisible por algun numero entre 2 y numero-1, entonces no es primo.
                break; // Se sale del ciclo ya que no es necesario seguir buscando.
            }
        }
        if(es_primo){
            cout<<numero<<" es un numero primo."<<endl;
        }
        else{
            cout<<numero<<" no es un numero primo."<<endl;
        }
    }
return 0;
}
