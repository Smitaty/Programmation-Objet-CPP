/*
Dans ce fichier est déclaré le type couleur et la classe séquence 
*/

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

void sc_initialiservide(sequence &s); // initialise le tableau de couleur

void sc_ajouter(sequence &s, couleur c); // ajoute une couleur à la fin du tableau

void sc_copier(sequence &s, sequence t); // copie t dans s

couleur sc_acces(sequence s, int ind); // renvoit la couleur à l'indice "ind" du tableau

void sc_afficher(couleur c); // afficher une couleur (nécessaire car couleur est un type non primitif)

void sc_vider(sequence &s); // vide le tableau de couleur

void sc_afficher(sequence s); // affiche le contenu de la séquence

bool sc_comparer(sequence s, sequence t); // compare t à s et renvoit un booléen

