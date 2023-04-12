/* 
Exercice 6.1
Ecrire un algorithme qui déclare et remplisse un tableau de 7 valeurs numériques en les mettant toutes à zéro.


Algorithme tab
..............

//Variables
Tableau tab[6], i en entier

Début
Pour i de 0 à 6
tab[i] <- 0
Afficher tab[i]
i suivant
Fin

*/

#include <stdio.h>

int main() 
{
int tab[6];
int i;
//Commentaire
    for ( i = 0; i <= 6; i++)
    {
        tab[i] = 0;
        printf("%d \n", tab[i]);
    }
    
return 0;
}