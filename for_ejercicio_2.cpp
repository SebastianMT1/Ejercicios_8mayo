#include<iostream>

using namespace std;

int main(){
    
    int i = 0, n = 0, modulo = 0, primo = 1;

    cout<< "Ingrese un numero: ";
    cin>> n;
    
    for (i = n - 1; i >= 2; i--){

        modulo = n % i;

        if (modulo == 0)
        {
            primo = 0;
            break;
        }
    }

    if (primo == 1)
    {
        cout<<"El numero "<< n << " es primo ";
    }
    
    else{

        cout<<"El numero "<< n << " no es primo";
    }



    return 0;
}