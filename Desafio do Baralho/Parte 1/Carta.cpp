#include "Carta.h"

Carta::Carta(int numero, int naipe){
    this->_numero = numero;
    switch (naipe) {
        case 0: this->_naipe = Copas; break;
        case 1: this->_naipe = Paus; break;
        case 2: this->_naipe = Espadas; break;
        case 3: this->_naipe = Ouros; break;
    }
}

Carta::Carta(){}

