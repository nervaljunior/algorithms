/*Fila dinamica funcional*/
#include <stdio.h>
#include <stdlib.h>

typedef struct No{
  int valor;
  struct No* proximo;
} No;

No* inserir(No* no, int valor) {
  if (no == NULL) {
    No* novo = (No*)malloc(sizeof(No));
    novo->valor = valor;
    novo->proximo = NULL;
    return novo;
  } else {
    no->proximo = inserir(no->proximo, valor);
    return no;
  }
}

No* remover(No* no) {
  if (no == NULL) {
    return NULL;
  } else {
    No* temp = no;
    no = no->proximo;
    free(temp);
    return no;
  }
}

int main(void) {
  No* fila = NULL;

  fila = inserir(fila, 10);
  inserir(fila, 20);
  inserir(fila, 30);
  inserir(fila, 40);
  fila = remover(fila);
  while (fila != NULL) {
    printf("%d\n", fila->valor);
    fila = fila->proximo;
  }
  return 0;
}