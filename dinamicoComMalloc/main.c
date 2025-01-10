#include <stdio.h>
#include <stdlib.h>

int main(){
    puts("vetor dinamico com malloc\n");
    int *vetorHeapMalloc = (int *) malloc(5 * sizeof(int));

    printf("&vetorHeapMalloc = %p vetorHeapMalloc = %p\n", &vetorHeapMalloc, vetorHeapMalloc);
    puts("");

    for (int index = 0; index < 5; index ++){
        printf("&vetorHeapMalloc[%d] = %p, vetorHeapMalloc[%d] = %d\n", index, &vetorHeapMalloc[index], index, vetorHeapMalloc[index]);
    }

    return 0;
}
