#include "aluno.h"
#define NOTAMAX 100
#define START 0
#define BREAK -1
#define NOMEMIN 3
#define DISCMIN 2
#define ADD 1

using namespace std;

Aluno::Aluno(){}

void Aluno::setNome(string n){

    if(n.size() >= NOMEMIN){

        nome = n;
    }
    else {

        cout << "Nome inválido! Digite novamente: ";
        getline(cin, n);
    }
}

void Aluno::setNotas(){

    int contNotas = START;
    float entNota = START;

    while(entNota >= START){
    
        cout << "Digite a " << contNotas + ADD << "° nota do aluno (-1 para parar): ";
        cin >> entNota;

        if(entNota == BREAK) break;

        while(entNota > NOTAMAX){
            
            cout << "Nota inválida! Digite uma nota entre 0 e 100: ";
            cin >> entNota;
        }

        notas.push_back(entNota);
        contNotas++;
    }
}

void Aluno::setMedia(){

    int divisor = notas.size();
    float dividendo = START;

    for(int cont = START; cont < divisor; cont++){

        dividendo += notas[cont];
    }

    media = dividendo/divisor;
}

void Aluno::setDisciplinas(){

    int contDisciplinas = START;
    string entDisciplina;

    while(entDisciplina != "-1"){
    
        cout << "Digite a " << contDisciplinas+ADD << "° disciplina do aluno (-1 para parar): ";
        cin >> entDisciplina;

        while(entDisciplina.size() < DISCMIN){
            
            cout << "Disciplina inválida! Digite novamente: ";
            cin >> entDisciplina;
        }

        disciplinas.push_back(entDisciplina);
        contDisciplinas++;
    }
}

string Aluno::getNome(){
    
    return nome;
}

void Aluno::getNotas(){

    int t = notas.size();

    cout << "A(s) nota(s) do aluno é(são): ";

    for(int i = START; i < t; i++){
        
        cout << notas[i] << ", ";
    }

    cout << endl;
}

float Aluno::getMedia(){

    return media;
}

void Aluno::getDisciplinas(){

    int t = disciplinas.size();

    cout << "A(s) disciplina(s) do aluno é(são): ";

    for(int i = START; i < t; i++){
        
        cout << disciplinas[i] << ", ";
    }

    cout << endl;
}

void Aluno::coletarDados(){

    string validNome;
    float media;

    cout << "Digite o nome do aluno: ";
    getline(cin, validNome);

    setNome(validNome);
    setNotas();
    setMedia();
    setDisciplinas();
}

void Aluno::mostrarDados(){

    cout << "O nome do aluno é: " << getNome() << endl;

    getNotas();

    cout << "A média do aluno é: " << getMedia() << endl;

    getDisciplinas();
}