/*
Déclarer un tableau de 10 entiers
1) Chercher l'indice d'une valeur x, retourner -1 si X n'appartient pas à t
2) Vérifier si les valeurs dans le tableau forme un palindrome
3) Calculer la somme des éléments de t
*/

#include <stdio.h>
#include<stdlib.h>

/*Déclaration des variables*/
#define TAILLETAB 8
int tab [TAILLETAB]= {1, 1, 2, 5, 5, 2, 1, 1};


/*Permet la recherche dans le tableau*/
unsigned int Search (int nb, int i, int tab[]){

    if (i != TAILLETAB) {
        if (nb == tab[i]){
            return i;
        } else {
            return Search(nb, i+1, tab);
        }
    } else {
        return -1;
    }

}


/*Palindrome*/
unsigned int Palindrome (int tab[], int k) {
    if (k != TAILLETAB) {
        if (tab[TAILLETAB-k-1] == tab[k]){
            if(k == (TAILLETAB/2)){
                return 0;
            } else {
                return Palindrome (tab, k+1);
            }
        } else {
            return -1;
        }
    }
 
}


/*Permet la somme des entiers du tableau*/
unsigned int Somme (int somme, int j, int tab[]) {   
    if (j != TAILLETAB) {
        somme = somme + tab[j];
        return Somme (somme, j+1, tab);
    } else {
        return somme;
    }  
}


  
/*Main*/
int main(int argc, char const *argv[]){

    int nb = 0,
        res = 0,
        i = 0; // indice tableau

    int somme = 0,
        j = 0;

    int k = 0;
    
    printf("Entrez un entier à rechercher : ");
    scanf("%d", &nb);

    printf("Res : %d\n",Search(nb, i, tab));

    printf("Somme des entiers : %d\n", Somme (somme, j, tab));

    printf("Palindrome : %d\n", Palindrome(tab, k));

    
    return EXIT_SUCCESS;
}
