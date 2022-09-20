#include<stdio.h>
#include<stdlib.h>

int main(int argc, char const *argv[]){

int nombre,i;
printf("nombre: ");

scanf("%d",&nombre);

for( i=0; i<nombre; i++ ) {
i=i*i-1;
}

printf("res %d", i);

    return EXIT_SUCCESS;
}

/*

int fibo(int n){
    if n=0 ou n=1
    return n

    sinon fibo(n-1)+fibo(n-2)
}

*/