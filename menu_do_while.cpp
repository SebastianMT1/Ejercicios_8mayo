#include<iostream>

using namespace std;

int main(){

    char letra;

    do{
         cout<<"\nopciones del menu de almuerzo:\n \n";
        cout<<"Sopa de pollo\n";
        cout<<"Milanesa\n";
        cout<<"Pollo asado\n";
        cout<<"pollo guisado\n";
        cout<<"Carne asada\n";
        cin>>letra;
        cout<<"Opcion seleccionada: "<< letra << "\n\n";
    
    } 
    while (letra != 'x' );

    return 0;  
}