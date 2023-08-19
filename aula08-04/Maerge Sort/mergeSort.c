#include <stdio.h>
#include <stdlib.h>

// Função para impressão do vetor
void impressao(char msg[], int array[], int t) {
    printf("%s", msg);
    for (int i = 0; i < t; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}

// Função para mesclar duas sub-listas ordenadas
void merge(int array[], int esquerda, int meio, int direita) {
int t1 = meio - esquerda + 1;
int t2 = direita - meio;
// Cria vetores temporários para armazenar as sub-listas
int E[t1], D[t2];
    // Copia os elementos para os vetores temporários
    for (int i = 0; i < t1; i++){
        E[i] = array[esquerda + i];
        for (int j = 0; j < t2; j++){
                D[j] = array[meio + 1 + j];

                int i = 0, j = 0, k = esquerda;

                while (i < t1 && j < t2) {
                    if (E[i] <= D[j]) {
                        array[k] = E[i]; // Insere o elemento de E
                        i++;
                    } else {
                        array[k] = D[j]; // Insere o elemento de D
                        j++;
                    }
                    k++;

                    // Copia os elementos restantes de E e D, se houver
                    while (i < t1) {
                        array[k] = E[i];
                        i++;
                        k++;
                    }
                    while (j < t2) {
                        array[k] = D[j];
                        j++;
                        k++;
                    }
                }
            }
        }
    }  

// Função Merge Sort
void mergeSort(int array[], int esquerda, int direita) {
    if (esquerda < direita) {
        int meio = esquerda + (direita - esquerda) / 2;

        // Chama o Merge Sort para as duas metades
        mergeSort(array, esquerda, meio);
        mergeSort(array, meio + 1, direita);

        // Mescla as duas metades ordenadas
        merge(array, esquerda, meio, direita);
    }
}

int main(){
    int array[] = {62, 35, 14, 32, 11};
    int tamanho = sizeof(array)/sizeof(array[0]);

    impressao("Vetor original: ", array, tamanho);
    mergeSort(array, 0, tamanho - 1);
    impressao("Vetor ordenado: ", array, tamanho);

    return 0;
}