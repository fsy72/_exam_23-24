#include "Soiree.h"

Soiree::Soiree(Date d, string t, string s, int f) {
    date = d;
    thematique = t;
    salle = s;
    frais_location = f;
}
Soiree::~Soiree() {}

void Soiree::affiche() {
    cout << "Date: " << date.jour << "/" << date.moins << "/" << date.annee << endl;
    cout << "Thematique: " << thematique << endl;
    cout << "Salle: " << salle << endl;
    cout << "Cout de base: " << frais_location << endl;
}

void operator<<(const Soiree& s, ostream& c) {
    cout << "Date: " << s.date.jour << "/" << s.date.moins << "/" << s.date.annee << endl;
    cout << "Thematique: " << s.thematique << endl;
    cout << "Salle: " << s.salle << endl;
    cout << "Cout de base: " << s.frais_location << endl;
}

int Soiree::get_cout_base() {
    return frais_location;
}