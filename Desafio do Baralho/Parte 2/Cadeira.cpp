#include "Cadeira.h"

Cadeira::Cadeira(bool ocupar){
    ocupada = ocupar;
}

vector<Carta> Cadeira::abrirMao(){
    return mao;
}