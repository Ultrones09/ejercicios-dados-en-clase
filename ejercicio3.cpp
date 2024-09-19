#include <string>
#include <iostream>
using namespace std;

int main(){
    int maximo = 10001; 
    int contador {0}; 
    int numero {2}; 
    int numPrimo {0};
    
    while (contador<maximo){
        bool esPrimo=true;
        int i=2;

        if (numero<=1){
            esPrimo=false;
        } 

        else{
            while (i < numero){
                if (numero%i==0){
                    esPrimo=false;
                    break;
                }
                i++;
            }
        }

        if (esPrimo){
            contador++;
            numPrimo=numero;
        }
        numero++;

    }

    cout<<"El 10001º número primo es: "<<numPrimo<<endl;

    return 0;
}
