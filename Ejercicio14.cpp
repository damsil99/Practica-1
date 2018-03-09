#include <iostream>

using namespace std;

int numero=1, numero1=50;//Se inician dos variables (numero) y (numero1), son las que van a variar.

int main()
{

    while(numero<=50 && numero1>=1){;//Se hace una comparacion a cada una respecto a el numero limite,...
                                    //...que va a ser el parametro para que pare el ciclo.

        if (numero<10){              //El (if) es un condicional para que cuando sea menor a 10, imprima un...
                                    //...espacio de mas, se hace con el fin de que quede ordenada la tabla
            cout <<numero<<"     "<<numero1<<endl;
                       }

        else{
            cout <<numero<<"    "<<numero1<<endl;
             }
    numero=numero+1;
    numero1=numero1-1;
        }
}
