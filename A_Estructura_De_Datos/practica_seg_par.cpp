#include <iostream>
#include <string>
using namespace std;
/*
//programa que pida 6 num enteros
// los guarde en un array
//muestre todos los ingresados
//muestre la suma de todos los elementos,

int main(){
    int array[6];
    //carga el arreglo y muestra los elementos ingresados
    cout<<"Ingrese 6 numeros enteros: ";
    for (int i=0; i<6; i++){
        cin>>array[i];
    }
    cout<<"Los numeros ingresados son: ";
    for (int i=0; i<6; i++){
        cout<<array[i]<<" ";
    }
    cout<<endl;

    //suma de todos los elementos
    int suma=0;
    for (int i=0; i<6; i++){
        suma+=array[i];
    }
    cout<<"La suma de todos los elementos de array: "<<suma<<endl;

    return 0;

}



//ingrese 8 numeros
//muestre: el mayor, el menor, el promedio

int main(){
    int arreglo[8];
    int mayor, menor;
    float promedio=0.0;
    //inicializamos las variables

    cout<<"ingrese 8 numeros enteros: ";
    for (int i=0; i<8; i++){
        cin>>arreglo[i];
        mayor=arreglo[0];
        menor=arreglo[0];
        if (arreglo[i]>mayor){
            mayor=arreglo[i];
        }
        if (arreglo[i]<menor){
            menor=arreglo[i];
        }
        promedio=promedio+ arreglo[i];
    }
    promedio= promedio/8;
    cout<<"El mayor es: "<<mayor<<endl;
    cout<<"El menor es: "<<menor<<endl;
    cout<<"El promedio es: "<<promedio<<endl;
}


//Ingresar 10 números.Cuántos son pares.Cuántos son impares
int main(){
    int arreglo[10];
    int pares=0, impares=0;

    for (int i =0;i<10; i++){
        cout<<"Ingrese un numero entero: ";
        cin>>arreglo[i];
        if(arreglo[i]%2==0){
            pares++;
        }
        else{
            impares++;
        }
    }
    cout<<"Numeros pares: "<<pares<<endl;
    cout<<"Numeros impares: "<<impares<<endl;

}

//ejercicio 1. cargar un vector usando una funcion
//crear una funcion que cargue un vector de 5 enteros y otra que lo muestre

void cargar_vector(int v[], int tam){
    for (int i=0;i<tam;i++){
        cout<<"Ingrese un numero entero para guardar: ";
        cin>>v[i];
    }
}

void mostrar_vector(int v[], int tam){
    cout<<"Los numeros ingresados son: ";
    for (int i=0;i<tam;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl; 
}

int main(){
    int vector[5];
    cargar_vector(vector, 5);
    mostrar_vector(vector, 5);
return 0;
}



//ejer2. sumar elementos
//crear una funcion que reciba un vector y devuelva la suma

int suma_vector(int v[], int tam){
    int suma=0;
    for(int i=0;i<tam;i++){
        cout<<"Ingrese un numero entero para guardar: ";
        cin>>v[i];
        suma+=v[i];
    }
    return suma;
}

int main(){
    int vector[5];
    int resultado=suma_vector(vector, 5);
    cout<<"La suma de los elementos del vector es: "<<resultado<<endl;  
return 0;
}


//ejer3. buscar el mayor elemento
int mayor_vector(int v[], int tam){
    int mayor=v[0];
    for (int i=1;i<tam;i++){
        cout<<"Ingrese un numero entero para guardar: ";
        cin>>v[i];
        if(v[i]>mayor){
            mayor=v[i];
        }
    }
    return mayor;
}
int main(){
    int vector[5];
    int resultado=mayor_vector(vector, 5);
    cout<<"El mayor elemento del vector es: "<<resultado<<endl; 

*/  
/*
void cargar(int v[], int tam){
	
	for (int i=0; i<tam;i++){
		cout<<"Ingrese un numero entero a guardar: ";
		cin>>v[i];
	}
}

void mostrar(int v[], int tam){
	
	for(int i=0;i<tam; i++){
		cout<<"La matriz ingresada es: ";
		cout<<v[i];
	}
}

int main(){
	int numeros[5];
	cargar(numeros,5);
	mostrar(numeros, 5);
	return 0;
}


/*
int main(){
    int numeros [6];
    int suma=0;
    cout<<"Ingrese 6 numeros: ";
    for (int i=0;i<6;i++){
        cin>>numeros[i];
        suma+=numeros[i];
    }
    cout<<"Los numeros ingresados son: ";
    for (int i=0;i<6;i++){
        cout<<numeros[i]<<" ";
    }
    cout<<"La suma de los elementos ingresados es: "<<suma<<endl;
    return 0;

}
    

int main(){
	int numeros[6];
	int suma=0;
	cout<<"Ingrese 6 numeros enteros: ";
	for(int i=0; i<6;i++){
		cin>>numeros[i];
		suma+=numeros[i];	
	}
	
	cout<<"Los numeros ingresados son: ";
	for(int i=0; i<6;i++){
		cout<<numeros[i]<<" ";
	}
	cout<<"La suma de los elementos son: "<<suma;
}




*/

//ingresa 8 numeros enteros y muestra el mayor, el menor y el promedio de los numeros ingresados
int main(){
	int numeros[8];
	int mayor=0, menor=9999;
	float promedio=0.0;

	cout<<"Ingrese 8 numeros enteros: ";
	for (int i=0;i<8;i++){
		cin>>numeros[i];
		promedio+=numeros[i];

		if(numeros[i]>mayor){
			mayor=numeros[i];
		}
		if(numeros[i]<menor){
			menor=numeros[i];
		}
}
	promedio=promedio/8;
	cout<<"el promedio es: "<<promedio<<endl;
	cout<<"el mayor es: "<<mayor<<endl;
	cout<<"el menor es: "<<menor<<endl;
}



int main(){
    int numeros [10];
    int cant_pares=0, cant_impares=0;
    cout<<"Ingrese 10 numeros enteros: ";
    for (int i=0;i<10;i++){
        cin>>numeros[i];
        if(numeros[i]%2==0){
            cant_pares++;
        }else{
            cant_impares++;
        }
    }
    cout<<"Cantidad de numeros pares: "<<cant_pares<<endl;
    cout<<"Cantidad de numeros impares: "<<cant_impares<<endl;
}




int suma_vector(int v[], int n){
    int suma=0;
    for (int i=0;i<n;i++){
        suma+=v[i];
    }
    return suma;
}

int main(){
    int numeros[5];
    cout<<"Ingrese 5 numeros enteros: ";
    for (int i=0;i<5;i++){
        cin>>numeros[i];
    }
    cout<<"La suma de los elementos es: "<<suma_vector(numeros,5)<<endl;
}



//ejercicios de Cadenas de caracteres

int main(){
    char cadena[100];
    cout<<"Ingrese una cadena de caracteres: ";
    cin.getline(cadena,100);
    cout<<"La cadena ingresada es: "<<cadena<<endl;
    return 0;
}



int main(){
    char nombre[50];
    cout<<"Ingrese un nombre completo: ";
    cin.getline(nombre, 50);
    cout<<"El nombre ingresado es: "<<nombre<<endl;
    return 0;   

}

//porque uso el cin.getline en lugar del cin para ingresar el nombre completo, 
//ya que el cin solo lee hasta el primer espacio, mientras que el cin.getline permite
// leer toda la línea de texto, incluyendo los espacios.
int main(){
    char nombre[50];
    cout<<"Ingrese un nombre completo: ";
    cin>>nombre;
    cout<<"El nombre ingresado es: "<<nombre<<endl;
    return 0;
}

//recorrer una cadena de caracteres 
int main(){
    char cadena[100];
    cout<<"Ingrese una cadena de caracteres: ";
    cin.getline(cadena,100);
    int i=0;
    while(cadena[i]!='\0'){
        i++;
        cout<<cadena[i]<<endl;
    }
    cout<<cadena[i]<<endl;
    return 0;
}

//contar letras de una cadena de caracteres
int main(){
    char cadena[100];
    cout<<"Ingrese una cadena de caracteres: ";
    cin.getline(cadena,100);
    int cantidad_letras=0;
    while(cadena[cantidad_letras]!= '\0'){
        cantidad_letras++;
    }
    cout<<"La cantidad de letras en la cadena es: "<<cantidad_letras<<endl;
    return 0;
}


//contar la cantidad de vocales en una cadena de caracteres
int main(){
    char cadena[50];
    int cant_vocales=0;
    cout<<"Ingrese una cadena de caracteres: ";
    cin.getline(cadena, 50);
    int i=0;
    while (cadena[i]!='\0'){
        if(cadena[i]=='a' || cadena[i]=='e' || cadena[i]=='i' || cadena[i]=='o' || cadena[i]=='u' ||
        cadena[i]=='A' || cadena[i]=='E' || cadena[i]=='I' || cadena[i]=='O' || cadena[i]=='U'){
            cant_vocales++;
        }
        i++;
    }
    cout<<"La cantidad de vocales en la cadena es: "<<cant_vocales<<endl;
    return 0;
}


int contar_letras(char palabra[]){
    int cantidad_letras=0;
    int i=0;
    while(palabra[i]!='\0'){
        cantidad_letras++;
        i++;
    }
    return cantidad_letras;
}

int main(){
    char palabra[50];
    cout<<"Ingrese una cadena de caracteres: ";
    cin.getline(palabra, 50);
    cout<<"La cantidad de letras de la cadena es: "<<contar_letras(palabra)<<endl;
    return 0;
}


//ejer2:leer una palaabra y mostrar letra por letra
int main(){
    char palabra[50];
    cout<<"Ingrese una palabra: ";
    cin.getline (palabra, 50);
    int i=0;
    while(palabra [i]!='\0'){
        cout<<palabra[i]<<endl;
        i++;
    }
}

//ejer5. leer un nombre completo mostrar la frase ingresada y la cantidad de caracteres 

int main(){
    char nombre[50];
    cout<<"Ingrese un nombre: ";
    cin.getline(nombre, 50);
    cout<<"El nombre ingresado es: "<<nombre<<endl;
    cout<<"La cantidad de caracteres del nombre es: "<<strlen(nombre)<<endl;
    return 0;


}

//ejer matrices

int main(){
    int matriz[3][3];
    for (int i=0;i<3;i++){ //recorre las filas 
        for (int j=0;j<3;j++){ //recorre las culumnas
            cout<<"ingrese un numero ["<<i<<"]["<<j<<"]: ";
            cin>>matriz[i][j];
        }
    }
    cout<<"La matriz ingresada es: "<<endl;
    for (int i=0;i<3;i++){
        for (int j=0;j<3;j++){
            cout<<matriz[i][j]<<" ";
        }
        cout<<endl;
    }
return 0;
}

//cargar una matriz de 2x2 y mostrarla
int main(){
    int matriz[2][2];
    for(int i =0; i<2;i++){
        for(int k=0;k<2;k++){
            cout<<"Inrese un numero"<<"["<<i<<"]""["<<k<<"]"<<": ";
            cin>>matriz[i][k];
        }
    }
    cout<<"La matriz ingresada es: "<<endl;
    for (int i=0;i<2;i++){
        for (int j=0;j<2;j++){
            cout<<matriz[i][j]<<" ";
        }
        cout<<endl;
    }
return 0;
}

//ejer2, cargar matriz 3x3 y calcular la suma de todos sus elementos
int main(){
    int matriz[3][3];
    int suma=0;
    for(int i=0;i<3;i++){
        for(int k=0;k<3;k++){
            cout<<"Ingrese un numero para la pos "<<"["<<i<<"]" "["<<k<<"]"<<": ";
            cin>>matriz[i][k];
            suma+=matriz[i][k];
        }
    }

    cout<<"La suma de todos los elementos de la matriz es: "<<suma<<endl;
return 0;
}

//cargar una matriz de 3x3  mostrar la primera fila
int main(){
    int matriz[3][3];
    for(int i=0;i<3;i++){
        for(int k=0;k<3;k++){
            cout<<"Ingrese un numero para la pos "<<"["<<i<<"]" "["<<k<<"]"<<": ";
            cin>>matriz[i][k];
        }
    }
    cout<<"La primera fila de la matriz es: "<<endl;
    for(int k=0;k<3;k++){
        cout<<matriz[0][k]<<" ";
    }
    cout<<endl;
return 0;
}

int main(){
    int matriz[3][3];
    for(int i=0;i<3;i++){
        for(int k=0;k<3;k++){
            cout<<"Ingrese un numero para la pos "<<"["<<i<<"]" "["<<k<<"]"<<": ";
            cin>>matriz[i][k];
        }
    }
    cout<<"La segunda columna de la matriz es: "<<endl;
    for(int k=0; k<3;k++){
        cout<<matriz[k][1]<<" "<<endl;
    }
    cout<<endl;
return 0;
}

//contar cuantos numeros pares tiene una matriz de 3x3

int main(){
    int numeros[3][3];
    int pares=0;
    for(int i=0;i<3;i++){
        for(int k=0;k<3;k++){
            cout<<"Ingrese un numero para la pos "<<"["<<i<<"]" "["<<k<<"]"<<": ";
            cin>>numeros[i][k];
            if(numeros[i][k]%2==0){
                pares++;
            }
        }
    }
    cout<<"La cantidad de numeros pares en la matriz es: "<<pares<<endl;
    return 0; 

}

//buscar el numero mayor de la matriz de 3x3
int main(){
    
    int matriz[3][3];
    int mayor=0;
    for(int i=0;i<3;i++){
        for(int k=0;k<3;k++){
            cout<<"Ingrese un numero para la pos "<<"["<<i<<"]" "["<<k<<"]"<<": ";
            cin>>matriz[i][k];
            if(matriz[i][k]>mayor){
                mayor=matriz[i][k];
            }
        }
    }
    cout<<"El numero mayor de la matriz es: "<<mayor<<endl;
    return 0;   

}

