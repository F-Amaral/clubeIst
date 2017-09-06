#include "Mesa.h"

Mesa::Mesa(){}

void Mesa::distribuir(){
    baralho.embaralhar();
    baralho.cortar();
    Carta carta = baralho.tirarCarta();
    cout << "Sua carta foi: " <<  carta.numero() << carta.naipe() << endl; 
}