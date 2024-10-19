#ifndef SOIREE_H
#define SOIREE_H
#include <iostream>
#include <ostream>
#include <string>

using namespace std;

struct Date {
    int jour;
    int moins;
    int annee;

    Date(int j=1, int m=1, int a=2003) {
        jour = j;
        moins = m;
        annee = a;
    }
    Date& operator=(const Date &d) {
        if(this!=&d) {
            jour = d.jour;
            moins = d.moins;
            annee = d.annee;
        }
        return *this;
    }
};

class Soiree {
    private:
        Date date;
        string thematique;
        string salle;
        int frais_location;
    
    public:
        Soiree(Date,string,string,int);
        virtual ~Soiree();

        virtual void affiche();

        int get_cout_base();

        friend void operator<<(const Soiree&, ostream&);

};

#endif //SOIREE_H