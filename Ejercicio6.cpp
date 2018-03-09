#include <iostream>

using namespace std;


int potencia, numero=0,aux=1,aux1;

int main()
{

    cout<<"Ingrese numero:\n";
    cin>>numero;
    cout<<"Ingrese potencia \n";
    cin>>potencia;
    aux1=potencia;

    if (potencia<0){
    while (potencia!=0){
        aux=numero*aux;
        potencia=potencia+1;
        }
    cout << "La potencia de "<<numero<<" en "<<aux1<<" es: \n"<<"1/"<<aux<< endl;

    }

    else{
    while (potencia!=0){
        aux=numero*aux;

        potencia=potencia-1;
        }

    cout << "La potencia de "<<numero<<" en "<<aux1<<" es: \n"<<aux<< endl;


                                }


    return 0;
}
