#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "os.h"

/*IMPLEMENTATION DES OPERATIONS SUR LES LISTES CHAINEES*/


//Taille de la liste
#define taille 10

//Declaration du type LISTE
struct liste    //Pour une liste on a : | pred | cle | succ | pour un element de la chaine
{
    int *pred;  
    int cle;
    int *succ;
    int tab[taille];
};
typedef struct liste LISTE;

//TODO continuer apres l'exercice  base<-->sommet de la pile
