//
// Created by camil on 9/5/2023.
//

#ifndef PRACTICA1_LISTASENLAZADAS_NODO_H
#define PRACTICA1_LISTASENLAZADAS_NODO_H


#include "Cientifico.h"

class Nodo {
protected:
    int dato;
    Nodo *futuro;
    Nodo *pasado;
    Cientifico*cientifico;

public:
    Nodo(int t, Nodo *futuro, Nodo *pasado, Cientifico*cientifico);
    int getDataNodo() const;
    Nodo *getFuturoNodo() const;
    Nodo *getPasadoNodo() const;
    Cientifico*getCientifico() const;

};


#endif //PRACTICA1_LISTASENLAZADAS_NODO_H
