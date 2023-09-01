#include <stdio.h>

// Função para impressão do vetor
void impressao(char msg[], int array[], int t) {
    printf("%s", msg);
    for (int i = 0; i < t; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}

int main(){

    int array[] = {62, 35, 14, 32, 11};
    int tamanho = sizeof(array)/sizeof(array[0]);

    impressao("Vetor original: ", array, tamanho);
    mergeSort(array, 0, tamanho - 1);
    impressao("Vetor ordenado: ", array, tamanho);

    return 0;
}