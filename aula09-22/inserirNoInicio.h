// Implementação das funções do TAD Lista
// Insere um elemento no início da lista
Lista* inserirNoInicio(Lista *inicio, int valor) {
  Lista *novoElemento = (Lista*) malloc(sizeof(Lista));
  if (novoElemento == NULL) {
      printf("Falha na alocação de memória! \n");
      exit(1);
  }    
  novoElemento->nro = valor;
  novoElemento->proximo = inicio;
  return novoElemento;
}