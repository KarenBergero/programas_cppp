#include <iostream>
using namespace std;
/*
realizar un programa q solicite al usuario una palabra o nombre. 
La funcion debe recibir una cadena y retornar la cantidad de vocales que contiene.
finalmente debe mostrar el resultado en pantalla.

int contar_vocales(char palabra[]){
    int cantidad_vocales=0;
    int i=0;
    while (palabra[i]!='\0'){
        if (palabra[i]=='a' || palabra[i]=='e' || palabra[i]=='i' || palabra[i]=='o' || palabra[i]=='u' ||
        palabra[i]=='A' || palabra[i]=='E' || palabra[i]=='I' || palabra[i]=='O' || palabra[i]=='U'){
            cantidad_vocales++;
        }
        i++;
    }
    return cantidad_vocales;
}


int main(){
    char palabra[50];
    cout<<"Ingrese una palabra o nombre: ";
    cin.getline(palabra, 50);
    cout<<"La cantidad de vocales en la palabra es: "<<contar_vocales(palabra)<<endl;
    return 0;
}

*/

/*en una fase de grupos del mundial de futbol, participan 3 selecciones. cada seleccion juega 4 partidos.
realizar un programa que permita cargar una matriz de 3 filas y 4 columnas donde cada fila representa una seleccion,
cada columna representa los goles antados en un partido, mostrar el equipo que mas goles obtuvo en alguno de todos los partidos*/


void cargar_matriz(int m[][4], int filas){
    cout<<"Ingrese los goles de cada seleccion: \n";
    for(int i=0;i<filas;i++){
        cout<<"\n Seleccion "<<i+1<<endl;
        for(int j=0;j<4;j++){
            cout<<"Partido "<<j+1<<": ";
            cin>>m[i][j];
        }
    }
}
int equipoMasGoles(int m[][4], int filas){
    int mayor = -1;
    int equipo = 0;

    for(int i=0; i<filas; i++){
        int suma = 0;

        for(int j=0; j<4; j++){
            suma += m[i][j];
        }

        if(suma > mayor){
            mayor = suma;
            equipo = i;
        }
    }

    cout << "\nLa seleccion con mas goles fue la Seleccion "
         << equipo+1 << " con " << mayor << " goles." << endl;

    return equipo;
}
int mas_goles(int m[][4], int filas){


}


int main(){
    int matriz[3][4];
    cargar_matriz(matriz[][4], 3);
    cout<<"La seleccion con mas goles en un partido es: "<<endl;

}