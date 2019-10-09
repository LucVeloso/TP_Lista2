#include <vector>
#include <iostream>
#ifndef ALUNO_H
#define ALUNO_H

using namespace std;

class Aluno{

    private:

        string nome;
        vector <float> notas;
        float media;
        vector <string> disciplinas;

    public:

        Aluno();

        void coletarDados();
        void mostrarDados();

        void setNome(string n);
        void setNotas();
        void setMedia();
        void setDisciplinas();

        string getNome();
        void getNotas();
        float getMedia();
        void getDisciplinas();
};

#endif