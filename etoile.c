#include <stdio.h>
#include <stdlib.h>


int main (void) {
	
	
	int nombre=0;

	printf("nombre : ");
	scanf("%d", &nombre);

	for(int i=0; i<nombre;i++){

		printf(" ");

		for(int j=0;j<nombre;j++){
			printf("*");
			
		}
		printf("\n");
	}



	 for(int i= 0; i<=nombre; i++){
       for(int j=0; j<i; j++){ //j représente la ligne d'en dessous et i la ligne d'au dessus, donc on rajoute une étoile à chaque fois.
            printf("*");           
       }
       printf("\n");
    }



	for(int i=0; i<nombre;i++){

		printf(" ");

		for(int j=0;j<i;j++){
			printf("*");
			
		}
		printf("\n");
	
	
	}





	return EXIT_SUCCESS;

}
