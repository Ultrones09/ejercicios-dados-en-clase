#include <iostream>
#include <string>

using namespace std;

int main(){
    int a{0};
    int b{1};
    int c{0};
    int suma{0};
    int n;
    cout<<"ingresar el numero: ";
    cin>>n;

    for (int i=0;i<n;i++){
        c=a+b;
        a=b;
        b=c;
        cout <<c<<" ";
        if (c%2==0){
            suma+=c;
        }
    }
    cout<<endl<<"resultado:"<<suma;
    return 0;
}

/*void SumaFibo(int n) {
    int a{0};
    int b{1};
    int c{0};
    int suma{0};

    for (int i=0; i<n; i++){
        c=a+b;
        a=b;
        b=c;
        cout<<c<<" ";
        
        if(c%2==0){
            suma+=c;
        }
    }
    cout<<endl<<"Resultado: "<<suma<<endl;
}

int main() {
    int n;
    cout<<"Ingresar el numero: ";
    cin>>n;

    SumaFibo(n);
    return 0;
}*/