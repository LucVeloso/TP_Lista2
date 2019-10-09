#include <iostream>
#include "fruta.h"
#include "maca.h"
#ifndef MACAVERDE_H
#define MACAVERDE_H

using namespace std;

class MacaVerde:public Maca{

    public:

    MacaVerde();
    MacaVerde(string c);
};

#endif