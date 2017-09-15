#ifndef CARTA_H
#define CARTA_H

#include <iostream>
#include <string>

using namespace std;

class Carta{
private:
    int _numero;
    int _naipe;
public:
    Carta(int numero, int naipe);
    Carta();
    int numero() { return _numero; }
    void numero(int numero) { _numero = numero; }
    int naipe() const { return _naipe; }
    void naipe(int naipe) { _naipe = naipe; }
};
#endif