/* Exercice 5.3
Ecrire un algorithme qui demande un nombre de départ, et qui ensuite affiche 
les dix nombres suivants. Par exemple, si l'utilisateur entre le nombre 17, 
le programme affichera les nombres de 18 à 27.

//Déclaration des variables
nombre : entier
i : entier
//Initialisation
i <- 0
nombre <- 0

Début
    Ecrire "Nombre de départ"
    Lire nombre
    TantQue tour < 10
        i = i + 1
        Afficher "Les 10 suivants sont : " + nombre + i
    FinTanQue
Fin 
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{

int i = 0;
int nombre = 0;

    
    printf("nombre de depart : ");
    scanf("%d", &nombre);

    while(i < 10)
    {
        i = i + 1;
        printf("%d ", nombre + i);
       
    }

return 0;
}