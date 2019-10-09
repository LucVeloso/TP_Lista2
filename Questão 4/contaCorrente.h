#include <iostream>
#include <iomanip> 
#include "conta.h"
#ifndef CONTACORRENTE_H
#define CONTACORRENTE_H

using namespace std;

class ContaCorrente:public Conta{

    private:
    
    float limite;
    float saldoTotal;

    public:

    ContaCorrente();
    ContaCorrente(float v, float s);

    void setLimite(float v);

    float getLimite();

    void mostrarSaldo();
};

#endif