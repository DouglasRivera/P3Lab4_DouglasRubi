#include "Casillas.h"
#include <iostream>
using std::string;
Casilla::Casilla() {
}

Casilla::Casilla(const Casilla& orig) {
}

Casilla::~Casilla() {
}

Casilla::Casilla(Pieza* pieza){
    this->piezaAsignada = pieza;
}

Pieza* Casilla::getPieza(){
    if(piezaAsignada != 0){
    
        return piezaAsignada;
    
    }else{
        return 0;
    }
}


void Casilla::setPieza(Pieza* pieza){
    this->piezaAsignada = pieza;
}