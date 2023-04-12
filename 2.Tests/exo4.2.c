/* Exercice 4.2
Cet algorithme est destiné à prédire l'avenir, et il doit être infaillible !
Il lira au clavier l’heure et les minutes, et il affichera l’heure qu’il sera une minute plus tard.
 Par exemple, si l'utilisateur tape 21 puis 32, l'algorithme doit répondre :
"Dans une minute, il sera 21 heure(s) 33".
NB : on suppose que l'utilisateur entre une heure valide. Pas besoin donc de la vérifier.



//Déclaration
h, m : Entier

//Initilisation
h <- 0
m <- 0

Début

    Ecrire "Entrez heure et minutes : "
    Lire h, m
    m <- m + 1
    Si m = 60 Alors
    m <- 0
    h <- h + 1
    FinSi
    Si h = 24 Alors
    h <- 0
    FinSi
    Ecrire "Dans une minute, il sera : " + h + "heures" + m + "minutes"

Fin
*/