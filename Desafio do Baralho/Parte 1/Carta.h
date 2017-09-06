#include <iostream>
#include <string>

using namespace std;

class Carta{
    private:
        enum Naipes{Copas, Paus , Espadas, Ouros};
        int _numero;
        Naipes _naipe;
    public:
        Carta(int numero, int naipe);
        Carta();
        int numero() { return _numero; }
        void numero(int numero) { _numero = numero; }
        Naipes naipe() const { return _naipe; }
        void naipe(Naipes naipe) { _naipe = naipe; }
};