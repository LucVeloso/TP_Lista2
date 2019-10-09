#include <iostream>
#include <iomanip>
#ifndef CONTA_H
#define CONTA_H

using namespace std;

class Conta{

    private:

    float saldo;

    public:

    Conta();
    Conta(float s);

    void operacoes();

    void fazerDeposito();
    void fazerSaque();
    void mostrarSaldo();

    float getSaldo();
};

#endif