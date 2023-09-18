#include <iostream>
#include "Lista.h"
using namespace std;

    int main() {
        Lista*l= new Lista();
        l->crearLista();
        l->visualizar();
        cout<<endl;
        l->recorrerListaHastaPrimoEventoA();
        return 0;

    }
