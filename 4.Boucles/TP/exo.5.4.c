/* Exercice 5.3

En utilisant la boucle Pour.
Ecrire un algorithme qui demande un nombre de départ, et qui ensuite affiche les dix nombres suivants. 
Par exemple, si l'utilisateur entre le nombre 17, le programme affichera les nombres de 18 à 27.


//Variables
nbr : entier
i : entier

Début

Ecrire "Nombre de dédpart"
Lire nbr
Pour i de 1 à 10 Faire
nbr <- nbr + 1
Ecrire nbr
FinPour
Fin

*/

#include <stdio.h>

int main()
{
int i, nbr = 0;

printf("Nombre : ");
scanf("%d", &nbr);

for (i = 1; i <= 10; i++)
{
    nbr = nbr + 1;
    printf("%d ", nbr);
}

return 0;
}

