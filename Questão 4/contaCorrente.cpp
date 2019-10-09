#include "contaCorrente.h"
#define START 0
#define PRECISAO 2

using namespace std;

ContaCorrente::ContaCorrente() : Conta(START){

    setLimite(START);
}

ContaCorrente::ContaCorrente(float v, float s) : Conta(s){

    setLimite(v);
}

void ContaCorrente::setLimite(float v){

    if(v >= START) limite = v;
    else{
        
        cout << "Valor inválido!" << endl;
        limite = START;
    }

    saldoTotal = getSaldo() + limite;
}

float ContaCorrente::getLimite(){

    return limite;
}

void ContaCorrente::mostrarSaldo(){

    cout << "Saldo atual atual: R$" << fixed << setprecision(PRECISAO) << getSaldo()+getLimite() << endl;
}