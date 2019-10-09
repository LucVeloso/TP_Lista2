#include "contaCorrente.h"
#include <iostream>
#define START 0

using namespace std;

int main(){

    float limite = START;
    float s = START;

    cout << "Informe o saldo da conta: ";
    cin >> s;

    cout << "Informe o limite da conta: ";
    cin >> limite;

    ContaCorrente cc(limite, s);

    cc.operacoes();

    return 0;
}