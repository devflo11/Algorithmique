/*
Ecrivez un algorithme permettant, toujours sur le même principe, à l’utilisateur de saisir un nombre déterminé de valeurs. 
Le programme, une fois la saisie terminée, renvoie la plus grande valeur en précisant quelle position elle occupe dans le tableau. 
On prendra soin d’effectuer la saisie dans un premier temps, et la recherche de la plus grande valeur du tableau dans un second temps.

Décomposition du problème
.........................

1.Demander à l'utilisateur d'entrer le nombre de valeurs qu'il va saisir
2.Stoker les valeurs dans un tableau
2.Afficher la plus grande valeur saisie par l'utilisateur

Algo PlusGrandeValeur
.....................

Variables
.........
nbr, i, posMaxi : en entier
Tableau T[] : en entier

Début
Ecrire "Entrez le nombre de valeurs à saisir : "
Lire nbr

Redim T[nbr-1]
Pour i <- 0 à nbr-1
    Afficher "Entrez la valeur N° ", i+1
    Lire T[i]
i suivant
Fin Pour 
posMaxi <- 0    
Pour i <- 0 à nbr-1
Si T[i] > T[posMaxi] Alors
    posMaxi <- i
FinSi
i suivant
Fin Pour
    Ecrire  "Element le plus grand : ", T[posMaxi]
    Ecrire "Position de cet élément : ", Posmaxi
Fin

*/

#include <stdio.h>

// fonction qui renvoie la plus grande valeur
int plusGrand(int T[], int nbr) {
    int max = T[0];
    for (int i = 1; i < nbr; i++) {
        if (T[i] > max) {
            max = T[i];
        }

// Fonction qui tri
    int temp;
    for (int i = 0; i < nbr; i++) {
        for (int j = i + 1; j < nbr; j++) {
            if (T[i] < T[j]) {
                temp = T[i];
                T[i] = T[j];
                T[j] = temp;
            }
        }
    }
    return max;

int main()
{
    int nbr, i, posMaxi = 0;
    int valeurMax = 0;  // variable pour stocker la plus grande valeur
    int tab[50];  // définir la taille du tableau

    printf("Nombre de valeurs a saisir : ");
    scanf("%d", &nbr);

    for (i = 0; i < nbr; i++)
    {
        printf("Entrez la valeur N %d : ", i+1);
        scanf("%d", &tab[i]);

        if (tab[i] > valeurMax)
        {
            valeurMax = tab[i];  // enregistrer la plus grande valeur
            posMaxi = i;  // enregistrer l'index de la plus grande valeur
        }
    }

    printf("Element le plus grand : %d \n", valeurMax);
    printf("Position de cet element dans le tableau : %d \n", posMaxi);

    return 0;
}

