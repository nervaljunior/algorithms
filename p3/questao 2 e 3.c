#include <stdio.h>
#include <stdlib.h>
//questao 2
void adiciona();
void retira();
int isVazia();
int isCheia();
void imprimir();
//questao 3
void maior();
void menor();
void media();

typedef struct no{

int valor;
struct no* prox;
}no;

typedef no fila;


void adiciona(int numero,fila** p){


fila* novo = (fila*)malloc(sizeof(fila));

if(*p == NULL && isCheia(*p)!=1){ 
*p = novo;
(*p)->valor = numero;
(*p)->prox = NULL;

}

else{ 

fila* percorre;

percorre = *p;


while(percorre->prox != NULL ){

percorre = percorre -> prox;
}

percorre -> prox = novo;
novo -> valor = numero;
novo -> prox = NULL;

//se tiver cheia deve retornar

}

}


void retira(fila** p){
fila* excluido;
excluido = *p;

if(*p == NULL) {printf("A Fila está vazia\n");}
else{
*p = (*p)->prox;
free(excluido);

}
}

int isCheia(fila* p) {
    int contador = 0;
    fila* percorre = p;
    
    while (percorre != NULL) {
        contador++;
        percorre = percorre->prox;
    }
    
printf("%d",contador);
    if (contador >= 20){
    return 1;}
    else{
    return 0;
    }
}


int isVazia(fila **p) {
    if (*p == NULL) {
        return 1; 
    } else {
        return 0; 
    }
}


//questao 3
void maior(fila* p) {
    if (p == NULL) {
        printf("A Fila está vazia\n");
    } else {
        int maiorValor = p->valor;
        fila* percorre = p->prox;
        while (percorre != NULL) {
            if (percorre->valor > maiorValor) {
                maiorValor = percorre->valor;
            }
            percorre = percorre->prox;
        }
        printf("O maior valor da fila é: %d\n", maiorValor);
    }
}
void menor(fila* p) {
    if (p == NULL) {
        printf("A Fila está vazia\n");
    } else {
        int menorValor = p->valor;
        fila* percorre = p->prox;
        while (percorre != NULL) {
            if (percorre->valor < menorValor) {
                menorValor = percorre->valor;
            }
            percorre = percorre->prox;
        }
        printf("O menor valor da fila é: %d\n", menorValor);
    }
}
void media(fila* p) {
    if (p == NULL) {
        printf("A Fila está vazia\n");
    } else {
        int soma = 0;
        int contador = 0;
        fila* percorre = p;
        while (percorre != NULL) {
            soma += percorre->valor;
            contador++;
            percorre = percorre->prox;
        }
        float media = (float)soma / contador;
        printf("A média dos valores da fila é: %.2f\n", media);
    }
}

void imprimir(fila* p){

fila* percorre;

percorre = p;


while(percorre != NULL){

printf("Elemento: %d \n", percorre->valor);

percorre = percorre -> prox;

}

}

int main(){

int opcao,elemento;

fila* p =NULL;

while(opcao != 0){

system("clear");
printf("################### FILA #################\n");
printf("Aluno: Nerval de jesus santos junior\n");
printf("Matéria: Algoritmos\n");

printf("\n");
printf("0 - Sair\n");
printf("1 - Enfilar\n");
printf("2 - Desenfilar\n");
printf("3 - se Fila vazia\n");
printf("4 - se Fila cheia\n");
printf("5 - MAIOR\n");
printf("6 - MENOR\n");
printf("7 - MEDIA\n");
printf("8 - ver fila\n");
  

scanf("%d", &opcao);


switch(opcao){

case 1: 
  
if (isCheia(p)) {
        printf(" elementos\nA fila está cheia. Não é possível adicionar mais elementos.\n");
    }
else{

printf(" elementos\nColoque o elemento que você deseja enfilar\n");
scanf("%d", &elemento);

adiciona(elemento,&p);}  


printf("Imprimindo a fila após ser enfileirada com o novo elemento\n");

imprimir(p);

getchar();
getchar();

break;

case 2: 

printf("Vamos retira\n");

retira(&p);

printf("Imprimindo a fila após ser desenfileirada\n");

imprimir(p);

getchar();
getchar();

break;

case 3: 
printf("\n");

 if(isVazia(&p)==0) {
  printf("a fila nao ta vazia");
}else{
  printf("a fila ta vazia");
}
getchar();
getchar();

break;


case 4:
    printf("\n");
    if (isCheia(p) == 0) {
        printf(" elementos \nA fila não está cheia\n");
    } else {
        printf(" elementos \nA fila está cheia\n");
    }
    getchar();
    getchar();
    break;

  
case 5:
    printf("Encontrando o maior valor da fila\n");
    maior(p);
    getchar();
    getchar();
    break;


case 6:
    printf("Encontrando o menor valor da fila\n");
    menor(p);
    getchar();
    getchar();
    break;


case 7:
    printf("Calculando a média dos valores da fila\n");
    media(p);
    getchar();
    getchar();
    break;
case 8:
    
    imprimir(p);
  
    getchar();
    getchar();
    break;

}

}

}