#include <iostream>

using namespace std;

int numero,hora,auxmin,minuto,segundos;

int main()
{
    cout << "Ingrese numero:" << endl;
    cin>>numero;

    hora=numero/3600;
    auxmin=numero%3600;
    minuto=auxmin/60;
    segundos=auxmin%60;

    cout<<"La hora es hh/mm/ss: \n"<<hora<<":"<<minuto<<":"<<segundos<<endl;

    return 0;
}
