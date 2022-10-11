/*

Inverser les un tableau de 10 entiers

*/

#include <stdio.h>
#include <stdlib.h>

/*Déclaration des variables*/

#define TAILLETAB 8
int tab [TAILLETAB] = {5, 1, 2, 2, 5, 9, 1, 2};


/*Fonction pour inverser un tableau*/
void Inverser (int * tab, int i, int j) {

    if (i>j) {
        return;
    }

    int x;
    x = tab [i];
    tab[i] = tab [j];
    tab [j] = x;
    Inverser(tab, i+1, j-1);

}

/*Fonction qui décale d'un indice le tableau*/
void Decalage (int * tab, int k, int n) {

    if (n==0) {
        return;
    }
    int x;
    x = tab [TAILLETAB - n];
    tab [TAILLETAB - n] = tab[k];
    tab[k] = x;
    Decalage (tab, k+1, n-1);
}




int main(int argc, char const *argv[]){

    int i =0;

    for(i = 0; i < TAILLETAB; i++){
        printf("%d",tab[i]);
    }
    
    Inverser(tab, 0, TAILLETAB-1); // Indice donc -1

    printf("\n");

    for(i = 0; i < TAILLETAB; i++){
        printf("%d",tab[i]);
    }
     printf("\n");

    Decalage (tab, 0, 3);

    for(i = 0; i < TAILLETAB; i++){
        printf("%d",tab[i]);
    }

  

    return EXIT_SUCCESS;
}
