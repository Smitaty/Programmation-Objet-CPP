#pragma once
#include <array>

enum class couleur {
    rouge,
    bleu,
    jaune,
    vert
};

using indicesequence = unsigned int;
struct sequence {
    std::array<couleur,100> contenu;
    indicesequence taille;
};

void sc_initialiservide(sequence &s);

void sc_ajouter(sequence &s, couleur c);

void sc_copier(sequence &s, sequence t); // copie t dans s

couleur sc_acces(sequence s, int indicesequence);

void sc_afficher(couleur c);

void sc_vider(sequence &s);

void sc_afficher(sequence s);

bool sc_comparer(sequence s, sequence t);

