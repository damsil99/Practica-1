#include <iostream>

using namespace std;

int numero,aux_numero,cont2=0,aux=1;


int main()
{
    cout << "Ingrese un numero" << endl;
    cin>>numero;

    aux_numero=numero;          //Se le asigna el mismo numero a otra variable y asi tomarlo de parametro.

    while (aux_numero>1){       //El ciclo principal inicia con la comparacion de si es mayor a uno.
        aux_numero--;           //Con el fin de poder saber si tiene o no factores primos.
        aux=1;
        cont2=0;
        while(numero%aux_numero==0 && aux<numero){      //Cuando se cumpla la condicion, solo trabaja el aux.
            if (aux_numero%aux==0){
                cont2++;
                                            //La variable aux. cuando cuenta se evalua asi misma, lo que hace con ayuda del otro condicional
                                   }        //... es una cuenta para calcular si la variable aux_numero es primo, cuando este llegue a
                                            //... el numero, rompe y compara en el (if), para arrojar el primo.

            if(cont2>2){
                aux=1;
                break;
                       }
            aux++;      //Esta suma es la que se toma de parametro para
                                                    }
        if(aux>1 && aux_numero!=1){
            cout<<"El mayor factor primo es "<<aux_numero<<endl;
            break;
                                             }

                            }

    if(aux_numero==1){
        cout<<"No tiene factor primo "<<endl;
                       }
    return 0;
}
