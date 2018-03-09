#include<time.h>
#include <iostream>

using namespace std;

int numero=0,random;


int main()
{
    srand(time (NULL));
    random = rand()% 101;
    cout << "Ingrese numero entre 0 y 100" << endl;
    cin>>numero;
    while(numero!=random){
        if(numero<random){
        cout<<"El numero es mayor"<<endl;
        cout << "Ingrese numero entre 0 y 100" << endl;
        cin>>numero;
        }
        else{
        cout<<"El numero es menor"<<endl;
        cout << "Ingrese numero" << endl;
        cin>>numero;


        }
             }
    cout<<"El numero es correcto"<<endl;

    return 0;
}
