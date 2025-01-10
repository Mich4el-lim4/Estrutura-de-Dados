#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 10;
    int b = 20;
    int c;

    int soma(int x, int y, int *ponteiro){
        return *ponteiro = x + y;
        printf("%d \n",ponteiro);
    }

    soma(a, b, &c);
    printf("endereco de c = %p\n",&c);
    printf("conteudo de c = %p\n",c);
    printf("vlor de a = %d\n",a);
    printf("valor de b = %d\n",b);

    return 0;
}
