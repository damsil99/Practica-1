#include <iostream>

using namespace std;

int aux=1,numero,contador=1;

int main()
{
    cout <<"Ingrese numero: \n";
    cin>>numero;
    while (contador<=numero){
        aux=aux*contador;
        contador=contador+1;

    }
    cout<<numero<<"! :"<<aux<<endl;
}
