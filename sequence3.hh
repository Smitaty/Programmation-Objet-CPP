// Déclaration de la classe séquence en utilisant les vector

#pragma once
#include<iostream>
#include<vector>

using indicesequence = std::size_t;

enum class couleur {
    rouge,
    bleu,
    jaune,
    vert
};

class sequence {
public:
    sequence()=default; // constructeur par défaut
    sequence(sequence const & s)=default; // constructeur par recopie
    ~sequence()=default; // destructeur
    indicesequence _taille;

    indicesequence taille(){
        _taille=_couleurs.size();
        return _taille;
    }

    void ajouter(couleur c);
    void afficher(couleur c) const;
    couleur acces(unsigned int i) const;
    void afficher(std::ostream &os) const;
    void afficher_os(couleur c, std::ostream &os) const;
    void vider();
    bool comparer(sequence const & s);
    void copier(sequence const s);

private:
    std::vector<couleur> _couleurs;
};

