/*
Exercice 6.8
Ecrivez un algorithme permettant à l’utilisateur de saisir un nombre quelconque de valeurs,
 qui devront être stockées dans un tableau. L’utilisateur doit donc commencer par entrer le 
 nombre de valeurs qu’il compte saisir. Il effectuera ensuite cette saisie. Enfin, une fois 
 la saisie terminée, le programme affichera le nombre de valeurs négatives et le nombre de valeurs positives.*

 //Décomposition du problème
1. Demander à l'utilisateur d'entrer le nombre de valeurs qu'il va saisir
    - Afficher
    - Lire nbr
2. Demander à l'utilisateur de saisir les valeurs une par une
    - Répéter jusqu'à ce que tous les valeurs soit saisies
    - Lire val
3. Les valeurs seront stockées dans un tableau dont la taille dépendra du nombre de valeurs à saisir par l'utilisateur
    - Tableau tab[]
4. Afficher le nombre de valeurs négatives et positives 
    - Afficher le nomnre de valeurs négatives
    - Afficher le nombre valeurs positives

    Algorithme Saisirnombre
    .......................

//Variables
nbr, pos, neg, i en entier
Tableau tab[] en entier

Début
Afficher "Nombre de valeurs à saisir ? : "
Lire nbr
tab[nbr-1]
Pour i de O à nbr-1
Afficher "Entrez la valeur " + i+1  + ": " 
Saisir tab[i]

Si tab[i] > 0 Alors
pos <- pos + 1  
Sinon
neg <- neg + 1
FinSi
i suivant 
Afficher "Nombre de valeurs positives : " + pos
Afficher "nombre de valeurs negatives : " + neg
Fin

*/

#include <stdio.h>

int main()
{
int nbr, pos, neg, i;

printf("nombre de valeurs a saisir : ");
scanf("%d", &nbr);
int tab[nbr-1];
for ( i = 0; i <= nbr-1; i++)
{
    printf("Entrez la valeur %d : ", i+1);
    scanf("%d", &tab[i]);
    if(tab[i] > 0)
        pos = pos + 1;
    else
        neg = neg + 1;
}

    printf("Nombre de valeurs positives : %d \n", pos);
    printf("Nombre de valeurs negatives : %d \n", neg);


return 0;
}