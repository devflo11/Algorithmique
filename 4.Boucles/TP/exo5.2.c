/* Exercice 5.2
Ecrire un algorithme qui demande un nombre compris entre 10 et 20, 
jusqu’à ce que la réponse convienne. En cas de réponse supérieure à 20, 
on fera apparaître un message : « Plus petit ! », et inversement, « Plus grand ! » 
si le nombre est inférieur à 10.

Algorithme nombre
..................

//Déclaration des variables
nombre : Entier
//initialisation 
nombre <- 0;

Début 
    Afficher "Entrez un nombre entre 10 et 20"
    TantQue nombre < 10 OU nombre > 20
        Saisir nombre 
        Si nombre < 10 alors
            Afficher "Plus grand !"
        SinonSi nombre > 20 Alors
            Afficher "Plus petit"
        FinSi
    FinTantQue
Fin

*/

#include <stdio.h>
#include <stdlib.h>

int main()
{

int nombre = 0;
int restart = 1;

while(restart)
{
    printf("Entrez un nombre entre 10 et 20 : ");
    while(nombre < 10 || nombre > 20)
    {
        scanf("%d", &nombre);
        if(nombre < 10)
        {
            printf("Plus grand ! \n"); 
        }
        else if (nombre > 20)
        {
            printf("Plus petit ! \n");
        } 
        else
        {
            printf("Bravo ! \n");
        }
        printf("Rejouez ? : ");
        scanf("%d", &restart);     
    }   
    
}
         
return 0;
}