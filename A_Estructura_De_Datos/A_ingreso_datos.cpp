#include <iostream>
using namespace std;

//ingreso de datos al array

int main(){
	int edad[5];
	
	for (int i =0; i< 5; i++){
		cout<<"Ingrese edad: "<<endl;
		cin>> edad[i];
		
	}
	cout<<"edades ingresadas: \n";
	for (int i=0; i<5; i++){
		cout<<edad[i]<<endl;
	}
return 0;
}