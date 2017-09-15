#include "Mesa.h"

Mesa::Mesa(){}

void Mesa::configurarBaralho(){
    baralho.embaralhar();
    baralho.cortar();
    cout << "Baralho pronto" << endl;
} 

void Mesa::distribuirJogadores(){
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < jogadores.size(); j++){
            jogadores.at(j).receberCarta(baralho.tirarCarta());
        }
    }
}

void Mesa::adicionarJogadores(int numJogadores){
    for (int i = 0; i < numJogadores; i++){
        jogadores.push_back(Cadeira(true));
    }
}

string Mesa::descreverCarta(Carta c){
    stringstream ss;
    ss << valores[c.numero()] << " de " << naipes[c.naipe()];
    return ss.str();
}

void Mesa::mostrarCartasJogadores(){
    for(int i = 0; i < jogadores.size(); i++){
        vector<Carta> cartasMao = jogadores.at(i).abrirMao();
        cout << "Cartas do jogador " << i << ": " << descreverCarta(cartasMao.at(0)) <<
        ", " << descreverCarta(cartasMao.at(1)) << endl;
        
    }
}

void Mesa::printarBaralho(){
    int tam = baralho.tamanhoBaralho();
    for(int i = tam; i > 0; i--){
        cout << descreverCarta(baralho.tirarCarta()) << endl;
        //cout << baralho.tamanhoBaralho() << endl;
    }
}
