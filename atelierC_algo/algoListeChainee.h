#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "os.h"

/*IMPLEMENTATION DES OPERATIONS SUR LES LISTES CHAINEES*/

//On va faire pour la liste simplement chainee first


//Taille de la liste
#define taille 10

//Declaration du type elementLISTE
struct elementListe    //Pour une liste simplement chainee on a : cle | succ | pour un element de la chaine
{  
    int cle;
    struct elementListe *succ;
};
typedef struct elementListe elementLISTE;

