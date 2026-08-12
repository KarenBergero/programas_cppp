#include <iostream>
using namespace std;

/* escribir un programa sobre astrologia, con solo 7 signos, que pida al usuario que ingrese su dia y numero del mes
de su fecha de nacimiento e imprima en patalla a que signo pertenece

aries 21 de marzo(mes 3) al 20 de abril(mes 4)
tauro 21 de abril(mes 4) al 20 de mayo(mes 5)
geminis 21 de mayo(mes 5) al 20 de junio(mes 6)
cancer 21 de junio(mes 6) al 22 de julio(mes 7)
leo 23 de julio(mes 7) al 22 de agosto(mes 8)
virgo 23 de agosto(mes 8) al 22 de septiembre(mes 9)
de libra hasta piscis (todo los demas )

*/
int main(){

    cout<<"Programa sobre Astrologia"<<endl;
    int dia, mes;
    cout<<"Ingrese su dia de nacimiento (numero): ";
    cin>>dia;
    cout<<"Ingrese su mes de nacimiento (numero): ";
    cin>>mes;

    if((mes==3 && dia>=21)|| (mes==4 && dia<=20)){
        cout<<"Tu signo es Aries"<<endl;
    } 
    else if((mes==4 && dia>=21)||(mes==5 && dia<=20)){
        cout<<"Tu signo es Tauro"<<endl;
    }
    else if((mes==5 && dia>=21)||(mes ==6 && dia<=20)){
        cout<<"Tu signo es Geminis"<<endl;
    }
    else if((mes==6 && dia>=21)||(mes ==7 && dia<=22)){
        cout<<"Tu signo es Cancer"<<endl;
    }
    else if((mes==7 && dia>=23)||(mes==8 && dia<=22)){
        cout<<"Tu signo es Leo" <<endl;
    }
    else if((mes==8 && dia>= 23)||(mes==9 && dia<=22)){
        cout<<"Tu signo es Virgo"<<endl;
    }
    else{
        cout<<"Tu signo es Libra, Escorpio, Sagitario, Capricornio, Acuario o Piscis"<<endl;
        cout<<"Signo fuera de rango"<<endl;
    }

return 0;
}
