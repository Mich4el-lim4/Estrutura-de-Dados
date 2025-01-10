#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 10;
    int b = 20;
    int c;

    printf("&a = %p, a = %d\n", &a, a);
    printf("&b = %p, b = %d\n", &b, b);
    printf("&c = %p, c = %d\n", &c, c);

    int soma(int x, int y){
        int z = x + y;
        printf("Inicio da func\n");
        printf("&x = %p, x = %d\n", &x, x);
        printf("&y = %p, y = %d\n", &y, y);
        printf("&z = %p, z = %d\n", &z, z);
        printf("fim da func\n");
        return z;
    }

    c = soma(a, b);
    printf("&c = %p, c = %d\n", &c, c);

    return 0;
}
