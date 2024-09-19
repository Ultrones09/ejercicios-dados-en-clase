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