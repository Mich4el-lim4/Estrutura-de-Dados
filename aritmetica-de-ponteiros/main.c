#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vetor[5] = {10, 5, 4, 16, 1};

    printf("&vetor = %p, vetor = %p\n\n", &vetor, vetor);

    for (int indice = 0; indice < 5; indice ++){
        printf("&vetor[%d] = %p, vetor[%d] = %d\n", indice, &vetor[indice], indice, vetor[indice]);
        printf("(vetor + %d) = %p, *(vetor + %d) = %d\n\n", indice, (vetor + indice), indice, *(vetor + indice));
    }

    return 0;
}
