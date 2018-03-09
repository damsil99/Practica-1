#include <iostream>
#include<math.h>

using namespace std;

int lado,lado1,lado2;

int main()
{
    cout << "Ingrese lado del triangulo:" << endl;
    cin>>lado;
    cout << "Ingrese lado del triangulo:" << endl;
    cin>>lado1;
    cout << "Ingrese lado del triangulo:" << endl;
    cin>>lado2;

    if(lado+lado1>lado2 && lado+lado2>lado1 && lado1+lado2>lado){


                if(lado==lado1 && lado==lado2 && lado1==lado2){
                    cout<<"El tirangulo es equilatero"<<endl;
                }

                else if(lado==lado1 || lado==lado2 || lado1==lado2){
                    cout<<"El triangulo es isosceles"<<endl;
                }

                else if(lado!=lado1 && lado!=lado2 && lado1!=lado2){
                    cout<<"El triangulo es escaleno"<<endl;
                }

        }

    else{
        cout<<"No se puede formar un triangulo"<<endl;
    }









    return 0;
}
