#include <iostream>

using namespace std;

int main()
{
    int numero,numero1,parametro,sum=0,cont=2,aux1=1,aux2=1;
    cout << "Ingrese tres numeros" << endl;
    cin>>numero>>numero1>>parametro;


    if(numero<parametro && numero1<parametro){ //Solo entra si el parametro es mayor que los numeros
        if(numero1%numero==0){  //Si el numero con modulo aplicado al otro numero me es cero, tomo solo los multiplos del mayor o el que es igual
            if(numero<=numero1){
                cout<<"m"<<numero;
                while(numero*cont<=parametro){//Siendo cont=2 lo que hago es la comparacion si multiplicando es menor que el parametro
                    cout<<"+m"<<cont*numero;
                    sum+=(numero*cont);     //Este ciclo se va a realizar hasta que el producto sea mayor, sumandole de a uno a cont,
                    cont++;                 //Se le va agregando a la variable suma
                }
                sum+=numero;                //Cuando se cumpla el ciclo, estemostrarael resultado de este
                cout<<"="<<sum<<endl;
            }

        }
        else{
            while(numero*aux1<=parametro && numero1*aux2<=parametro){ //Este caso ocurre cuando los numero son diferentes.
                if((numero*aux1)<(numero1*aux2)){       //Estos condicionales se cumplen para que cuando estos sean iguales,
                    if(aux1==1 && aux2==1){             //...no tome en cuenta el numero
                        cout<<"m"<<numero;
                        aux1++;
                        sum+=numero;
                    }
                    else{
                        cout<<"+m"<<numero*aux1;        //En este parte solo la del aux1.
                        sum+=numero*aux1;
                        aux1++;

                    }

                }
                else{
                    if((numero*aux1)>(numero1*aux2)){
                        if(aux2==1 && aux1==1){
                            cout<<"m"<<numero1;
                            aux2++;
                            sum+=numero1;
                                              }
                        else{                                     //Todo esto es un ciclo, que se valida con el while
                            cout<<"+m"<<numero1*aux2;             //... y va ingresando de acuerdo a las condiciones
                            sum+=numero1*aux2;
                            aux2++;

                             }
                                                    }
                    else{
                        if((numero*aux1)==(numero1*aux2)){
                            cout<<"+m"<<numero*aux1;
                            sum+=numero*aux1;
                            aux1++;
                            aux2++;

                                                           }
                        }
                   }
                                                                      }
             }

    cout<<"="<<sum<<endl;
    }
    else{
        cout<<"valores no validos"<<endl;
    }
    return 0;
}
