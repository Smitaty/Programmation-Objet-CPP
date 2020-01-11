# Programmation-Objet-CPP
Vous trouverez ici des exercices effectués sur QtCReator, qui est un environnement de développement , où le but est d'apprendre l'utilisation d'objet en C++

Le jeu de la vie est un jeu dit automate cellulaire.

Pré-requis:
Grille de taille 5 (dans notre exercice mais peut-être modifié)
Une cellule a deux états : vivante ou morte, vivante -> représenté par *, morte -> représenté par ""
Quatre formes possibles:
Floraison
->   ***
    * * *
     ***
Oscillateur ligne
-> ***

Oscillateur croix
-> *
  ***
   *
   
Planeur
-> ***
     *
    *
    
Description des fonctions :
vider() -> supprime toutes les cellules vivantes.
vivante() -> Retourne vrai si les coordonnées rentrées en paramètre correspondent à une cellule vivante.
generer() -> Prend en paramètre des coordonnées correspondant à une cellule et met la cellule à l'état vivante.
tuer() -> Prend en paramètre des coordonnées d'une cellule et la met à l'état morte.
afficher() -> Affiche la grille et l'ensemble de ses cellules.

Dans notre exercice nous partons d'une grille vide où toutes les cellules sont initialisées à morte.
