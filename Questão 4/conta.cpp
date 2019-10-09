#include "conta.h"
#define START 0
#define DEPOSITO 1
#define SAQUE 2
#define SALDO 3
#define PRECISAO 2

using namespace std;

Conta::Conta(){

    saldo = START;
}

Conta::Conta(float s){

    if(s < START){
        
        cout << "Saldo informado invalido!" << endl;
        s = START;
    }

    saldo = s;
}

void Conta::operacoes(){

    int op = START;

    cout << "Oprações disponiveis:" << endl;
    cout << "0. Canclar" << endl;
    cout << "1. Depósito" << endl;
    cout << "2. Saque" << endl;
    cout << "3. Saldo" << endl;

    cout << "Informe o número da operação a ser realizada: ";
    cin >> op;

    while (op != START){
        
        switch(op){

            case DEPOSITO:

                fazerDeposito();
            break;

            case SAQUE:

                fazerSaque();
            break;

            case SALDO:

                mostrarSaldo();
            break;

            default:

                cout << "Operação inválida! Tente novamente: ";
                cin >> op;
            break;      
        }

        cout << "\nDeseja realizar uma nova operação: ";
        cin >> op;
    }
}

void Conta::fazerDeposito(){

    float deposito = START;

    cout << "Informe o valor a depositar na conta: ";
    cin >> deposito;

    saldo += deposito;
}

void Conta::fazerSaque(){

    float saque = START;

    cout << "Informe o valor do saque: ";
    cin >> saque;

    if(saque > saldo) cout << "Saldo insuficiente!" << endl;
    else saldo -= saque;
}

void Conta::mostrarSaldo(){

    cout << "Saldo atual atual: R$" << fixed << setprecision(PRECISAO) << getSaldo() << endl;
}

float Conta::getSaldo(){

    return saldo;
}