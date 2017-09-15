#include "Baralho.h"

//inicializa o baralho, com as cartas ordenadas (iniciando pelo 0)
Baralho::Baralho(){
    for (int i = 0; i < 4; i++){
        for(int j = 0; j < 13; j++){
            cartas.push_back(Carta(j,i));
        }
    }
}

void Baralho::embaralhar(){    
    random_shuffle(cartas.begin(), cartas.end());
}


/*Escolhe uma posição aleatória do baralho para dividir em 2 partes,
baixo e topo, esvazia o baralho original, e reinsere as 2 partes em 
ordem invertida (topo vira baixo, e baixo vira topo)*/
void Baralho::cortar(){
    int posicaoCorte = rand() % cartas.size();
    vector<Carta> baixo(cartas.begin(), cartas.begin() + posicaoCorte);
    vector<Carta> topo(cartas.begin() + posicaoCorte, cartas.end());
    cartas.clear();
    cartas.reserve(baixo.size() + topo.size());
    cartas.insert(cartas.end(), topo.begin(), topo.end());
    cartas.insert(cartas.end(), baixo.begin(), baixo.end());
}

/*seleciona a carta que está na ultima posição do vetor, ou que está
no topo, segundo definição de código*/
Carta Baralho::tirarCarta(){
    int cartaTopo = cartas.size() -1;
    Carta carta = cartas.at(cartaTopo);
    cartas.erase(cartas.end());
    return carta;
}

