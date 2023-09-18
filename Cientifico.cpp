//
// Created by camil on 9/14/2023.
//
using namespace std;
#include <string>
#include "Cientifico.h"

Cientifico::Cientifico(string n) {
    nombre=n;
}

string Cientifico::getNombre() const {
    return nombre;
}

