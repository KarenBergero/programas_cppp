#include <iostream>
using namespace std;

/*  ejercicio de licencias de conducir 
    - Si la edad es mayor o igual a 18 años, se muestra el mensaje "Mayor de edad, puede sacar licencia de conducir".
    - Si la edad es mayor o igual a 16 años pero menor a 18 años, se muestra el mensaje "Puede sacar licencia de conducir con permiso de los padres".
    - Si la edad es menor a 16 años, se muestra el mensaje "Menor de edad sin permiso. No puede sacar licencia".


usar bandera en la variable bool permiso para indicar si el menor de edad tiene permiso de los padres o no.
Si el usuario ingresa una edad menor a 16 años, se le preguntará si tiene permiso de los padres y se actualizará la variable permiso .
*/

int main(){
    int edad;
    bool permiso= false;
    char respuesta; 

    cout<<"Ingrese la edad: ";
    cin>>edad;

    if(edad>=18){
        cout<<"Mayor de edad, puede sacar licencia de conducir"<<endl;

    }
    else if(edad>=16 && edad<18){
        cout<<"Puede sacar licencia de conducir con permiso de los padres"<<endl;
        cout<<"¿Tiene permiso de los padres? (s/n): ";
        cin>>respuesta;
        if(respuesta == 'S' or respuesta == 's'){
            permiso=true;
            cout<<"Permiso otorgado. Puede sacar licencia de conducir."<<endl;
        
        }
        else if(respuesta== 'N' or respuesta== 'n'){
            permiso=false;
            cout<<"Permiso denegado. No puede sacar licencia de conducir."<<endl;
        }

    } 
    else{
        cout<<"Menor de edad. No puede sacar licencia."<<endl;
    }
return 0;

    }























