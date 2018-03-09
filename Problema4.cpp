#include <iostream>

using namespace std;

int hora,duracion,aux,aux1;


int main()
{
    cout << "Ingrese una hora" << endl;
    cin>>hora;
    cout << "Ingrese duracion" << endl;
    cin>>duracion;

    if(hora<=2400 && duracion<=2400 && hora>=100 && duracion>=100){
        aux=hora%100;
        hora=hora/100;
        aux1=duracion%100;
        duracion=duracion/100;

        if(aux<60 && aux1<60){         //Se toma los minutos y deben de cumplir que sean menores a 60
            aux=aux+aux1;              //Se almacena en la variable aux
            hora=hora+duracion;        //La hora sera la suma de los enteros de la hora y la duracion
            if (aux>=60){              //Entra solo si la suma de los minutos supera los 60
                aux=aux-60;            //Se modifica la hora restandole 60 y aumentando 1 en la hora
                hora++;

                        }
            if(hora>24){
                hora=hora-24;          //Hacemos lo mismo con la hora, si la suma supera las 24, se le resta 24
                        }
            if (aux!=0){
            cout<<"La hora es:"<<endl<<hora<<aux<<endl;       //Me imprimira la hora, si esta es diferente de cero
                        }                                     //De lo contrario pondra los minuteros en 00
            else{
                cout<<"La hora es:"<<endl<<hora<<"00"<<endl;
                }
                                }

        else{
            if(aux>60){
                cout<<"El valor "<<hora<<aux<<" no es valido."<<endl;
                        }
            else{
                cout<<"El valor "<<duracion<<aux1<<" no es valido."<<endl;
                }
            }
                                                                }

    else{
        if(hora>2400 || hora<100){
            cout<<"El valor "<<hora<<" no es valido."<<endl;
        }
        if(duracion>2400 || duracion<100){
            cout<<"El valor "<<duracion<<" no es valido."<<endl;
        }
    }

    return 0;
}
