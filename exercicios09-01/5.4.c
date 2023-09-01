#include <stdio.h>

int tamanhoString(const char *str);

int main(){
    const char minhaString[] = "Hello, World!";

    int tamanho = tamanhoString(minhaString);

    printf("O tamanho da string é: %d\n", tamanho);

    return 0;
}

int tamanhoString(const char *str){
    const char *ptr = str;

    while (*ptr != '\0')
    {
        ptr++;
    }

    return ptr - str;
}
