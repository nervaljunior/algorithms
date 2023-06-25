#include <stdio.h>

int push(int vetor[], int valor, int* topo, int tamanho) {
  (*topo)++;
  if (*topo < tamanho) {
    vetor[*topo] = valor;
    return 1;
  } else {
    return 0;
  }
    
}

int pop(int* vetor, int* topo) {
  int vetor_topo = *topo;
  (*topo)--;
  if (*topo > -1)
    return vetor[vetor_topo];
}


void menu(int* vetor, int* topo) {
  int opcao = -1, valor;

  while(opcao != 0) {
    printf("1 - ADICIONAR\n2 - REMOVER\n3 - SAIR\nOPCAO: ");
    scanf("%d", &opcao);
    switch(opcao) {
      case 1:
        printf("Informe o valolr que deseja adicionar: ");
        scanf("%d", &valor);
        push(vetor, valor, topo, 5);
        break;
      case 2:
        valor = pop(vetor, topo);
        printf("%d removido\n", valor);
        break;
      case 3:
        break;
      default:
        printf("Opcao invalida\n");
    }
  }

}
int main(void) {
  int pilha[5], topo = -1;

  /*push(pilha, 30, &topo);
  push(pilha, 25, &topo);
  int r = pop(pilha, &topo);
  int s = pop(pilha, &topo);
  printf("%d\n", s);*/

  menu(pilha, &topo);
  return 0;
}