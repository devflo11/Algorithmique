/* 
*Exercice 5.11
Écrire un algorithme qui permette de connaître ses chances de gagner au tiercé, quarté, quinté et autres impôts volontaires.
On demande à l’utilisateur le nombre de chevaux partants, et le nombre de chevaux joués. Les deux messages affichés devront être :

Dans l’ordre : une chance sur X de gagner
Dans le désordre : une chance sur Y de gagner

X et Y nous sont donnés par la formule suivante, si n est le nombre de chevaux partants et p le nombre de chevaux joués
(on rappelle que le signe ! signifie "factorielle", comme dans l'exercice 5.7 ci-dessus) :

X = n ! / (n - p) !    (Dans l'Ordre)
Y = n ! / (p ! * (n – p) !)  (Désordre)

NB : cet algorithme peut être écrit d’une manière simple, mais relativement peu performante. Ses performances peuvent
 être singulièrement augmentées par une petite astuce. Vous commencerez par écrire la manière la plus simple, puis vous 
 identifierez le problème, et écrirez une deuxième version permettant de le résoudre. 

Variables N, J, i, A, B en Numérique
Debut
Ecrire "Entrez le nombre de chevaux partants : "
Lire N
Ecrire "Entrez le nombre de chevaux joués : "
Lire J
A ← 1
B ← 1
Pour i ← 1 à J
  A ← A * (i + N - J)
  B ← B * i
i Suivant
Ecrire "Dans l’ordre, une chance sur ", A
Ecrire "Dans le désordre, une chance sur ", A / B
Fin

 */

#include <stdio.h>

int main()
{
//Variables
int partants = 0;
int chxJoues = 0;
int i;
int A = 1;
int B = 1;

    printf("nombre de chevaux partants : ");
    scanf("%d", &partants);
    printf("Nombre de chevaux joues : ");
    scanf("%d", &chxJoues);

    for ( i = 1; i <= chxJoues; i++)
    {
        A = A * (i + partants - chxJoues);
        B = B * i;
    }
    printf("Dans l'ordre, une chance sur %d \n", A);
    printf("Dans le desordre, une chance sur %d \n\n", A / B);    

return 0;
}