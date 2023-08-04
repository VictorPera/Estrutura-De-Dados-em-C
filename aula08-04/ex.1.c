#include <stdio.h>

int main(){

    int A,B,C;

    printf("Digite dois numeros inteiros: ");
    scanf("%d %d", &A,&B);

    C = ((A * B) / 5) * 99;

    printf("C = %d\n", C);

    return;
}