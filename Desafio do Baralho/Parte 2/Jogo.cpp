#include <iostream>
#include "Mesa.h"

int main(int argc, const char* argv[]){
    srand (unsigned (time(NULL)));
    Mesa mesa;
    mesa.configurarBaralho();
    mesa.adicionarJogadores(10);
    mesa.distribuirJogadores();
    mesa.mostrarCartasJogadores();
    //mesa.printarBaralho();
    return 0;
}
