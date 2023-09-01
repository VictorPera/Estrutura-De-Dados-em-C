#include <stdio.h>

int somaElementos(int *array, int tamanho);

int main(){
    int meuArray[] = {1, 2, 3, 4, 5};
    int tamanho = sizeof(meuArray) / sizeof(meuArray[0]);

    int resultado = somaElementos(meuArray, tamanho);

    printf("A soma dos elementos do array é: %d\n", resultado);

    return 0;
}

int somaElementos(int *array, int tamanho){
    int soma = 0;

    for (int i = 0; i < tamanho; i++)
    {
        soma += *(array + i);
    }

    return soma;
}