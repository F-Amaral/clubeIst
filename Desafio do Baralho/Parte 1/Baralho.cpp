#include "Baralho.h"

Baralho::Baralho(){
    for (int i = 0; i < 4; i++){
        for(int j = 1; j <= 13; j++){
            cartas.push_back(Carta(j,i));
        }
    }
}

void Baralho::embaralhar(){    
    random_shuffle(cartas.begin(), cartas.end());
}

void Baralho::cortar(){
    int posicaoCorte = rand() % cartas.size();
    vector<Carta> corteA(cartas.begin(), cartas.begin() + posicaoCorte);
    vector<Carta> corteB(cartas.begin() + posicaoCorte, cartas.end());
    cartas.clear();
    cartas.reserve(corteA.size() + corteB.size());
    cartas.insert(cartas.end(), corteB.begin(), corteB.end());
    cartas.insert(cartas.end(), corteA.begin(), corteA.end());
}

Carta Baralho::tirarCarta(){
    int cartaTopo = cartas.size() -1;
    Carta carta = cartas.at(cartaTopo);
    cartas.erase(cartas.end());
    return carta;
}

