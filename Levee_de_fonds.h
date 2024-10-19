#ifndef LEVEE_DE_FONDS_H
#define LEVEE_DE_FONDS_H
#include "Soiree.h"


class Levee_de_fonds : public Soiree {
    private:
        int frais_communication;
        int forfait;
        int frais_reserve;

    public:
        Levee_de_fonds(Date,string,string,int,int,int,int);
        ~Levee_de_fonds();

        void affiche();

        int frais_levee_de_fonds();

};
#endif //LEVEE_DE_FONDS_H