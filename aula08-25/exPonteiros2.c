#include <stdio.h>

int main() {
  int nros[5] = {9, 18, 27, 36, 45};
  int *p = nros; // O ponteiro p aponta para o primeiro elemento de nros

  for (int i = 0; i < 5; i++) {
    printf("Elemento %d: %d \n", i, *p);
    p++; // Avança o ponteiro para o próximo elemento
  }

  return 0;
}