#include <stdio.h>
#include <stdlib.h>


/*
Demander n et
Calculer 0+1+2+3+4+...+n
*/

int Rec (int i, int n, int res) {



    if (i <= n) {

        i = i+1;
        res = res +i;2
       
        Rec(i, n, res);
       
    } 
        printf(" %d ", res);
        return res;
    

}



int main(int argc, char const *argv[]){
    
    int i = 0,
        n=0,
        res = 0;
    
    printf("Nombre n : ");
    scanf("%d", &n);
   
    Rec(i,n,res);
    
    
    return EXIT_SUCCESS;


}
