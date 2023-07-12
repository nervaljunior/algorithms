#include <stdio.h>
#include <stdlib.h>
#define TAMANHO_PILHA 20

//strutura da pilha
typedef struct {
  int vetor[TAMANHO_PILHA]; // tamanho da pilha
  int topo;
} Pilha;


void mais_elementos();
void empilha();
void desempilha();
void imprimePilha();
void sair();


  // q1
int main() {
// DECLARA UMA PILHA
Pilha P1;
P1.topo = 0; // o topo da pilha deve começar em zero

// código sitch case com caracteres
char opcao;

printf("a - solicita um numero a ser adicionado à pilha\nr - remove um elemento da pilha\ns - exibe os elementos da pilha\nt - exibe o numero de elements\nx - Sair\n");

 
while(1){
printf("\nescolha uma opção\n");
scanf("%c", &opcao);
 
switch(opcao){
case 'a':
  printf("digite um numero para ser adicionado à pilha\n");
  int x;
  scanf("%d",&x);
  empilha(x, &P1);
 
  break;
case 'r':
  desempilha(&P1);
 
  break;
case 's':
  imprimePilha(&P1);
 
  break;
case 't':
 
    printf("a pilha tem %d elementos",P1.topo);
     
 
  break;
case 'x':
  sair();
 
  break;
default: ;
 
}

}
return 0;
}
void sair(){
  printf("programa encerrado");
  system("EXIT");
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