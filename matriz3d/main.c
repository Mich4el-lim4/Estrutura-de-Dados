#include <stdio.h>
#include <stdlib.h>

int main(){
    int quantidadeFatia = 2;
    int quantidadeLinhas = 2;
    int quantidadeColunas = 3;

    int ***matriz3d = (int***) calloc(quantidadeFatia, sizeof(int**));

    //para cada fatia = linhas
    for(int fatia = 0; fatia < quantidadeFatia; fatia ++){
        matriz3d[fatia] = (int**) calloc(quantidadeLinhas, sizeof(int*));

        //para cada linha = colunas
        for (int linha = 0; linha < quantidadeLinhas; linha ++){
            matriz3d[fatia][linha] = (int*) calloc(quantidadeColunas, sizeof(int));
        }
    }

    printf("endereco da matriz 3D = %p\n", &matriz3d);
    printf("conteudo da matriz 3D = %p", matriz3d);
    puts("");
    puts("");
    printf("----------------------------------------------------------------\n");

    int incremento = 0;

    //para cada fatia
    for(int fatia = 0; fatia < quantidadeFatia; fatia ++){

        //puts("");

        //para cada linha
        for (int linha = 0; linha < quantidadeLinhas; linha ++){
            printf("fatia [%d]\n", fatia);
            printf("linha [%d]\n", linha);
            puts("");

            printf("endereco da fatia [%d] = %p, conteudo da fatia [%d] = %p\n",
                   fatia, &matriz3d[fatia], fatia, matriz3d[fatia]);
            printf("endereco da linha [%d] = %p, conteudo da linha [%d] = %p\n",
                    linha, &matriz3d[fatia][linha], linha, matriz3d[fatia][linha]);
            puts("");

            for (int coluna = 0; coluna < quantidadeColunas; coluna ++){
                matriz3d[fatia][linha][coluna] = incremento++;
                printf("endereco da coluna [%d] = %p, conteudo da coluna [%d] = %d\n",
                        coluna, &matriz3d[fatia][linha][coluna], coluna, matriz3d[fatia][linha][coluna]);
            }
            printf("----------------------------------------------------------------\n");
            puts("");
        }
        printf("----------------------------------------------------------------");
        puts("");
    }

    return 0;
}
