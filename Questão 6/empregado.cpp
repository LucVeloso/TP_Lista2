#include <iostream>
#include "empregado.h"
#define START 0
#define MESES 12
#define CENTO 100

using namespace std;

    Empregado::Empregado(){}

    Empregado::Empregado(string n, string sn, float s){

        setNome(n);
        setSobrenome(sn);
        setSalario(s);
    }

    void Empregado::setNome(string n){

        nome = n;
    }

    void Empregado::setSobrenome(string sn){

        sobrenome = sn;
    }

    void Empregado::setSalario(float s){

        if(s < START) s = START;

        salario = s;
    }

    string Empregado::getNome(){

        return nome;
    }
    string Empregado::getSobrenome(){

        return sobrenome;
    }
    float Empregado::getSalario(){

        return salario;
    }

    
    void Empregado::mostrarDados(){
        
        cout << "O empregado " << nome << " " << sobrenome << " tem salário anual igual a " << MESES*getSalario() << endl;
    }

    void Empregado::aumento(float p){

        float porcento = p/CENTO;
        float aumento = getSalario() + (getSalario() * porcento);

        setSalario(aumento);

        cout << "O empregado " << nome << " " << sobrenome << " tem salário anual igual a " << MESES*getSalario() << endl;
    }