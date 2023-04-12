/* Exercice 5.6
Ecrire un algorithme qui demande un nombre de départ, et qui calcule la somme
des entiers jusqu’à ce nombre. Par exemple, si l’on entre 5, le programme doit calculer :
1 + 2 + 3 + 4 + 5 = 15

Algorithme Somme

//Variable 
nbr, somme, i : Entier
Début
Ecrire "Nombre de départ"
Lire nbr
Pour i de 1 à nbr Faire
somme = somme + i
i suivant
Ecrire "Somme totale : " + somme
Fin
*/

#include <stdio.h>

int main()
{
int somme, i, nbr = 0;
printf("Nombre de départ : ");
scanf("%d", &nbr);
for (i = 0; i <= nbr; i++)
{
    somme = somme + i;
}
printf("Somme totale : %d \n", somme);

return 0;
}