/*
TD du 11 octobre 2022

1. Somme des éléments d'une matrice
2. Produit des matrices carrés
3. Fonction qui compte dans une matrice le nombre de valeur inférieur à x donné
4. Fonction qui tente si une matrice est symétrique
5. Fonction qui affiche un histogramme de note de 40 élémentss
6. Dans une matrice n*m, binaire, trouver le plus long "bateau"

*/

#include <stdio.h>
#include <stdlib.h>

/*Déclaration des variables*/
#define COL 2
#define LIGN 2

int tab[LIGN][COL]= { {1,4}, {5,6} };
int tab2 [LIGN][COL] = { {1,4}, {2,3} };
int res [LIGN][COL];

/*Fonction calcul somme d'une matrice*/
int Somme (int (*tab)[COL], int i, int j) { // ou notation : int grid[][height]
    
    int somme = 0;

    for (int k = 0; k<i; k++){
        for (int l = 0; l<j; l++){
            somme = tab [k][l] + somme;
        }
    }
    return somme;
}


/*Fonction qui calcul le produit*/
int Produit(int (*tab)[COL], int (*tab2)[COL], int (*res)[COL],int ligne, int colonne) {
    int produit = 0;


    for (int k = 0; k<colonne; k++){
        for (int l = 0; l<ligne; l++){
                 res[k][l]=0;
                for (int m = 0; <ligne; m++){
                    res[k][l] += tab[k][m]*tab2[k][l];
                } 
        }
    }

    printf("résultat matrice : \n");
     for (int k = 0; k<ligne; k++){
        for (int l = 0; l<colonne; l++){
            printf("%4d",res[ligne][colonne]);
        }
        printf("\n");
    }
    return 0;
}


int main(int argc, char const *argv[]){

    printf("La matrice A : \n");
    for (int i = 0; i<LIGN; i ++){
        for (int j =0; j<COL; j++){
            printf("%4d", tab [i][j]);
            
        }
        printf("\n");
    }

     printf("La matrice B : \n");
    for (int i = 0; i<LIGN; i ++){
        for (int j =0; j<COL; j++){
            printf("%4d", tab2 [i][j]);
            
        }
        printf("\n");
    }
    

    printf("Somme : %d\n",Somme (tab, LIGN, COL));
    Produit (tab, tab2, res, LIGN, COL);

   
    return 0;
}
