#include <iostream>
#include <vector>

#include "Carta.h"

class Cadeira{
    private:
        bool ocupada;
        vector<Carta> mao;

    public:
        Cadeira(bool ocupar);
        void receberCarta(Carta c) {mao.push_back(c);}
        vector<Carta> abrirMao();
};