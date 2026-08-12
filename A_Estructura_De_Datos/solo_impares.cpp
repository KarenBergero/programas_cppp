#include <iostream>
using namespace std;

/*ejercicio para mostrar solo los numeros impares del 1 al 30.
 */


int main(){
    int impar;

    for(int i=0; i<30; i++){
        if (i%2 !=0){
            impar=i;
            cout<<impar<<" es un numero impar."<<endl;
        }
    }

return 0;

}