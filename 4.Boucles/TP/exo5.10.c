/* Exercice 5.10
Lire la suite des prix (en euros entiers et terminée par zéro) des achats d’un client.
Calculer la somme qu’il doit, lire la somme qu’il paye, et formuler la remise de la monnaie 
en affichant les textes "10 Euros", "5 Euros" et "1 Euro" autant de fois qu’il y a de coupures
de chaque sorte à rendre.

//Analyse
1. Demander à l'utilisateur d'entrer une série de prix (en entier terminé par un zéro)
L'utilisateur entre 0 pour arrêter la saisie. Variable : prixEntre
2. Calculer la somme des prix entrés par l'utilisateur. variable : sommePrixentre
3. Lire le montant versé par l'utilisateur pour régler la somme des prix entrés. variable : montantVerse
4. Calculer la différence du montant versé - la somme des prix entrés. Variable :  reste <- montantVerse - sommePrixEntre
5. Simuler la remise de la monnaie. Variables : nbr10e, nbr5e, nbr1e
6. Afficher la simulation

//Algo suiteDesPrix

//Variables
prixEntre, sommePrixEntre, montantVerse, reste, nbr10e, nbr5e, nbr1e : en entier
//initialisation des variables
reste <- 0
nbr10e <- 0
nbr5e <- 0
nbr1e <- 0
sommePrixEntre <- 0
prixEntre <- 1

Début
// 1.Demander à l'utilisateur d'entrer une série de prix
TantQue prixEntre <> 0
Afficher "Entrez un prix (0 pour quitter): "
Lire prixEntre
sommePrixEntre <- sommePrixEntre + prixEntre
FinTantQue
Afficher "Vous devez : ", +sommePrixEntre

Afficher "Entrez le montant à regler : "
Lire montantVerse
// 2.Calculer la somme des prix entrés par l'utilisateur
reste <- montantVerse - sommePrixEntre

// 3.Simulation Remise de la monnaie

//Pour les billets de 10€
nbr10E ← 0
TantQue Reste >= 10
nbr10e ← nbr10e + 1
reste ← reste – 10
FinTantQue

//Pour les billets de 5€
nbr5e ← 0
Si reste >= 5
nbr5e ← nbr5e + 1
reste ← reste – 5
FinSi

//Pour les pièces de 1€
nbr1e <- 0
Si reste >= 1
nbr1e <- nbr1e + 1
reste <- reste - 1
FinSi

Ecrire "Rendu de la monnaie :"
Ecrire "Billets de 10 E : ", nbr10e
Ecrire "Billets de  5 E : ", nbr5e
Ecrire "Pièces de 1 E : ", reste
Fin
*/


#include <stdio.h>

int main() 
{

//Variables
int montantVerse;
int reste = 0;
int nbr10e = 0;
int nbr5e = 0;
int nbr1e = 0;
int sommePrixEntre = 0;
int prixEntre = 1;

// 1.Demander à l'utilisateur d'entrer une série de prix
while (prixEntre != 0)
{
printf("Entrez un prix(0 pour quitter) : ");
scanf("%d", &prixEntre);
sommePrixEntre = sommePrixEntre + prixEntre;
}
printf("Vous devez : %d Euros \n", sommePrixEntre);

//Montant versé par l'utilisateur
printf("Entrez le montant a regler : ");
scanf("%d", &montantVerse);

// 2.Calculer la somme des prix entrés par l'utilisateur
reste = montantVerse - sommePrixEntre;

// 3.Simulation remise de la monnaie

//Pour les billets de 10€
while(reste >= 10) 
{
  nbr10e = nbr10e + 1;
  reste = reste - 10;
}

//Pour les billets de 5€
if(reste >= 5)
{
  nbr5e = nbr5e + 1;
  reste = reste - 5;
}

//Pour les pièces de 1€
nbr1e = reste;

//Remise de la monnaie
printf("***Rendue de la monnaie***\n");
printf("Billet de 10 euros : %d \n", nbr10e);
printf("Billet de 5 euros : %d \n", nbr5e);
printf("Piece de 1 euros: %d \n", nbr1e);

return 0;
}



