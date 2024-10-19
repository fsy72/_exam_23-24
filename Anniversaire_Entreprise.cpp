#include "Anniversaire_Entreprise.h"

Anniversaire_Entreprise::Anniversaire_Entreprise(Date d, string t, string s, int f, int f_c, int forf, int f_r) : Soiree(d,t,s,f) {
    frais_communication = f_c;
    forfait = forf;
    frais_reserve = f_r;
}
Anniversaire_Entreprise::~Anniversaire_Entreprise() {}

void Anniversaire_Entreprise::affiche() {
    Soiree::affiche();

    cout << "Frais de communication: " << frais_communication << endl;
    cout << "Forfait: " << forfait << endl;
    cout << "Frais reserves: " << frais_reserve << endl;
}

int Anniversaire_Entreprise::frais_anniversaire_entreprise() {
    return Soiree::get_cout_base() + frais_communication + forfait + frais_reserve;
}