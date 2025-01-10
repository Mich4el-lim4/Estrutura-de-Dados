#include <stdio.h>
#include <stdlib.h>

void troca(int *x, int *y){

    printf("\n");
    puts("Dentro da funcao");
    printf("\n");
    printf("Conteudo de X = %d",*x);
    printf("\n");
    printf("Ponteiro de X = %d",x);
    printf("\n");
    printf("Endereco de X = %d",&x);
    printf("\n");
    printf("\n");
    printf("Conteudo de Y = %d",*y);
    printf("\n");
    printf("Ponteiro de Y = %d",y);
    printf("\n");
    printf("Endereco de Y = %d",&y);
    printf("\n");

    int aux = *x;
    *x = *y;
    *y = aux;

    printf("\n");
    puts("Trocando valores \n");
    printf("aux = x;");
    printf("\n");
    printf("Conteudo de aux = %d", aux);
    printf("\n");
    printf("\n");
    printf("X = Y \n");
    printf("Conteudo de X = %d",*x);
    printf("\n");
    printf("Ponteiro de X = %d",x);
    printf("\n");
    printf("Endereco de X = %d",&x);
    printf("\n");
    printf("\n");
    printf("y = aux \n");
    printf("Conteudo de Y = %d",*y);
    printf("\n");
    printf("Ponteiro de Y = %d",y);
    printf("\n");
    printf("Endereco de Y = %d",&y);
    printf("\n");
}

int main(){
    int a = 10;
    int b = 20;

    printf("Conteudo de A = %d",a);
    printf("\n");
    printf("Endereco de A = %d",&a);
    printf("\n");
    printf("\n");
    printf("Conteudo de B = %d",b);
    printf("\n");
    printf("Endereco de B = %d",&b);
    printf("\n");

    troca(&a, &b);

    return 0;
}
