#include <iostream>
using namespace std;

unsigned long factorial(int n){
    if(n<=1){
        return 1;
    }else{
        return n*factorial(n-1);
    }
}

int main(){
    int n;
    cout<<"Escribe el factorial a calcular"<<endl;
    cin>>n;
    unsigned long fac=factorial(n);
    cout<<"el factorial de "<<n<<" es:\n"<<fac<<endl;
    cin.get();
    cin>>n;
}