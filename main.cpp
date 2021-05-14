#include <cstdlib>
#include "Damas.h"
using namespace std;

/*
 *  
 */
int main() {
    
    Damas* juego;
    juego = new Damas();
    
   juego->llenarTablero();
   juego->imprimirTablero();
    
    
    return 0;
}