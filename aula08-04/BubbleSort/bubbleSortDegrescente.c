#include <stdio.h>

void BubbleSort(int vetor[], int tamanho, int ordem);

int main() {
    int tamanho;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);

    int vetorCrescente[tamanho];
    int vetorDecrescente[tamanho];

    printf("Digite os elementos do vetor: ");
    for (int i = 0; i < tamanho; i++) {
        scanf("%d", &vetorCrescente[i]);
        vetorDecrescente[i] = vetorCrescente[i];
    }

    BubbleSort(vetorCrescente, tamanho, 1);
    BubbleSort(vetorDecrescente, tamanho, 0);

    printf("\nVetor ordenado em ordem crescente: ");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", vetorCrescente[i]);
    }

    printf("\nVetor ordenado em ordem decrescente: ");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", vetorDecrescente[i]);
    }

    return 0;
}

void BubbleSort(int vetor[], int tamanho, int ordem) {
    int aux, i, j;
    for (j = tamanho - 1; j >= 1; j--) {
        for (i = 0; i < j; i++) {
            if ((ordem == 1 && vetor[i] > vetor[i + 1]) || (ordem == 0 && vetor[i] < vetor[i + 1])) {
                aux = vetor[i];
                vetor[i] = vetor[i + 1];
                vetor[i + 1] = aux;
            }
        }
    }
}
