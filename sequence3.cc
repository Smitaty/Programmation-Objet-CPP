#include "sequence3.hh"
#include<iostream>

void sequence::ajouter(couleur c){
    _couleurs.push_back(c);
}

couleur sequence::acces(unsigned int i) const {
    return _couleurs[i];
}

void sequence::afficher_os(couleur c, std::ostream &os) const {
    switch(c){
        case couleur::rouge:
            os<<"rouge";
        break;
        case couleur::bleu:
            os<<"bleu";
        break;
        case couleur::jaune:
            os<<"jaune";
        break;
        case couleur::vert:
            os<<"vert";
        break;
    }
}

void sequence::afficher(couleur c) const {
    afficher_os(c,std::cout);
}

void sequence::afficher(std::ostream & os) const {
    for(auto i : _couleurs)
        afficher_os(i,os);
        os << "\n";
}

void sequence::vider(){
    _couleurs.clear();
}

bool sequence::comparer(const sequence &s){
    return _couleurs == s._couleurs;
}

void sequence::copier(const sequence s){
    _couleurs = s._couleurs;
}
