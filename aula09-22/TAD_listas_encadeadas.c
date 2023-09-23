#include <stdio.h>
#include <stdlib.h>

// Definição do Tipo Abstrato de Dados (TAD) e dos Protótipos das funções do TAD
typedef struct lista Lista;
Lista* inserirNoInicio(Lista *inicio, int valor);
Lista* removerNaLista(Lista *inicio, int valor);
void imprimirLista(Lista *inicio);
void liberarLista(Lista *inicio);

// Definição da estrutura de uma lista
struct lista {
  int nro;
  struct lista *proximo;
};

// Remove um elemento da lista
Lista* removerNaLista(Lista *inicio, int valor) {
  Lista *anterior = NULL; // ponteiro para o elemento anterior
  Lista *p = inicio;      // ponteiro para percorrer a lista

  // Procura o elemento na lista, armazenando o anterior
  while (p != NULL && p->nro != valor) {
    anterior = p;
    p = p->proximo;
  }

  // Verifica se encontrou o elemento
  if (p == NULL) {
    return inicio; // Não encontrou. Retorna a lista original
  }

  // Remove o elemento
  if (anterior == NULL) {
    inicio = p->proximo;  // Retira o elemento do início da lista
  } else {
    anterior->proximo = p->proximo;  // Retira o elemento do meio da lista
  }

  free(p);

  return inicio;
}

// Imprime os elementos da lista
void imprimirLista(Lista *inicio) {
  Lista *atual = inicio;
  while (atual != NULL) {
    printf("%d -> ", atual->nro);
    atual = atual->proximo;
  }
  printf("NULL \n");
}

// Libera a memória alocada pela lista
void liberarLista(Lista *inicio) {
  while (inicio != NULL) {
    Lista *aux = inicio;
    inicio = inicio->proximo;
    free(aux);
  }
}

int main() {
  Lista *minhalista = NULL;

  minhalista = inserirNoInicio(minhalista, 10);
  minhalista = inserirNoInicio(minhalista, 20);
  minhalista = inserirNoInicio(minhalista, 30);

  printf("Lista Encadeada: ");
  imprimirLista(minhalista);

  minhalista = removerNaLista(minhalista, 30);
  printf("Lista após a remoção do elemento 30: ");
  imprimirLista(minhalista);

  minhalista = removerNaLista(minhalista, 10);
  printf("Lista após a remoção do elemento 10: ");
  imprimirLista(minhalista);

  liberarLista(minhalista);

  return 0;
}