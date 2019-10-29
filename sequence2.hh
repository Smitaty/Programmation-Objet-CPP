#pragma once
#include<iostream>

enum class couleur {
    rouge,
    bleu,
    jaune,
    vert
};


using indicesequence = std::size_t;
struct sequence {
    couleur * couleurs;
    indicesequence taille;
    indicesequence taillereserve;
};

void sc_initialiservide(sequence &s);

void sc_ajouter(sequence &s, couleur const c);

void sc_copier(sequence &destination, sequence source);

couleur sc_acces(sequence const s, int indicesequence);

void sc_afficher(const couleur c);

void sc_vider(sequence &s);

void sc_afficher(sequence const & s);

bool sc_comparer(const sequence s, const sequence t);

void sc_detruire(sequence & s);
