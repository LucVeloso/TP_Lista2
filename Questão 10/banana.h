#include <iostream>
#include "fruta.h"
#ifndef BANANA_H
#define BANANA_H

using namespace std;

class Banana:public Fruta{

    public:

    Banana();
    Banana(string c);
};

#endif