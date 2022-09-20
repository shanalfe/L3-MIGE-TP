#include <stdio.h>
#include <stdlib.h>

/*
Demander n
Calculer le n ième terme de la suite
*/

int Suite(int n) {

    int res = 0;

    if(n == 0){
        res = 0;
        return res;
    } else if (n == 1){
        res = 2;
        return res;
    } else {
        return 2* Suite(n-1)+ Suite(n-2) +10;
    }

}



int main(int argc, char const *argv[]){
    
    int n = 0;

    scanf("%d", &n);

    printf("%d",Suite (n));

    return EXIT_SUCCESS;
}
