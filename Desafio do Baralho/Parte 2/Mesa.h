#include <iostream>
#include <sstream>
#include "Baralho.h"
#include "Cadeira.h"

using namespace std;

class Mesa{

private:
    const string valores[13] = {"Ás","2","3","4","5","6","7","8","9","10",
    "Valete","Dama","Rei"};
    const string naipes[4] = {"Copas","Paus","Espadas","Ouros"};
    Baralho baralho;
    vector<Cadeira> jogadores;
    vector<Carta> mesa;
public:
    Mesa();
    void configurarBaralho();
    void adicionarJogadores(int numJogadores);
    void distribuirJogadores();
    string descreverCarta(Carta c);
    //Por questões de demonstração, manter essa função aqui
    void mostrarCartasJogadores();
    void printarBaralho();
};