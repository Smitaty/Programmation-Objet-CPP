#include <iostream>
#include <string>
#include "grille.hh"

int main()
{
    grille g(5,5);
    g.ajouterstructure(structure::oscillateurligne,2,2);
    g.afficher();
    grille g1(5,5);
    std::string s;
    while(1){
        g1.vider();
        std::getline(std::cin ,s);
        g.evolution(g1);
        g1.afficher();
        g.vider();
        g = g1;
    }
    return 0;
}
