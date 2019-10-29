/*
Dans ce fichier est déclaré le type couleur et la classe séquence avec ses attributs et méthodes
*/

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
    indicesequence taillereserve; // permet de savoir la taille disponible dans le tableau
};

void sc_initialiservide(sequence &s); // initialise le tableau de couleur

void sc_ajouter(sequence &s, couleur c); // ajoute une couleur à la fin du tableau

void sc_copier(sequence &s, sequence t); // copie t dans s

couleur sc_acces(sequence s, int ind); // renvoit la couleur à l'indice "ind" du tableau

void sc_afficher(couleur c); // afficher une couleur (nécessaire car couleur est un type non primitif)

void sc_vider(sequence &s); // vide le tableau de couleur

void sc_afficher(sequence s); // affiche le contenu de la séquence

bool sc_comparer(sequence s, sequence t); // compare t à s et renvoit un booléen

void sc_detruire(sequence & s); // détruit le tableau de pointeur
