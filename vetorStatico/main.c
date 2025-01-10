#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vetor[5] = {0, 1, 2, 3, 4};

    for (int indice = 0; indice < 5; indice ++) {
        printf("&enderecoVetor[%d] = %p, conteudoVetor[%d] = %d\n", indice, &vetor[indice], indice, vetor[indice]);
    }
    puts("");
    printf("&enderecoVetor[6] = %p, conteudoVetor[6] = %d\n", &vetor[6], vetor[6]);

    return 0;
}
