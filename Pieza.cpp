
#include "Pieza.h"

Pieza::Pieza() {
}

Pieza::Pieza(const Pieza& orig) {
}

Pieza::~Pieza() {
}

Pieza::Pieza(bool bando, bool esReina){
    this->bando = bando; 
    this->esReina = esReina;
}

bool Pieza::getBando(){
    return bando;
}

void Pieza::setBando(bool var){
    bando = var;
}

bool Pieza::isReina(){
    return esReina;
}

void Pieza::setToReina(bool var){
    esReina = var;
}