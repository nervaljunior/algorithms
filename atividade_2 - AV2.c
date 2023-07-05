#include <stdio.h>
#include <stdlib.h>
#define TAMANHO_PILHA 20

//strutura da pilha
typedef struct {
  int vetor[TAMANHO_PILHA]; // tamanho da pilha
  int topo;
} Pilha;

//declarações
void media();
void mais_elementos();
void empilha();
void desempilha();
void imprimePilha();
void maior_menor_media();
int retorna_remove_topo();
void mais_elementos();


  // q1
int main() {
// DECLARA UMA PILHA
float valortopo;
Pilha P1;
P1.topo = 0; // o topo da pilha deve começar em zero


empilha(10, &P1);
empilha(20, &P1);
empilha(30, &P1);
empilha(40, &P1);

desempilha(&P1);
imprimePilha(&P1);
Pilha P2;
P2.topo = 0; // o topo da pilha deve começar em zero
empilha(55, &P2);
empilha(66, &P2);
imprimePilha(&P2);

maior_menor_media(&P1);

valortopo = retorna_remove_topo(&P1);
printf("o valor do topo era %f\n",valortopo);
printf("o valor removido do topo foi %f\n",valortopo);

mais_elementos(&P1,&P2);

return 0;
}

// prototipo da função empilha
void empilha(int valor, Pilha *P1) {
  // pilha->topo significa: ponteiro "pilha" apontando para CONTEÚDO de um item
  // de uma struct
  if (P1->topo < TAMANHO_PILHA) { // verificando se a pilha não está cheia
    // daí pode empilhar
    P1->vetor[P1->topo] = valor;
    P1->topo++;
    printf("O valor %d foi adicionado \n", valor);
  } else {
    printf("Nao ha mais espaco na pilha, \n");
  };
};    

void desempilha(Pilha *P1) {
  if (P1->topo > 0) {
    P1->topo--; // desempilha
    printf("Elemento retirado: %d. \n", P1->vetor[P1->topo]);
  } else {
    printf("A pilha está vazia. \n"); // pilha vazia
  }
}
void imprimePilha(Pilha *P1) {
  int i;
  printf("\nSegue Impressao da Pilha: \n");
  for (i = ((P1->topo) - 1); i >= 0;
       i--) { // valor inicial de i é a ultima posição da pilha e daí decrementa
    printf("\t %d \n", P1->vetor[i]);
  }
}


// q2
void maior_menor_media(Pilha *P1) {

  float MAIOR, MENOR,media, soma;
  MAIOR=P1->topo;
  int x = 0;
  for (int i = 0; i < P1->topo; i++) {
    soma = soma + P1->vetor[i];
    x = i + x;
  };
  media = soma / x;

  printf("a media aritmetica e %f \n", media);
  for (int i = 0; i < P1->topo; i++) {
    if (MAIOR < P1->vetor[i]) {
      MAIOR = P1->vetor[i];
    }
  };
  printf("o MAIOR É %f \n", MAIOR);
 for (int i = 0; i < P1->topo-2; i++) {
      MENOR = MAIOR;
      if (MENOR > P1->vetor[i]) {
      MENOR = P1->vetor[i];
      }
      if (MENOR < P1->vetor[i]) {
      MENOR = MENOR;
      }
    };
    printf("O MENOR e %f \n", MENOR);
  }


//q3
int retorna_remove_topo(Pilha * P1) {
float x=P1->topo;
desempilha(&P1);
return x;
};

// q4

void mais_elementos(Pilha * P1, Pilha * P2) {
if (P1->topo == P2->topo) {
    printf("a quantidade elementoa são iguais.\n");
} else if (P1->topo < P2->topo) {
    printf("A pilha p2 tem mais elementos.\n");
} else if (P1->topo > P2->topo) {
    printf("A pilha p1 tem mais elementos.\n");
}
};
