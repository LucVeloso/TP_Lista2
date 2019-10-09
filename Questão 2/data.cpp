#include "data.h"
#define JANEIRO 1
#define STD 1
#define DEZEMBRO 12

using namespace std;

Data::Data(){

    setAno(STD);
    setMes(STD);
    setDia(STD);
}

Data::Data(int d, int m, int a){

    setAno(a);
    setMes(m);
    setDia(d);
}

void Data::setAno(int a){

    ano = a;
}

void Data::setMes(int m){

    if((m < JANEIRO) || (m > DEZEMBRO)) m = JANEIRO;

    mes = m;
}

void Data::setDia(int d){
    
    dia = d;
}

int Data::getDia(){

    return dia;
}

int Data::getMes(){

    return mes;
}

int Data::getAno(){

    return ano;
}