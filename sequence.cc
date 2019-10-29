#include "sequence.hh"
#include <iostream>

void sc_initialiservide(sequence & s){
    s.taille=0;
}

void sc_ajouter(sequence &s, couleur c){
    s.contenu.at(s.taille)=c;
    s.taille+=1;
}

void sc_copier(sequence &s, sequence t){
    for(unsigned int i=0; i<t.taille; ++i){
        s.contenu[i]=t.contenu[i];
    }
    s.taille=t.taille;
}

couleur sc_acces(sequence s, int indicesequence){
    return s.contenu.at(indicesequence);
}

void sc_afficher(couleur c){
    if(c==couleur::rouge) std::cout << "rouge";
    if(c==couleur::bleu) std::cout << "bleu";
    if(c==couleur::jaune) std::cout << "jaune";
    if(c==couleur::vert) std::cout << "vert";
}

void sc_vider(sequence &s){
    s.taille=0;
}

void sc_afficher(sequence s){
    for(unsigned int i=0; i<s.taille; ++i){
        sc_afficher(s.contenu[i]);
        std::cout << " ";
    }
    std::cout << std::endl;
}

bool sc_comparer(sequence s, sequence t){
    if(s.taille!=t.taille) return false;
    else {
        for(unsigned int i =0; i<s.taille; ++i){
            if(s.contenu[i]!=t.contenu[i]) return false;
        }
        return true;
    }


}
