#include <iostream>
using namespace std;
/*
Un programa debe pedir al usuario ingresar la cantidad de notas de examenes que se desean cargar. 

Una vez que se terminan de ingresar las notas se debe calcula e informar:

a) cuántas notas fueron mayores o iguales a 6 (aprobadas)
b) cuántas notas fueron menores a 6 (desaprobadas).


    //// variables a utilizar

    // cantidad de notas a ingresar
    //variable para ingresar cada nota

    // CONTADORES

    //a) notas aprobadas
    //b) notas desaprobadas
    //notas ingresadas hasta el momento


*/

int main(){
    int cantidad_notas, total_aprov=0, total_desaprov=0, notas_hasta_ahora=0;
    float nota;
    
    cout<<"Ingrese la cantidad de notas a cargar: ";
    cin>>cantidad_notas;

    while(notas_hasta_ahora<cantidad_notas){
        cout<<"Ingrese la nota numero "<<notas_hasta_ahora+1<<": ";
        cin>>nota;

        if(nota>=6){
            total_aprov++;
        }else{
            total_desaprov++;
        }
        notas_hasta_ahora++;
    }
    cout<<"cantidad de notas aprobadas: "<<total_aprov<<endl;
    cout<<"cantidad de notas desaprobadas: "<<total_desaprov<<endl;
return 0;


}