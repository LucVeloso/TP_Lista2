#include <iostream>
#include "point2d.h"
#define START 0

using namespace std;

int main(){

    float x = START;
    float y = START;

    cout << "Digite a coordenada X: ";
    cin >> x;

    cout << "Digite a coordenada Y: ";
    cin >> y;

    Point2d inicio;
    Point2d final(x, y);

    inicio.print();
    final.print();
    cout << "A distância entre os pontos é: "<< inicio.distancia(final) <<endl;

    return 0;
}