#include "sequence2.hh"
#include <iostream>

void sc_initialiservide(sequence &s){
    s.taille=0;
    s.taillereserve=0;
    s.couleurs=nullptr;
}

void sc_ajouter(sequence &s,const couleur c){
    if(s.taille == s.taillereserve){
        s.taillereserve+=5;
        couleur * tmp(new couleur[s.taillereserve]);
        for(unsigned int i=0; i<s.taille; ++i){
            tmp[i]=s.couleurs[i];
        }
        delete [] s.couleurs;
        s.couleurs=tmp;
    }
    s.couleurs[s.taille]=c;
    s.taille++;
}

void sc_copier(sequence &destination, sequence source){
    if(destination.taillereserve!=source.taillereserve){
        delete [] destination.couleurs;
        if(source.taille==0)
            destination.couleurs=nullptr;
        else
            destination.couleurs = new couleur[source.taillereserve];
        destination.taillereserve = source.taillereserve;
    }
    destination.taille = source.taille;
    for(indicesequence i(0); i<source.taille; ++i)
        destination.couleurs[i]=source.couleurs[i];
}

couleur sc_acces(const sequence s, int indicesequence){
    return s.couleurs[indicesequence];
}

void sc_afficher(const couleur c){
    switch(c){
        case couleur::rouge:
            std::cout<<"rouge";
        break;
        case couleur::bleu:
            std::cout<<"bleu";
        break;
        case couleur::jaune:
            std::cout<<"jaune";
        break;
        case couleur::vert:
            std::cout<<"vert";
        break;
    }
}

void sc_vider(sequence &s){
    s.taille=0;
    delete []s.couleurs;
    s.couleurs=nullptr;
}

void sc_afficher(const sequence &s){
    for(unsigned int i=0; i<s.taille; ++i){
        sc_afficher(sc_acces(s,i));
        std::cout<<" ";
    }
    std::cout << std::endl;
}

bool sc_comparer(const sequence s, const sequence t){
    if(s.taille==t.taille){
        for(unsigned int i=0; i<s.taille; ++i){
            if(s.couleurs[i]!=t.couleurs[i]) return false;
        }
        return true;
    }
    else return false;
}

void sc_detruire(sequence &s){
    delete []s.couleurs;
}
