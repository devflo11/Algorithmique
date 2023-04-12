/* Ecrivez un algorithme constituant un tableau, à partir de deux tableaux de même longueur préalablement saisis. 
Le nouveau tableau sera la somme des éléments des deux tableaux de départ.

Tableau 1 :
4	8	7	9	1	5	4	6

Tableau 2 :
7	6	5	2	1	3	7	4

Tableau à constituer :
11	14	12	11	2	8	11	10

Décomposition du problème
..........................

Créer deux tableaux de même taille contenant des nombres entier 
Créer un autre tableau dont chaque index, contiendra la somme de chaque élément des 2 autres tableaux 

Algorithme SumTab
.................

Variables
.........
Tableau Tab1[8] = {4, 8, 7, 9, 1, 5, 4, 6}
Tableau Tab1[8] = {7, 6, 5, 2, 1, 3, 7, 4}
Tableau somme[8]
i : en entier

Début 
pour i de 0 à Tab1 - 1
somme[i] = Tab1[i] + Tab2[i]
i suivant
Fin pour
Ecrire "La somme de chaque index : "
Pour i de 0 à 7
Ecrire somme[i]
i suivant
Fin Pour
Fin

*/

#include <stdio.h>

int main()
{
//Variables
int tab1[8] = {4, 8, 7, 9, 1, 5, 4, 6};
int tab2[8] = {7, 6, 5, 2, 1, 3, 7, 4};
int somme[8];
int i;

for (i = 0; i < 7; i++)
{
    somme[i] = tab1[i] + tab2[i];
}

for ( i = 0; i < 7; i++)
{
    printf("index %d : %d \n", i, somme[i]);
}

return 0;
}