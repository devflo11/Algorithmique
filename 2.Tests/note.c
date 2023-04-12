/* Enoncé : Créer un algorithme permettant à l'utilisateur d'entrer une série de notes
comprise entre 0 et 20. 
Si l'utilisateur entre une note < 0 ou > 20 afficher un message d'erreur
Calculer la moyenne des notes entrées.
Permettre à l'utilisateur de relancer le programme.

Algorithme Note 0.1
...................

//Déclaration des variables
note, cumul : Réel
nbr : Entier
restart : Booléen

//Initialisation
note <- 0
cumul <- 0
nbr <- 0
restart <- 1

Début

TantQue (restart)

  Faire
    Afficher "Entrez une note"
    Saisir note
    cumul <- cumul + note
    nbr <- nbr + 1
  FaireTantQue(note >= 0 ET note <= 20)

  Afficher "Erreur ! Continuez ? (O/N) : "
  Saisir restart
  
  

FinTantQue

  //On affiche la moyenne des notes
  Afficher "Moyenne des notes : " + cumul/nbr 

Fin

*/
#include <stdio.h>
#include <stdlib.h>

int main()
{

//Déclaration des variables
int note, cumul, nbr = 0;
char restart = 1;
note = 0;

    while(restart)
    {
            do
            {
                 printf("Entrez une note : ");
                 scanf("%d", &note);
                 cumul = cumul + note; 
                 nbr += 1;               
                    
            }  while(note >= 0 && note <= 20);
                
                  printf("Erreur ! Continuez ? (O/N) : ");
                  scanf("%d", &restart);  
                    
    }       
            
            printf("Moyenne : %d \n", (cumul/nbr));

             //Si l'utilisateur ajoute par erreur une note < à 0 ou > à 20, il faudra la déduire de cumul, sinon la moyenne sera tronqué
            //Travailler dans un tableau est préférable pour entrer les notes

return 0; 

}