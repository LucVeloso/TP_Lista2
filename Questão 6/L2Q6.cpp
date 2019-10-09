#include <iostream>
#include <vector>
#include "empregado.h"
#define START 0

using namespace std;

int main(){

    vector <Empregado> emp;
    bool cadastro = true;
    char saida;
    float aumento = START;

    while(cadastro){

        string n;
        string sn;
        float s;

        cout << "Informe o nome do empregado: ";
        cin >> n;

        cout << "Informe o sobrenome do empregado: ";
        cin >> sn;

        cout << "Informe o salario do empregado: ";
        cin >> s;

        emp.push_back(Empregado(n, sn, s));

        cout << "Cadastrar novo funcionario(S/N)? ";
        cin >> saida;

        if(saida == 'N' or saida == 'n') cadastro = false;
    }

    for(int i = START; i < emp.size(); i++){

        emp[i].mostrarDados();
    }

    cout << "\nRealizar aumento(S/N)? ";
    cin >> saida;

    if(saida == 'S' or saida == 's'){

        cout << "Informe a % do aumento: ";
        cin >> aumento;
    }

    for(int i = START; i < emp.size(); i++){

        emp[i].aumento(aumento);
    }
    
    return 0;
}