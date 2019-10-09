#include "data.h"
#include <iostream>

using namespace std;

int main(){

    int dia = 0, mes = 0, ano = 0;

    cout << "Digite o dia: ";
    cin >> dia;

    cout << "Digite o mes: ";
    cin >> mes;
    
    cout << "Digite o ano: ";
    cin >> ano;

    Data data(dia, mes, ano);

    cout << data.getDia() << "/" << data.getMes() << "/" << data.getAno() << endl;

    return 0;
}