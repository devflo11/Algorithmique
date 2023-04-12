/* Exercice 5.9
Ecrire un algorithme qui demande successivement 20 nombres à l’utilisateur, 
et qui lui dise ensuite quel était le plus grand parmi ces 20 nombres et 
en quelle position a été saisie ce nombre.

Algorithme plusGrand

//Variables
nbr, i, pg, p :  Entier
Début
pg ← 0
Pour i ← 1 à 20
  Ecrire "Nombre : "
  Lire nbr
  Si i = 1 ou n > pg Alors
    pg <- n
    p <- i
  FinSi
i Suivant
Ecrire "Le nombre le plus grand était : ", +pg
Ecrire "la position est : ", +p
Fin
*/

#include <stdio.h>

int main() 
{
int nbr, i, p;
int pg = 0;

  for ( i = 1; i <= 5; i++)
  {
    printf("Nombre : ");
    scanf("%d", &nbr);
    if ((i == 1) || (nbr > pg))
    {
      pg = nbr;
      p = i;
    }
    
  }
     printf("Le nombre le plus grand est : %d \n Sa position est le : %d \n", pg, p);
return 0;
}