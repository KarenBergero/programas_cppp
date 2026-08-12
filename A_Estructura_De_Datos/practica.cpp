#include <iostream>
using namespace std;
/* escriba un programa donde el usuario introduzca un dia y el mes de las estaciones del año  que se dan en Argentina
e imprima en pantalla la estacion que corresponde

verano 21 dic-20 de marzo
otoño 21 mar-20 de junio
invierno 21 jun-20 de septiembre
primavera 21 sep-20 de diciembre

*/
int main(){
    int dia, mes;
    cout << "Ingrese el dia: ";
    cin >> dia;     
    cout << "Ingrese el mes: ";
    cin >> mes;

    if((mes==12 && dia>=21) || (mes==1) || (mes==2) || (mes==3 && dia<=20)){
        cout << "La estacion es: Verano" << endl;
    } else if((mes==3 && dia>=21) || (mes==4) || (mes==5) || (mes==6 && dia<=20)){
        cout << "La estacion es: Otoño" << endl;
    } else if((mes==6 && dia>=21) || (mes==7) || (mes==8) || (mes==9 && dia<=20)){
        cout << "La estacion es: Invierno" << endl;
    } else if((mes==9 && dia>=21) || (mes==10) || (mes==11) || (mes==12 && dia<=20)){
        cout << "La estacion es: Primavera" << endl;
    } else {
        cout << "Fecha invalida" << endl;
    }


}
