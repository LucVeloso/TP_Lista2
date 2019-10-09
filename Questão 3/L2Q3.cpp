#include <iostream>
#include <vector>
#include "conta.h"
#define START 0

using namespace std;

int main(){

    vector <Conta> conta;
    float s = START;
    int i = START;
    bool add = true;

    while(add == true){

        char resp;

        cout << "Informe o saldo da conta: ";
        cin >> s;

        conta.push_back(Conta(s));

        conta[i++].operacoes();

        cout << "Adicionar nova conta (S/N)? ";
        cin >> resp;

        if(resp == 'N' or resp == 'n') add = false;
    }

    return 0;
}