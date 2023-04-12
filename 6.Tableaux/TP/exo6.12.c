/* 
Exercice 6.12
Ecrivez un algorithme qui permette la saisie d’un nombre quelconque de valeurs, sur le principe de l’ex 6.8.
Toutes les valeurs doivent être ensuite augmentées de 1, et le nouveau tableau sera affiché à l’écran.

//Décomposition du problème

1. Demander à l'utilisateur d'entrer le nombre de valeurs qu'il va saisir
2. Demander à l'utilisateur de saisir les valeurs une par une à l'aide d'une boucle Pour
3. Faire une boucle pour augmenter chaque valeur saisie par l'utilisateur de 1 
4. Afficher les valeurs

Algo augmenter de 1 
...................

//Variables 
Nb, i : en entier
Tableau T[] en entier
Debut
Ecrire "Entrez le nombre de valeurs : "
Lire Nb
Redim T[Nb-1]
Pour i ← 0 à Nb - 1
  Ecrire "Entrez le nombre n° ", i + 1
  Lire T[i]
i Suivant
Ecrire "Nouveau tableau : "
Pour i ← 0 à Nb – 1
  T[i] ← T[i] + 1
  Ecrire T[i]
i Suivant
Fin

*/

#include <stdio.h>

int main () {
    int nombreDeValeurs;
 
    printf("Combien de valeurs souhaitez-vous saisir ? \n");
    scanf("%d", &nombreDeValeurs);
    
    int Tableau[nombreDeValeurs];

    int i;
    for (i = 0; i < nombreDeValeurs; i++) { 
        scanf("%d", &Tableau[i]);
    }

    // Ici, on a initialisé notre tableau et on va maintenant l'augmenter de 1
    for (i = 0; i < nombreDeValeurs; i++) { 
        Tableau[i]++;
    }

    // On affiche le tableau
    for (i = 0; i < nombreDeValeurs; i++) { 
        printf("%d ", Tableau[i]);     
    }
    
    return 0;
}
