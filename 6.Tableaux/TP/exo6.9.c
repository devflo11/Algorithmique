/*
Exercice 6.9
Ecrivez un algorithme calculant la somme des valeurs d’un tableau (on suppose que le tableau a été préalablement saisi).

Décompositon 
............
Créer un tableau contenant des valeurs
Calculer la somme des valeurs 
Afficher la somme des valeurs

Algorithme somme
................

//Variables
Tableau tab[5]={3, 5, 4, 7, 9}
sum, i : en entier
sum <- 0

Début
Pour i de 0 à 4
sum = sum + tab[i]
i suivant
Fin Pour
Afficher sum
Fin

*/

#include <stdio.h>

int main() 
{
int tab[5]={3, 5, 4, 7, 9};
int sum = 0;
int i;

for (i = 0; i < 5; i++)
{
    sum = sum + tab[i];
}
    printf("Total : %d \n", sum);
    
return 0;
}

