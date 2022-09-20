#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
Somme des n avec j=1 et a^j

ex n = 3 et a =2
2^0 + 2^1 + 1^2 + 1
*/


int Mult(int n, int a) {

    if(n == 0) {
        return 1;
    } else {
        return Mult (n-1, a) + pow (a,n);
    }

}



int main(int argc, char const *argv[]){

    int n = 0, a = 0;
    printf("n : ");
    scanf("%d", &n);
    printf("a : ");
    scanf("%d", &a);

    printf("Résultat : %d", Mult(n, a));


    
    return EXIT_SUCCESS;
}
