//
// Created by camil on 9/5/2023.
//
#include <random>
#include "Nodo.h"
#include "Lista.h"
#include <iostream>
#include <ctime>
#include <string>
using namespace std;



Lista::Lista(){
    primero = NULL;
}
string Lista::nombreAleatorio() {
    string nombres[2]={"E","R"};
    int numeroAleatorio=rand()%2;
    return nombres[numeroAleatorio];
}

void Lista::crearLista() {
    srand(time(0));
    primero = NULL;
    for (int i = 0; i <=22; i++) {
        int x = rand() % 100 + 1;
        primero = new Nodo(x, primero, NULL, new Cientifico(nombreAleatorio()));
    }
}
void Lista::visualizar(){
    cout<<"Eventos generados:"<<endl;
    Nodo*n;
    n = primero;
    while (n != NULL) {
        cout << n->getDataNodo()<<n->getCientifico()->getNombre()<<" | ";
        n = n->getFuturoNodo();
    }
}
bool Lista::esPrimo(int numero) {
    if (numero <= 1) {
        return false;
    }
    for (int i = 2; i * i <= numero; i++) {
        if (numero % i == 0) {
            return false;
        }
    }
    return true;
}

void Lista::recorrerListaHastaPrimoEventoA() {
    Nodo* actual = primero;
    bool encontradoPrimo= false;

    while (actual != NULL) {
        if (esPrimo(actual->getDataNodo()) && actual->getCientifico()->getNombre()=="E") {
            cout << "Hay un numero primo: " << actual->getDataNodo()<<endl;
            cout << "Empieza el EVENTO |A|\nEinsten ha comenzado la investigacion del viaje en el tiempo"<<endl;
            encontradoPrimo = true;
            break;
        }
        actual = actual->getFuturoNodo();
    }
    if (encontradoPrimo = true){
        recorrerListaHastaPrimoEventoB(actual->getFuturoNodo());
    }
}
void Lista::recorrerListaHastaPrimoEventoB(Nodo *inicio) {
    Nodo* siguiente = inicio;
    while (siguiente != NULL) {
        if (esPrimo(siguiente->getDataNodo())) {
            cout << "Hay un numero primo: " << siguiente->getDataNodo()<< endl;
            cout << "Empieza el EVENTO |B|\nSe ha construido la maquina..."<<endl;
            break;
        }
        siguiente = siguiente->getFuturoNodo();
    }
    if (siguiente != NULL) {
        recorrerListaHastaPrimoEventoC(siguiente->getFuturoNodo());
    }

}
void Lista::recorrerListaHastaPrimoEventoC(Nodo *inicio) {
    Nodo* actual = inicio;

    while (actual != NULL) {
        if (esPrimo(actual->getDataNodo())) {
            cout << "Hay un numero primo: " << actual->getDataNodo()<< endl;
            cout << "Empieza el EVENTO |C|\nSe ha viajado en el tiempo y se han compartido datos"<<endl;
            break;
        }
        actual = actual->getFuturoNodo();
    }
}