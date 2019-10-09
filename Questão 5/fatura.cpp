#include "fatura.h"
#define START 0
#define NSERIESTD 00000000
#define TAMMAXDESC 16
#define PRECISAO 2

using namespace std;

Fatura::Fatura(){

    setNSerie(NSERIESTD);
    setDescricao("Produto");
    setQuantidade(START);
    setPreco(START);
}

Fatura::Fatura(string s, string d, int q, float p){

    setNSerie(s);
    setDescricao(d);
    setQuantidade(q);
    setPreco(p);
}

void Fatura::setNSerie(string s){

    nSerie = s;
}

void Fatura::setDescricao(string d){

    int tamanho = START;
    int dif = START;
    int i = START;

    tamanho = d.size();
    dif = TAMMAXDESC - tamanho;

    while((i <= TAMMAXDESC) and (i <= tamanho)){

        descricao += d[i++];
    }
}

void Fatura::setQuantidade(int q){

    if(q >= START) quantidade = q;
    else quantidade = START;
}

void Fatura::setPreco(float p){

    if(p >= START) preco = p;
    else preco = START;
}


void Fatura::mostrarFatura(){

    cout << "\nItem                          |Quantidade     |Valor" << endl;

    cout << "(" << getNSerie() << ") " << getDescricao() << "   " << getQuantidade() << "               R$ " << fixed << setprecision(PRECISAO) << getPreco() << endl;
    cout << "\nTotal: R$" << fixed << setprecision(PRECISAO) << getPreco()*getQuantidade() << endl;
}

string Fatura::getNSerie(){

    return nSerie;
}

string Fatura::getDescricao(){

    return descricao;
}

int Fatura::getQuantidade(){

    return quantidade;
}

float Fatura::getPreco(){

    return preco;
}
