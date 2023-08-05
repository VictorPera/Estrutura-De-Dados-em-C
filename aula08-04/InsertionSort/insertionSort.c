#include <stdio.h>

void insertionSort(int vetor[], int n) {
    int k, j, aux;

    for (k = 1; k < n; k++) {
        printf("\n[%d] ", k);

        aux = vetor[k];
        j = k - 1;

        while (j >= 0 && aux < vetor[j]) {
            printf("%d, ", j);

            vetor[j + 1] = vetor[j];
            j--;
        }

        vetor[j + 1] = aux;
    }
}

int main() {
    int n;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);

    int vetor[n];

    printf("Digite os elementos do vetor: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &vetor[i]);
    }

    insertionSort(vetor, n);

    printf("\nVetor ordenado: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", vetor[i]);
    }

    return 0;
}
