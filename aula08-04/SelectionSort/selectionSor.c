#include <stdio.h>

void swap(int arr[], int i, int j) {
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

void selectionSort(int arr[], int n) {
    int i, j, min_idx;

    // Um por um, movendo a fronteira do subarray não ordenado
    for (i = 0; i < n - 1; i++) {
        // Encontrar o elemento mínimo no array não ordenado
        min_idx = i;
        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }

        // Trocar o elemento mínimo encontrado com o primeiro elemento do subarray
        if (min_idx != i) {
            swap(arr, min_idx, i);
        }
    }
}

/* Função para imprimir um array */
void printArray(int arr[], int size) {
    int i;
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// Programa principal para testar as funções acima
int main() {
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr) / sizeof(arr[0]);

    selectionSort(arr, n);

    printf("Sorted array: \n");
    printArray(arr, n);

    return 0;
}
