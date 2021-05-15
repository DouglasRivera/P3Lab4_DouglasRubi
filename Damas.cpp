#include "Damas.h"
#include <iostream>

using std::cout;
using std::endl;

Damas::Damas() {
    if (tablero == 0) {
        tablero = new Casilla**[8];
        for (int i = 0; i < 8; i++) {
            tablero[i] = new Casilla*[8];
        }
    }
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            tablero[i][j] = new Casilla();
        }
    }
}

Damas::Damas(const Damas& orig) {
}

Damas::~Damas() {
}

void Damas::imprimirTablero() {
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {

            if (tablero[i][j]->getPieza() == 0) {
                cout << "[ " << "\"  \"" << " ]";
            } else {
                if (tablero[i][j]->getPieza()->getBando() == true) {
                    cout << "[ " << " \"" << 'O' << " \"" << " ]";
                } else {
                    cout << "[ " << " \"" << 'X' << " \"" << " ]";
                }
            }
        }
        cout << endl;
    }
}

void Damas::llenarTablero() {
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            if (i <= 2) {
                if (i == 0 || i == 2) {
                    if ((j + 1) % 2 == 0) {  
                        tablero[i][j]->setPieza(new Pieza(false, false));   
                    }
                } else if (i == 1) {

                    if ((j + 1) % 2 != 0) {
                        tablero[i][j]->setPieza(new Pieza(false, false));   
                    }
                }
            } else if (i >= 5 && i <= 7) {

                if (i == 5 || i == 7) {

                    if ((j + 1) % 2 != 0) {
                       
                        tablero[i][j]->setPieza(new Pieza(true, false));
                       
                    }

                } else if (i == 6) {
                    if ((j + 1) % 2 == 0) {
                       
                        tablero[i][j]->setPieza(new Pieza(true, false));
                       
                    }
                }

            }


        }
    }

}
bool Damas::revisarGane(char pieza) {
    int contador = 0;
    if (contador == 'O') {
        for (int i = 0; i < 8; i++) {
            for (int j = 0; j < 8; i++) {
                if (tablero[i][j]->getPieza()->getBando() == true) {
                    contador++;
                }
            }
        }
        if (contador == 0) {
            return true;
        }
        
    } else if (contador == 'X') {
        for (int i = 0; i < 8; i++) {
            for (int j = 0; j < 8; i++) {
                if (tablero[i][j]->getPieza()->getBando() == false) {
                    contador++;
                }
            }
        }
        if (pieza == 0) {
            return true;
        }
    }
    return false;
}

void Damas::deleteTablero() {
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            if (tablero[i][j] != 0) {
                if (tablero[i][j]->getPieza() != 0) {
                    delete tablero[i][j]->getPieza();
            }
                delete tablero[i][j];
            }
        }
    }
    for (int i = 0; i < 8; i++) {
        if (tablero[i] != 0) {
            delete tablero[i];
        }
    }
    if (tablero != 0) {
        tablero = 0;
    }
}