#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 10;
    int b = 20;
    int c;

    void soma(int x, int y, int *ponteiro){
        *ponteiro = x + y;
    }

    soma(a, b, &c);
    printf("endereco de c = %p\n",&c);
    printf("conteudo de c = %d\n",c);
    printf("conteudo de a = %d\n",a);
    printf("conteudo de b = %d\n",b);
    return 0;
}
