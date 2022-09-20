#include <stdlib.h>
#include <stdio.h>

void calculate(); 

int main(void) {

    int a, 
        b; 

    printf("Entrez un premier nombre : "); 
    scanf("%d",&a);
    printf("Entrez un deuxième nombre : "); 
    scanf("%d", &b);  

    calculate(a, b); 
    
    return 0; 
}


void calculate(int a, int b){

  
    int resultat2 = a - b; 
    int resultat3 = a * b; 



    printf("Le résultat de %d + %d est %d.\n", a, b,  a + b); 
    printf("Le résultat de %d - %d est %d.\n", a, b, resultat2); 
    printf("Le résultat de %d * %d est %d.\n", a, b, resultat3); 
    printf("Le résultat de %d / %d est %f.\n", a, b,  a / b); 


}