#include <iostream>
using namespace std;

// ejercicio: de 35 alumnos. determinar cant mujeres, cant hombres, otro

int main(){
    int mujer=0, hombre=0, otro=0;
    char genero;

    for(int i=0; i<35; i++){
        cout<<"Ingrese el genero del alumno (M/H/O): ";
        cin>>genero;
        if(genero == 'M' || genero == 'm'){
            mujer++;
        }
        else if(genero == 'H' || genero == 'h'){
            hombre++;
        }
        else if(genero == 'O' || genero == 'o'){
            otro++;
        }
        else{
            cout<<"Genero no valido. Intente de nuevo."<<endl;
            i--; // para repetir la iteracion actual
        }


    }

    cout<<"Cantidad de mujeres: "<<mujer<<endl;
    cout<<"Cantidad de hombres: "<<hombre<<endl;
    cout<<"Cantidad de otrx: "<<otro<<endl;

return 0; 
}
