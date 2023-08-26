#include <stdio.h>

int main(){

    int *p, x = 30;

    printf("Valor de X: %d\n", x);

    p = &x;
    *p = 60;

    printf("Novo valor de X: %d\n", *p);

    return 0;
}