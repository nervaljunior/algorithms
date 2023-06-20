#include <stdio.h>
#include <stdlib.h>

typedef struct No {
  int valor;
  struct No* proximo;
} No;

No* pilha = NULL;

void push(int valor){
  No* novo = (No*)malloc(sizeof(No));
  novo->valor = valor;
  novo->proximo = pilha;
  pilha = novo;
}

int pop() {
  if (pilha != NULL) {
    int pop = pilha->valor;
    No* temp = pilha;
    pilha = pilha->proximo;
    free(temp);
    return pop;
  }
}

void printPilha() {
  while (pilha != NULL) {
    printf("%d ", pilha->valor);
    pilha = pilha->proximo;
  }
  printf("\n");
}

int main(void) {
  push(10);
  push(20);
  push(30);
  push(40);

  pop();
  pop();
  pop();

  printPilha();
  return 0;
}