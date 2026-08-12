#include <iostream>
using namespace std;

//yo ingreso numeros y muestre mayor


int main(){
	int num[5];
	
	
	for(int i=0; i<5; i++){
		cout<<"Ingrese un numero: "<<endl;
		cin>>num[i];
	}
	
	int num_mayor = num[0];
	
	for(int i=0; i<5; i++){
		if(num[i]>num_mayor){
			num_mayor = num[i];}
	cout<<num[i]<<endl;
	}
	
    
    cout<<"El numero mayor es: "<<num_mayor<<endl;
    return 0;
}


