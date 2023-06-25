/*Implementação de lista dinâmica*/
#include <stdio.h>
#include <stdlib.h>

typedef struct No{
  int valor;
  struct No* proximo;
} No;

No* adicionar(No* no, int valor) {
  if (no == NULL) {
    No* novo = (No*)malloc(sizeof(No));
    novo->valor = valor;
    novo->proximo = NULL;
    return novo;
  } else {
    no->proximo = adicionar(no->proximo, valor);
    return no;
  }
}

No* remover(No* no, int valor) {
  if (no == NULL) {
    return NULL;
  } else {
    if (no->valor == valor) {
      No* temp = no;
      free(no);
      return temp->proximo;
    } else {
      no->proximo = remover(no->proximo, valor);
      return no;
    }
  }
}

void imprimir(No* lista) {
  while(lista != NULL) {
    printf("%d\n", lista->valor);
    lista = lista->proximo;
  }
}
int main(void) {
  No* lista = NULL;
  lista = adicionar(lista, 10);
  adicionar(lista, 20);
  adicionar(lista, 30);
  adicionar(lista, 40);
  adicionar(lista, 50);
  adicionar(lista, 60);
  adicionar(lista, 70);
  adicionar(lista, 80);
  adicionar(lista, 90);
  adicionar(lista, 100);

  lista = remover(lista, 40);
  adicionar(lista, 200);
  
  imprimir(lista);
  return 0;
}