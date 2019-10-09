#include <iostream>
#ifndef DATA_H
#define DATA_H

using namespace std;

class Data {

    private:

    int dia;
    int mes;
    int ano;

    public:

    Data();
    Data(int d, int m, int a);

    void setAno(int a);
    void setMes(int m);
    void setDia(int d);

    int getDia();
    int getMes();
    int getAno();
};

#endif