#include <stdio.h>
#include <stdlib.h>

int main(){
    int numeroLinhas = 2;
    int numeroColunas = 3;

    int **minhaMatriz = (int **) calloc(numeroLinhas, sizeof(int *));

    for (int indiceLinha = 0; indiceLinha < numeroLinhas; indiceLinha ++){
        minhaMatriz[indiceLinha] = (int*) calloc(numeroColunas, sizeof(int));
    }

    int count = 0;
    printf("&minhaMatriz = %p, minhaMatriz = %p\n\n", &minhaMatriz, minhaMatriz);

    for (int indiceLinha = 0; indiceLinha < numeroLinhas; indiceLinha ++){
        printf("&minhaMatriz[%d] = %p, minhaMatriz[%d] = %p\n",
               indiceLinha, &minhaMatriz[indiceLinha],
               indiceLinha, minhaMatriz[indiceLinha]);
        puts("");

        for (int indiceColuna = 0; indiceColuna < numeroColunas; indiceColuna ++){
            minhaMatriz[indiceLinha][indiceColuna] = count ++;

            printf("&minhaMatriz[%d][%d] = %p, minhaMatriz[%d][%d] = %d\n",
                    indiceLinha, indiceColuna, &minhaMatriz[indiceLinha][indiceColuna],
                    indiceLinha, indiceColuna, minhaMatriz[indiceLinha][indiceColuna]);
        }
        puts("");
    }

    return 0;
}
