/*
Exercice 5.5
Ecrire un algorithme qui demande un nombre de départ, et qui ensuite écrit la table
de multiplication de ce nombre, présentée comme suit (cas où l'utilisateur entre le nombre 7) :

Algorithme Table 0.1

//Variable
nbr, i : entier

Début
Ecrire "Nombre : "
Lire nbr

Pour i de 0 à 10 Faire
Ecrire nbr + " X " + i + " = " + nbr * i
i suivant
FinPour
Fin

*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
int nbr = 0;
int i;

    printf("Nombre : ");
    scanf("%d", &nbr);

    for (i = 0; i <= 10; i++)
    {
        printf("%d * %d = %d \n", nbr, i, nbr*i);
    }
    

return 0;
}