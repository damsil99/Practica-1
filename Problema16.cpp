#include <iostream>

using namespace std;
int numero, aux=0;


int main()
{
    cout << "Ingrese un numero:" << endl;
    cin>>numero;
    cout<<endl<<endl;                              //numero es el que se ingresa, y el que se usa para modificar.
    cout<<numero<<": "<<numero<<",";               //aux sera el parametro para que el ciclo siempre se cumpla.
    while (aux!=1){
        if(numero%2==0){
            numero=numero/2;
            if (numero==1){
                cout<<numero<<endl<<endl;           //Siempre se va a cumplir pero entonces, cuando en alguno de los casos llegue a uno
                break;                              //... rompe el ciclo.
                           }
            else{
            cout<<numero<<",";
                 }
                        }
        else{
            numero=(3*numero)+1;
            if(numero==1){
                cout<<numero<<endl<<endl;
               break;
                          }
            else{
                cout<<numero<<",";
                }

             }





                    }
    return 0;
}
