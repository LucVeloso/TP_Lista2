#include "fatura.h"
#define START 0

using namespace std;

int main(){

    string nSerie;
    string descricao;
    int quantidade = START;
    float preco = START;

    cout << "Informe o número de série do item: ";
    cin >> nSerie;

    cout << "Informe a descrição do item: ";
    cin.ignore();
    getline(cin, descricao);

    cout << "Informe a quantidade de itens: ";
    cin >> quantidade;

    cout << "Informe o preço do item: ";
    cin >> preco;

    Fatura ft(nSerie, descricao, quantidade, preco);

    ft.mostrarFatura();

    return 0;
}