#pragma once
#include<iostream>
#include<vector>

using coordonnee = int;

enum class etatcellule {
    vivant,
    mort
};

enum class structure {
    oscillateurligne,
    floraison,
    planeur,
    oscillateurcroix
};

class grille {
public:
    grille(coordonnee hauteur, coordonnee largeur);
    std::vector <etatcellule> _etatgrille;

    void vider();
    bool vivante(coordonnee i, coordonnee j) const;
    void tuer(coordonnee i, coordonnee j);
    void afficher();
    void generer(coordonnee i, coordonnee j);
    void ajouterstructure(structure s,coordonnee i, coordonnee j);
    int vivantes(coordonnee i, coordonnee j) const;
    void evolution(grille & g) const ;

private:
    coordonnee _hauteur;
    coordonnee _largeur;
};
