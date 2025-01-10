#include <stdio.h>
#include <stdlib.h>

int main() {
    int index, quantidade = 5;
    int *vetor;
    vetor = (int*) malloc(quantidade * sizeof(int));

    for (index = 0; index < 5; index ++) {
        vetor[index] = index;
    }

    return 0;
}
