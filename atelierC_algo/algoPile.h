/**
 * 
 * Procedures des operations de la PILE
 * 
 * 
 * */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

//Taille de la pile
#define taille 10

//Declaration du type pile
typedef struct pile PILE;
struct pile
{
   int tab[taille];      
   int sommet;   //permettra de pointer sur le premier element de la liste
};

//Initialisation de la pile
void initPILE(PILE P)
{
    P.sommet = -1;
}

//Procedure EMPILER()
void EMPILER(PILE P, int a)
{
    P.sommet++;
    P.tab[P.sommet] = a;
}

//Fonction DEPILER()
int DEPILER(PILE P)
{
    int nombre = P.tab[P.sommet];
    P.sommet--;
    return nombre;
}

//Fonction PILEVIDE()
bool PILEVIDE(PILE P)
{
    if(P.sommet == -1)
    {
        //printf("La pile est bel et bien vide !");
        return true;
    }
    else
    {
        //printf("La pile n'est pas vide ! ");
        return false;
    }
}

//Fonction PILEPLEINE()
bool PILEPLEINE(PILE P)
{
    if (P.sommet == taille)
    {
        //printf("La pile est bel et bien pleine !");
        return true;
    }
        
    else
    {
        //printf("La pile n'est pas pleine !");
        return false;
    }
        
}

//Fonction afficherPILE
void afficherPILE(PILE P)
{
    if(PILEVIDE(P))
        printf("\nLa pile est vide !");
    else
    {
        printf("|");
        for (int i = P.sommet; i >= 0; i--) //l'affichage de la PILE est contraire à l'affichage d'un tableau normal
        {
           printf(" %d |", P.tab[i]);
        }  
    }

}
