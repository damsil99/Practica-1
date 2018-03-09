#include <iostream>

using namespace std;

int numero, contador=1, aux=0;

int main()
{
   cout<<"Ingrese numero: \n";
   cin>>numero;
   cout<<endl;
   while(contador<=numero){
      aux=contador*contador;
      contador++;
      if(aux==numero){
        cout<<numero<<" Es cuadrado perfecto"<<endl;
        break;
                       }
      }

   if(aux!=numero){
       cout<<numero<<" NO es cuadrado perfecto"<<endl;
   }


}
