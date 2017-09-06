#include <iostream>
#include "Mesa.h"

int main(int argc, const char* argv[]){
    srand (unsigned (time(NULL)));
    Mesa mesa;
    mesa.distribuir();

    return 0;
}