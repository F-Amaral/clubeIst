#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <ctime>
#include <cstdlib>

#include "Carta.h"


using namespace std;

class Baralho{

private:
    vector<Carta> cartas;

public: 
    Baralho();
    void embaralhar();
    void cortar();
    Carta tirarCarta();
    int tamanhoBaralho() {return cartas.size();}
};