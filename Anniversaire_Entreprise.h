#ifndef ANNIVERSAIRE_ENTREPRISE_H
#define ANNIVERSAIRE_ENTREPRISE_H
#include "Soiree.h"


class Anniversaire_Entreprise : public Soiree {
    private:
        int frais_communication;
        int forfait;
        int frais_reserve;

    public:
        Anniversaire_Entreprise(Date,string,string,int,int,int,int);
        ~Anniversaire_Entreprise();

        void affiche();

        int frais_anniversaire_entreprise();

};
#endif //ANNIVERSAIRE_ENTREPRISE_H