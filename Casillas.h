#ifndef CASILLA_H
#define CASILLA_H

#include "Pieza.h"

class Casilla {
public:
    
    Casilla();
    Casilla(const Casilla& orig);
    virtual ~Casilla();
    Casilla(Pieza*);
    
    Pieza* getPieza();
    void setPieza(Pieza*);
    
    
private:
    Pieza* piezaAsignada;
};

#endif /* CASILLA_H */