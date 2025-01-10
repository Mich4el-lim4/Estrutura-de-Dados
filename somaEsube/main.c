#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 10;
    int b = 20;
    int c;
    int d;

    void somaEsub(int a, int b, int *y, int *x){
        *y = a - b;
        *x = a + b;
    }

    printf("conteudo de a: %d\n", a);
    printf("endereco de a: %p\n", &a);
    printf("\n");
    printf("conteudo de b: %d\n", b);
    printf("endereco de b: %p\n", &b);
    printf("\n");
    printf("conteudo de c: %d\n", c);
    printf("endereco de c: %p\n", &c);
    printf("\n");
    printf("conteudo de d: %d\n", d);
    printf("endereco de d: %p\n", &d);
    printf("\n");

    somaEsub(a, b, &c, &d);

    printf("alterando os valores por referencia\n");
    printf("conteudo de c: %d\n", c);
    printf("conteudo de d: %d\n", d);

    return 0;
}
