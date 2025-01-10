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
    puts("VETOR ESTATICO");
    int vetor[5] = {0, 10, 20, 30, 40};

    print_vetor(vetor, 5);
    somar_vetor(vetor, 5, 9);
    print_vetor(vetor, 5);

    return 0;
}
