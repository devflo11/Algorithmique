/*
Exercice 6.3
Ecrire un algorithme qui déclare un tableau de 9 notes, dont on fait ensuite saisir les valeurs par l’utilisateur.
Calculer ensuite la moyenne des notes.

Algorithme note
...............

//Variables
Tableau note[8] en entier
i en entier

Début
Pour i de 0 à 8
Afficher "Entrez la note : ", i+1
Lire note[i]
i suivant
//Affichage des notes
Pour i de 0 à 8
Afficher "Note ", i+1, ":", note[i]
i suivant
Fin
*/

#include <stdio.h>

int main() 
{
//Variables
int note[8];
int i;

for (i = 0; i <= 8; i++)
{
    printf("Entrez la note %d : ", i + 1);
        scanf("%d", &note[i]);
}
// Affichage des notes
for (i = 0; i <= 8; i++)
{
    printf("Note %d : %d \n", i+1, note[i]);
}

return 0;
}