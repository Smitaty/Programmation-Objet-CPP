#include "grille.hh"
#include<iostream>

grille::grille(coordonnee hauteur, coordonnee largeur)
    :_hauteur(hauteur),_largeur(largeur){
    for(coordonnee i=0; i<=_hauteur*_largeur; ++i){
        _etatgrille.push_back(etatcellule::mort);
    }
}

void grille::vider(){
    for(coordonnee i=1; i<=_hauteur*_largeur; ++i){
        _etatgrille[i]=etatcellule::mort;
    }
}

bool grille::vivante(coordonnee i, coordonnee j) const{
    if((i<=_largeur) && (j<=_hauteur)){
        if(_etatgrille[_largeur*(i-1)+(j-1)]==etatcellule::vivant)
            return true;
        else return false;
    }
    else return false;
}

void grille::tuer(coordonnee i, coordonnee j){
    if((i<=_largeur) && (j<=_hauteur)){
        _etatgrille[_largeur*(j-1)+(i-1)]=etatcellule::mort;
    }
}

void grille::afficher(){
    for(coordonnee i=1; i<=_largeur; ++i){
        for(coordonnee j=1; j<=_hauteur; ++j){
            if(_etatgrille[_largeur*(j-1)+(i-1)]==etatcellule::mort)
                std::cout << " ";
            else std::cout << "*";
            std::cout << " | ";
        }
        std::cout << "\n";
    }
    std::cout << "\n";
}

void grille::generer(coordonnee i, coordonnee j){
    _etatgrille[_largeur*(i-1)+(j-1)]=etatcellule::vivant;
}

void grille::ajouterstructure(structure s, coordonnee i, coordonnee j){
    switch(s){
    case structure::oscillateurligne:
        generer(i,j);
        generer(i+1,j);
        generer(i+2,j);
        break;
    case structure::floraison:
        generer(i+1,j);
        generer(i+2,j);
        generer(i+3,j);
        generer(i,j+1);
        generer(i+2,j+1);
        generer(i+4,j+1);
        generer(i+1,j+2);
        generer(i+2,j+2);
        generer(i+3,j+2);
        break;
    case structure::oscillateurcroix:
        generer(i+1,j);
        generer(i,j+1);
        generer(i+1,j+1);
        generer(i+2,j+1);
        generer(i+1,j+2);
        break;
    case structure::planeur:
        generer(i,j);
        generer(i+1,j);
        generer(i+2,j);
        generer(i+2,j+1);
        generer(i+1,j+2);
        break;
    }
}

int grille::vivantes(coordonnee i, coordonnee j) const{
    int compteur=0;
    for(coordonnee k=i-1; k<=i+1; ++k){
        for(coordonnee l=j-1; l<=j+1; ++l){
            if((k>0) && (k<_largeur) && (l>0) && (l<_hauteur)){
                if((k!=i) || (l!=j)){
                   if(vivante(k,l)==true) ++compteur;
                }
            }
        }
    }
    return compteur;
}

void grille::evolution(grille &g) const{
    for(coordonnee i=1; i<=_largeur; ++i){
        for(coordonnee j=1; j<=_hauteur; ++j){
            if(vivante(i,j)==false){
                if(vivantes(i,j)==3)
                    g.generer(i,j);
            }
            else {
                if(vivantes(i,j)<=1)
                    g.tuer(i,j);
                if(vivantes(i,j)>=4)
                    g.tuer(i,j);
            }
        }
    }
}
