//
// Created by camil on 9/5/2023.
//

#ifndef PRACTICA1_LISTASENLAZADAS_LISTA_H
#define PRACTICA1_LISTASENLAZADAS_LISTA_H
#include <string>

#include "Nodo.h"

class Lista {
protected:
    Nodo *primero;

public:
    Lista();
    void crearLista();
    void visualizar();
    void recorrerListaHastaPrimoEventoA();
    void recorrerListaHastaPrimoEventoB(Nodo*inicio);
    bool esPrimo(int numero);
    string nombreAleatorio();
    void recorrerListaHastaPrimoEventoC(Nodo*inicio);
};


#endif //PRACTICA1_LISTASENLAZADAS_LISTA_H
