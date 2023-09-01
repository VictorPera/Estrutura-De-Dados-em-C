#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void insertionSort(int arr[], int n){
    int i, key, j;
    for (i = 1; i < n; i++){
        key = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] > key){
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

int main(){
    // Inicialize o gerador de números aleatórios com base no tempo
    srand(time(NULL));

    int aposta[6]; // Aposta inicial
    int i, j;

    // Gere uma aposta inicial com 6 números entre 1 e 60
    printf("Aposta inicial: ");
    for (i = 0; i < 6; i++){
        aposta[i] = rand() % 60 + 1;
        printf("%d ", aposta[i]);
    }

    printf("\n\n");

    // Realize 10 concursos
    for (i = 0; i < 10; i++){
        int concurso[6]; // Sequência para o concurso atual

        // Gere uma sequência aleatória para o concurso
        for (j = 0; j < 6; j++){
            concurso[j] = rand() % 60 + 1;
        }

        // Ordene a sequência do concurso em ordem crescente
        insertionSort(concurso, 6);

        // Imprima a sequência do concurso
        printf("Concurso %d: ", i + 1);
        for (j = 0; j < 6; j++){
            printf("%d ", concurso[j]);
        }

        // Verifique a quantidade de acertos com a aposta inicial
        int acertos = 0;
        for (j = 0; j < 6; j++){
            for (int k = 0; k < 6; k++){
                if (concurso[j] == aposta[k]){
                    acertos++;
                    break;
                }
            }
        }

        printf("- Acertos: %d\n", acertos);
    }

    return 0;
}
