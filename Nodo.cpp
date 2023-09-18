//
// Created by camil on 9/5/2023.
//

#include "Nodo.h"
using namespace std;

Nodo::Nodo(int t, Nodo *f, Nodo *p, Cientifico*c) {
    dato = t;
    futuro = f;
    pasado = p;
    cientifico=c;
}

int Nodo::getDataNodo() const {
    return dato;
}
Nodo *Nodo::getFuturoNodo() const {
    return futuro;
}
Nodo *Nodo::getPasadoNodo() const {
    return pasado;
}
Cientifico*Nodo::getCientifico() const {
    return cientifico;
}