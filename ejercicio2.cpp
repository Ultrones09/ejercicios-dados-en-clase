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
