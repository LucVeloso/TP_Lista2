#include <iostream>
#include <iomanip>
#ifndef FATURA_H
#define FATURA_H

using namespace std;

class Fatura{

    private:

    string nSerie;
    string descricao;
    int quantidade;
    float preco;

    public:

    Fatura();
    Fatura(string s, string d, int q, float p);

    void setNSerie(string s);
    void setDescricao(string d);
    void setQuantidade(int q);
    void setPreco(float p);

    void mostrarFatura();

    string getNSerie();
    string getDescricao();
    int getQuantidade();
    float getPreco();
};

#endif