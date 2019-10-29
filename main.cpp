/*
Cet exercice a pour but :
-de créer un type couleur prenant comme valeur 4 couleurs.
-de créer une classe séquence composée d'un tableau de couleurs et de créer des méthodes manipulant le tableau de couleur.
-d'apprendre à créer des classes et manipuler des types non primitifs tel que le type couleur créé dans cet exercice.
*/

#include "sequence.hh"
#include <iostream>

int main() {
    sequence a, b;
    sc_initialiservide(a);
    sc_initialiservide(b);
    sc_ajouter(a, couleur::rouge);
    sc_ajouter(a, couleur::bleu);
    sc_ajouter(a, couleur::rouge);
    sc_ajouter(a, couleur::vert);
    sc_copier(b, a); // Copie a dans b
    sc_afficher(sc_acces(a, 0)); std::cout << "\n";
    for (indicesequence i=0; i<a.taille; ++i)
        sc_afficher(sc_acces(a,i));
    std::cout << "\n";
    sc_vider(a);
    std::cout << "A: "; sc_afficher(a);
    std::cout << "B: "; sc_afficher(b);
    std::cout << sc_comparer(a,b) << "\n";
    sc_copier(a,b);
    std::cout << sc_comparer(a,b) << "\n";
    return 0;
}
