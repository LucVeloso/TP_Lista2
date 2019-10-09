#include <iostream>
#ifndef EMPREGADO_H
#define EMPREGADO_H

using namespace std;

class Empregado{

    private:

    string nome;
    string sobrenome;
    float salario;

    public:

    Empregado();
    Empregado(string n, string sn, float s);

    void setNome(string n);
    void setSobrenome(string sn);
    void setSalario(float s);

    void aumento(float p);
    void mostrarDados();

    string getNome();
    string getSobrenome();
    float getSalario();
};

#endif