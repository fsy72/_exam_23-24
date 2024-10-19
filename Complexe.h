#ifndef COMPLEXE_H
#define COMPLEXE_H
#include "Soiree.h"
#include "Anniversaire_Entreprise.h"
#include "Levee_de_fonds.h"

class Complexe {
    private:
        int taille_max;
        int taille_courant;
        Soiree** adr;

    public:
        Complexe(int);
        ~Complexe();

        void ajout(Soiree*);
        void affiche();

        int gain_total();

};
#endif //COMPLEXE_H