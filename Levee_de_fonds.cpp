#include "Levee_de_fonds.h"

Levee_de_fonds::Levee_de_fonds(Date d, string t, string s, int f, int f_c, int forf, int f_r) : Soiree(d,t,s,f) {
    frais_communication = f_c;
    forfait = forf;
    frais_reserve = f_r;
}
Levee_de_fonds::~Levee_de_fonds() {}

void Levee_de_fonds::affiche() {
    Soiree::affiche();

    cout << "Frais de communication: " << frais_communication << endl;
    cout << "Forfait: " << forfait << endl;
    cout << "Frais reserves: " << frais_reserve << endl;
}

int Levee_de_fonds::frais_levee_de_fonds() {
    return Soiree::get_cout_base() + frais_communication + forfait + frais_reserve;
}