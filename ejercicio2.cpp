#include <string>
#include <iostream>
using namespace std;

int main(){
    long long numero = 600851475143;
    int factor {2}; 

    while(factor*factor<=numero){
        if(numero % factor == 0){ 
            numero /= factor; 
        } 
        else{
            factor++; 
        }
    }
    cout<<"El factor primo grande es: "<<numero<<endl;
    return 0;
}

/*long long mayorFactorPrimo(long long numero) {
    int factor {2};

    while (factor*factor<=numero) {
        if (numero%factor==0) {
            numero/=factor; 
        } else {
            factor++;
        }
    }
    return numero;
}

int main() {
    long long numero = 600851475143;

    cout << "El mayor factor primo es: " << mayorFactorPrimo(numero) << endl;

    return 0;
}*/