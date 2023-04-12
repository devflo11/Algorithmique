/* 
Exercice 6.11
Toujours à partir de deux tableaux précédemment saisis, écrivez un algorithme qui calcule le schtroumpf des deux tableaux. 
Pour calculer le schtroumpf, il faut multiplier chaque élément du tableau 1 par chaque élément du tableau 2, et additionner
 le tout. Par exemple si l'on a :


Tableau 1 :
4	8	7	12

Tableau 2 :
3	6

Le Schtroumpf sera :
3 * 4 + 3 * 8 + 3 * 7 + 3 * 12 + 6 * 4 + 6 * 8 + 6 * 7 + 6 * 12 = 279

Décomposition du problème
.........................

Créer 2 tableaux d'entiers de même taille
Créer 1 tableau d'entier qui contiendra le produit de chaque élément du tableau 1 et tableau 2
Calculer la somme des valeurs du tableau 

Algo Schtroumpf
...............

Variables
.........
Tableau Tab1[8] = {4, 8, 7, 9, 1, 5, 4, 6}
Tableau Tab2[8] = {7, 6, 5, 2, 1, 3, 7, 4}
Tableau Sum[8]
i : en entier 
j : en entier

Début
Pour i de 0 à tab1[8] -1
Pour j de 0 à tab2[8] -1
Sum[i] = Sum + tab2[i] * tab1[j]
i suivant
j suivant
Fin Pour
Afficher "Le schtroumph est : ", Sum
Fin
*/

#include <stdio.h>

int main()
{
int tab1[8] = {4, 8, 7, 9, 1, 5, 4, 6};
int tab2[8] = {7, 6, 5, 2, 1, 3, 7, 4};
int i, j;
int sum = 0;

 for (i = 0; i < 8 -1; i++)
 {
    for ( j = 0; j < 8 -1; j++)
    {
        sum = sum + tab1[i] * tab2[j];
    }
    
 }
   printf("Le stchroumph est : %d \n", sum);

return 0;
}