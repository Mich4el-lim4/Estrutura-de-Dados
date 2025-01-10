#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 4;
    int b = 3;
    int *p1 = &a;
    int *p2 = p1;

    printf("conteudo de a = %d\n", a);
    printf("endereco de &a = %d\n", &a);
    printf("\n");
    printf("conteudo de b = %d\n", b);
    printf("endereco de &b = %d\n", &b);
    printf("\n");
    printf("*p1 recebe a\n");
    printf("conteudo do *p1 = %d\n", *p1);
    printf("Ponteiro de p1 = %d\n", p1);
    printf("endereco do &p1 = %d\n", &p1);
    printf("\n");
    printf("*p2 recebe p1\n");
    printf("conteudo do *p2 = %d\n", *p2);
    printf("Ponteiro de p2 = %d\n", p2);
    printf("endereco do &p2 = %d\n", &p2);

    *p2 = *p1 + 3;
    printf("\n");
    printf("REATRIBUINDO - 1 **********************************\n");
    printf("\n");
    printf("*p2 = *p1 + 3;\n");
    printf("\n");
    printf("conteudo de a = %d\n", a);
    printf("endereco de &a = %d\n", &a);
    printf("\n");
    printf("conteudo de b = %d\n", b);
    printf("endereco de &b = %d\n", &b);
    printf("\n");
    printf("conteudo do *p1 = %d\n", *p1);
    printf("Ponteiro de p1 = %d\n", p1);
    printf("\n");
    printf("conteudo do *p2 = %d\n", *p2);
    printf("referencia de memoria do p2 = %d\n", p2);
    printf("\n");

    b = b* (*p1);
    (*p2)++;
    p1 = &b;
    printf("\n");
    printf("REATRIBUINDO - 2 **********************************\n");
    printf("\n");
    printf("b = b * (*p1);\n");
    printf("\n");
    printf("conteudo de b = %d\n", b);
    printf("endereco de &b = %d\n", &b);
    printf("\n");
    printf("(*p2)++;\n");
    printf("conteudo do *p2 = %d\n", *p2);
    printf("\n");
    printf("conteudo de a = %d\n", a);
    printf("endereco de a = %d\n", &a);
    printf("\n");
    printf("p1 = &b;\n", p1);
    printf("conteudo do *p1 = %d\n", *p1);
    printf("Ponteiro de p1 = %d\n", p1);
    printf("\n");
    printf("conteudo do *p2 = %d\n", *p2);
    printf("Ponteiro de p2 = %d\n", p2);

    return 0;
}
