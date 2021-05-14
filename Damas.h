#ifndef DAMAS_H
#define DAMAS_H

#include "Casillas.h"

class Damas {
public:
    Damas();
    Damas(const Damas& orig);
    virtual ~Damas();
    
    void imprimirTablero();
    void llenarTablero();
    
private:
    Casilla*** tablero;
};

#endif /* DAMAS_H */