#include "Soiree.h"
#include "Anniversaire_Entreprise.h"
#include "Levee_de_fonds.h"
#include "Complexe.h"

int main(){
    Soiree s1(Date(27,4,2024), "liens de famille", "Salle AMY", 100000);
    Soiree s2(Date(13,9,2024), "l'amitie", "Salle BETA", 90000);

    Complexe c(10);

    Anniversaire_Entreprise a1(Date(24,3,2024), "Entreprise party", "Salle ALPHA", 130000, 40000, 70000, 100000);
    Anniversaire_Entreprise a2(Date(1,7,2024), "Integration", "Salle GAMMA", 120000, 30000, 90000, 800000);

    Levee_de_fonds l1(Date(2,7,2024), "Aide social", "Salle SIGMA", 100000, 30000, 130000, 75000);
    Levee_de_fonds l2(Date(5,5,2024), "Club bon coeur", "Salle LAMBDA", 100000, 30000, 130000, 94000);

    c.ajout(&s1);
    c.ajout(&s2);
    c.ajout(&a1);
    c.ajout(&a2);
    c.ajout(&l1);
    c.ajout(&l2);

    c.affiche();

    return 0;
}