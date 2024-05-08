#include<iostream>

using namespace std;

int main(){

    int i = 0, n = 0;

    cout<<"Ingrese el numero maximo del incremento: ";
    cin>> n;
    for(i = 2; i <= n; i = i+2){
        cout<< i<< "\n";
    }

return 0;

}