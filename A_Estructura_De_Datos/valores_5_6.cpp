#include <iostream>
#include <cmath>
using namespace std;

void funcion(int a){
    cout<<"el valor de la primera funcion es: "<<a<<endl;

}



void funcion(double b){
    cout<<"el valor de la segunda funcion es: "<<b<<endl;

}

int main(){
    funcion(58);
    funcion(30.5);
    return 0;
}