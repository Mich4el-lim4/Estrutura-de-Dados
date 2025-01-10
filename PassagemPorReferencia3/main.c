#include <stdio.h>
#include <stdlib.h>

int somaEsub(int x, int y, int *sub){
    int soma = x + y;
    *sub = x - y;

    printf("\n");
    puts("Dentro da funcao________________");
    printf("\n");
    printf("Valor de X = %d\n", x);
    printf("Endereco de X = %d\n", &x);
    printf("\n");
    printf("Valor de Y = %d\n", y);
    printf("Endereco de Y = %d\n", &y);
    printf("\n");
    printf("Valor de Soma = %d\n", soma);
    printf("Endereco de Soma = %d\n", &soma);
    printf("\n");
    printf("Valor de *sub = %d\n", *sub);
    printf("Ponteiro de sub = %d\n", sub);
    printf("Endereco de &sub = %d\n", &sub);
    printf("\n");

    return soma;
}

int main()
{
    int a = 10;
    int b = 20;
    int c;
    int soma;

    puts("");
    printf("Valor de A = %d\n", a);
    printf("Endereco de A = %d\n", &a);
    printf("\n");
    printf("Valor de B = %d\n", b);
    printf("Endereco de B = %d\n", &b);
    printf("\n");
    printf("Valor de C = %d\n", c);
    printf("Endereco de C = %d\n", &c);

    soma = somaEsub(a, b, &c);

    printf("\n");
    puts("Ddepois da funcao________________");
    printf("\n");
    printf("Valor de C = %d\n", c);
    printf("\n");
    printf("Valor de soma = %d\n", soma);

    return 0;
}
