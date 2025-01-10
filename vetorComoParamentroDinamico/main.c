#include <stdio.h>
#include <stdlib.h>

void somar_vetor(int meuVetor[], int tamanho, int incremento){
    for(int indice = 0; indice < tamanho; indice ++){
        meuVetor[indice] += incremento;
    }
}

void print_vetor(int *meuVetor, int tamanho){
    for(int indice = 0; indice < tamanho; indice ++){
        printf("&meuVetor[%d] = %p, meuVetor[%d] = %d\n", indice, &meuVetor[indice], indice, meuVetor[indice]);
    }
    puts("");
}

int main(){
    puts("VETOR DINAMICO");
    int *vetor = (int*) calloc(5, sizeof(int));
    for(int index = 0; index < 5; index ++){
        vetor[index] = index * 100;
    }

    print_vetor(vetor, 5);
    somar_vetor(vetor, 5, 9);
    print_vetor(vetor, 5);

    free(vetor);

    return 0;
}
