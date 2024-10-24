#include <stdio.h>
#include <string.h> // <--- à inclure pour gérer les chaine de caractère
/*
 * strcpy(variable cible, Chaine a mettre dans la variable)   <-- fais une copy du second argument dans la variable cible
 * strlen(variable cible)  <-- compte le nombre de caractère (sans le caractère invisible \0 qui signale la fin de la chaine
 * strcmp(chaine cible, chaine à comparer)   <-- compare deux chaines entre elles et retourne Résultat : egal = 0
 * strcat(chaine1, chaine2)   <--- permet de concaténer 2 chaines de caractère pour en faire une seule.
 * strstr()   <-- chercher une chaine de caractère dans une autre.
 * strchr()   <-- cherche 1ère occurence d'un caractère dans une chaine.
 *
 */
int main(void) {
    signed char nom[25] = "Boul et Bill";
    signed char prenom[25] = "Bill";
    char lettre = 'i';
    char *pos = strchr(nom, lettre);

    printf("%s\n", pos);


    /*if(strstr(nom, prenom) != NULL){
        printf("chaine trouvé");
    } else{
        printf("chaine pas trouvé");
    }*/


    //printf("%s", strcat(nom,prenom));


    /*int test = strcmp(nom, prenom);
    if(test == 0){
        printf("lexicographiquement égal");
    } else {
        printf("Pas égal, %d ", test);
    }*/

    //printf("Ton prénom est : %s\n", prenom);
    //printf("Taille du prénom : %d\n", strlen(prenom));
    //strcpy(prenom, "autre prenom");
    //printf("Ton autre prénom est : %s\n", prenom);
    return 0;
}
