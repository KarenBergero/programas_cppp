#include <iostream>
using namespace std;


// saber cuantos nombres comienzan con tal letra 
int main(){
	string nombres[6]= {"jose","matias","carla", "rosa", "julio","jeremias"};
	int contador = 0;
	
	for(int i=0; i<6; i++){
		if(nombres[i][0]=='j'){
			contador++;
			
		}
	
	}
	
    cout<<" cant nombres que empiezan con j: "<<contador<<endl;
    return 0;
}