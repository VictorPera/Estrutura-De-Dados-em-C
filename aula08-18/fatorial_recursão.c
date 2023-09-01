#include <stdio.h>

unsigned long fatorialRecursivo(int n) {
    if (n == 0 || n == 1) {
        return 1; // Caso base: fatorial de 0 ou 1 é 1
    }
    return n * fatorialRecursivo(n - 1); // Caso recursivo
}

int main() {
    int nro;

    printf("Digite um número inteiro não negativo: ");
    scanf("%d", &nro);
 
    unsigned long resultado = fatorialRecursivo(nro);
 
    printf("O fatorial de %d é: %lu \n", nro, resultado);
 
    return 0;   
}