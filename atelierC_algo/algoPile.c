/**
 * Date : May 28th, 2021
 * Authors : Elsa Z. et Yohann A.
 * Description : Algo de PILE (EMPILER, DEPILER, PILE_VIDE, PILE_PLEINE)
 * 
 * 
*/

#include "algoPile.h"

int main(int argc, char const *argv[])
{
    PILE p;
    int option = 1, choice, element;

    //Test des operations
    initPILE(p);    //p.sommet = -1 on suppose pile vide au debut

    //Menu 
    printf("\n\tImplementation d'une pile");
    while (option) 
    {
        system("cls");
        printf("\nMenu principal");
        printf("\n\t1.Empiler \n\t2.Depiler \n\t3.Afficher \n\t4.Verifier si la pile est vide \n\t5.Verifier si la pile est pleine \n\t6.exit");
        printf("\n\nEntrez votre choix: ");
        scanf("%d", &choice);
        switch (choice) 
        {
            case 1:
                printf("\nEntrer L'element a empiler: ");
                scanf("%d", &element);
                EMPILER(p, element);
            break;

            case 2:
                element = DEPILER(p);
                printf("\nL'element depile est %d", element);
            break;

            case 3:
                printf("sommet = %d", p.sommet);
                afficherPILE(p);

            break;

            case 4:
                PILEVIDE(p);
            break;

            case 5:
                PILEPLEINE(p);

            case 6:
                exit(0);
        }
        printf("\nVoulez-vous continuer ? Tapez 0(Non) ou 1(Oui) : ");
        scanf("%d", &option);
    }
    return 0;
}