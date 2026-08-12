#include <iostream>
using namespace std;


/* ejercicio promedio de parciales

nota igual a 4 aprobado pero no promocionado
nota igual o mayor a 7 aprobado y promocionado
nota menor a 4 desaprobado

*/
int main(){
    float nota_examen;

    cout<<"ingrese la nota del examen: ";
    cin>>nota_examen;

    if(nota_examen==10){
        cout<<"Nota excelente, promocionada"<<endl;
    }
    else if(nota_examen>=4 and nota_examen<7){
        cout<<"Nota aprobada, no promocionada"<<endl;

    }
    else if (nota_examen >=7) {
        cout<<"nota aprobada, promocionada"<<endl;
    }
    else{
        cout<<"Nota Desaprobada"<<endl;
    }

return 0;
}