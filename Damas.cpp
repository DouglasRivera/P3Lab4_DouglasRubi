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
