/* Exercice 5.9
Réécrire l’algorithme précédent, mais cette fois-ci on ne connaît pas d’avance 
combien l’utilisateur souhaite saisir de nombres. La saisie des nombres s’arrête 
lorsque l’utilisateur entre un zéro.

Alogorithme nombre

//Variables
nbr, i, pg, p : en entier
//initialisation
nbr <- 1
pg <- 0
i <- 1

Début
TantQue nbr <> 0 
Ecrire "Votre nombre : "
Lire nbr
i <- i + 1
Si i = 1 OU nbr > pg Alors
pg <- nbr
p <- i
FinSi
FinTantQue
Ecrire "Le nombre le plus grand était : ", +pg
Ecrire "la position est : ", +p
Fin

*/