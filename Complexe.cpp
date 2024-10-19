#include "Complexe.h"

Complexe::Complexe(int max) {
    taille_max = max;
    taille_courant = 0;
    adr = new Soiree*[max];
}
Complexe::~Complexe() {
    if(adr)
        delete[] adr;
}

void Complexe::ajout(Soiree* s) {
    if(taille_courant < taille_max)
        adr[taille_courant++] = s;
}
void Complexe::affiche() {
    for(int i=0; i<taille_courant; i++) {
        adr[i]->affiche();
        cout << endl;
    }
}