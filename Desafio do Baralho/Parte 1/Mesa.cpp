#include "Mesa.h"

Mesa::Mesa(){}

//prepara o baralho e sorteia uma carta
void Mesa::distribuir(){ 
    baralho.embaralhar();
    baralho.cortar();
    Carta carta = baralho.tirarCarta();
    cout << "Sua carta foi (valor naipe(copas 1, paus 2, espadas 3,ouros 4)):" <<  carta.numero() + 1 <<" "<<carta.naipe() + 1 << endl; 
}