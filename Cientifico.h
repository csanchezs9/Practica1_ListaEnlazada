//
// Created by camil on 9/14/2023.
//

#ifndef PRACTICA1_LISTASENLAZADAS_CIENTIFICO_H
#define PRACTICA1_LISTASENLAZADAS_CIENTIFICO_H
#include <string>
using namespace std;

class Cientifico {
protected:
    string nombre;
public:
    Cientifico(string n);
    string getNombre() const;
};


#endif //PRACTICA1_LISTASENLAZADAS_CIENTIFICO_H
