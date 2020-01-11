# Programmation-Objet-CPP
Vous trouverez ici des exercices effectués sur QtCReator, qui est un environnement de développement , où le but est d'apprendre l'utilisation d'objet en C++

Le jeu de la vie est un jeu dit automate cellulaire.

Pré-requis:
Grille de taille 5 (dans notre exercice mais peut-être modifié)
Une cellule a deux états : vivante ou morte, vivante -> représenté par *, morte -> représenté par ""
Une cellule morte prend vie si elle est entourée de 3 cellules vivantes (exactement).
Une cellule vivante meurt d’isolement si elle est entourée de 0 ou 1 cellule vivante, et meurt
d’étouffement si elle est entourée de 4 (ou plus) cellules vivantes.
Quatre structures possibles:
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
vivantes() -> Retourne le nombre de cellules vivantes autour de la cellule aux coordonnées passées en paramètre.
generer() -> Prend en paramètre des coordonnées correspondant à une cellule et met la cellule à l'état vivante.
tuer() -> Prend en paramètre des coordonnées d'une cellule et la met à l'état morte.
afficher() -> Affiche la grille et l'ensemble de ses cellules.
ajouterstructure(= -> Prenant en paramètre une structure et des coordonnées et créée la structure aux coordonnées.

Dans notre exercice nous partons d'une grille vide où toutes les cellules sont initialisées à morte.
Dans mon exemple on part avec une structure en oscillateur ligne puis on appuie sur Entrée pour effectuer les étapes et on obtient le déroulement du Jeu de la Vie.
On peut partir de n'importe quelle autre structure et on peut effectuer le jeu sur une taille quelconque.
