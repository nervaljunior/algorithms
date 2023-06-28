#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>

#define TAMANHO_PILHA 20
typedef struct{
int vetor[TAMANHO_PILHA]; //tamanho da pilha
int topo;
}Pilha;

void sair();

void menu();

void quest1();
void quest2();
void quest3();
void quest4();
void quest5();
void quest6();
void quest7();
void quest8();
void quest9();
void quest10();


void main(){
  
  printf("\tolA, caro professor!! meu nome E Nerval junior\n");
  printf("\t\t\t\tmatricula:2021018510\n");
  printf("aperte <ENTER> para comecar a navegar no MENU de questoes\n");
  scanf("[\n]");
  menu();   
}
void sair(){
  printf("programa encerrado");
  system("EXIT");
}

void menu(){
printf("\n\n\t\t\t\t\t>>>>>>>>>>>MENU <<<<<<<<<<\n\n");
printf("\n\n\t\t\t essa atividade avaliativa 2\n\n");


int questao;
printf("\nescolha a questao que vc deseja digitando o numero:\n\t0-PARA FECHAR O PROGRAMA\n\t1-questao 1\n\t2-questao 2\n\t3-questao 3\n\t4-questao 4\n\t5-questao 5\n\t6-questao 6\n\t7-questao 7\n\t8-questao 8\n\t9-questao 9\n\t10-questao 10\n \n\t>>>");
scanf("%d",&questao);
switch(questao){
  
case 1: quest1();

case 2: quest2();

case 3: quest3();

case 4: quest4();

case 5: quest5();

case 6: quest6();

case 7: quest7();

case 8: quest8();

case 9: quest9();

case 10: quest10();

default: sair();
}

}

void quest1()
{ 
 
printf("\n\t\t\t\t\t>>>>>>>>>>>questao 1<<<<<<<<<<\n\n");
printf("\nI - Considerando um vetor (char vet[10];), um ponteiro para o vetor (char *p;) e dado por p=&vet[0];.\n");
printf("\nII - Uma string e uma cadeia de caracteres com um terminador ( barra invertida(/) 0).\n"),
printf("\nIII - Considerando um vetor (char vet[10];), um ponteiro para o vetor (char *p;) e dado por p=vet;\n");
printf("\nresposta: \nletra C\n");
// estou entre letra A i, ii, iii estao corretas, e letra c i, ii apenas

menu();}


void quest2()
{
  printf("\n\t\t\t\t\t>>>>>>>>>>>questao 2<<<<<<<<<<\n\n");
  printf("resposta: \na biblioteca necessaria para usar as funcoes malloc() e free(). letra b) <stdlib.h>.\n");
    

menu();
};

void quest3()
{
  printf("\n\t\t\t\t\t>>>>>>>>>>>questao 3<<<<<<<<<<\n\n");
  printf(" \nreposta: \nI - Novos elementos entram, no conjunto, exclusivamente, no topo da pilha. \nII - O unico elemento que pode sair da pilha em um dado momento, e o elemento do topo. \nIII - as Pilhas sao conhecidas como LIFO (last in, first out), isto e, o ultimo a entrar e o ultimo a sair. \n senteNça I e II estao corretas, A tericeira sentença ta erradada (o ultimo a entrar e o ultimo a sair), deveria ser primeiro a sair \n");

menu();	
}


void quest4(){

printf("\n\t\t\t\t\t>>>>>>>>>>>questao 4<<<<<<<<<<\n\n");
/*Supoe-se que as posicoes (enderecos) de memoria ocupadas pelas variaveis iVar, jVar, pPont e qPont sejam 
respectivamente 3080, 3084, 3088 e 3096. Responda:
a) Qual sera o valor que a pPont assume?  ENDEREcO DE IVAR
b) O que de fato ocorre, ou seja, qual sera o valor que *pPont assume? 15
c) Qual sera o valor de jVar depois da atribuicao. Por quê? 30
d) Qual sera o valor de qPont depois da atribuicao. Por quê? 2 enderecos de memoria a mais
*/
int iVar=15;
int jVar,*pPont,*qPont;
pPont =&iVar;
jVar=2*(*pPont);
qPont=2+(pPont);

printf("\nA) O valor que a variavel pPont assume e o endereco de memoria da variavel iVar, que e 3080.\n");
printf("\nB) O valor que *pPont assume e o conteudo da memoria apontada por pPont, ou seja, o valor da variavel iVar, que e 15.\n");
printf("\nC) Apos a atribuicao jVar = 2 * (*pPont), o valor de jVar sera 30. Isso ocorre porque *pPont contem o valor de iVar (que e 15), e multiplicar esse valor por 2 resulta em 30.\n");
printf("\nd) Apos a atribuicao qPont = 2 + (pPont), o valor de qPont sera o endereco de memoria apontado por pPont, somado a 2. Nesse caso, se pPoint ta no endereco 3088 qPont tera o valor 3096. Isso ocorre porque o tipo de pPont e um ponteiro para inteiro, e somar 2 a um ponteiro desloca a posicao de memoria em bytes, e nao em elementos. Como um inteiro ocupa 4 bytes em muitas plataformas, somar 2 ao endereco de iVar resulta em um deslocamento de 8 bytes (2 * 4), o que corresponde a dois enderecos de memoria à frente.*/\n");


menu();
};


void quest5()
{ 

  printf("\n\t\t\t\t\t>>>>>>>>>>>questao 5<<<<<<<<<<\n\n");
  printf("qual sera a saida deste programa, supondo que i ocupa o endereco 2048 na memoria?\n");

int i= 5, *p;
p=&i;
printf("%p-%d-%d\n",p,*p+2,3*(*p));

printf("2048 - 7 - 15") ;

menu();
};

void quest6(){ 

    printf("\n\t\t\t\t\t>>>>>>>>>>>questao 6<<<<<<<<<<\n\n");

/*Considerando que p seja uma pilha de 4 posicoes. Qual sera o estado final da pilha apos estas operacoes?
p= cria_pilha()

empilha(p,15)
empilha(p,25)
empilha(p,30)
desempilha(p)
empilha(p,50)
desempilha(p)
empilha(p,40)
*/
printf("primeiro e feito a funcao de criacao da pilha");
printf("\ntopo\n|__|\n");
printf("empilhasse 3 numeros: 15,25 e 30");
printf("\ntopo\n|30|\n|25|\n|15|\n|__|\n");
printf("desempilha o ultimo numero que foi adicionado, sobrando: 25,15 ");
printf("\ntopo\n|25|\n|15|\n|__|\n");
printf("depois empilhasse o numero 50, ficando ");
printf("\ntopo\n|50|\n|25|\n|15|\n|__|\n");
printf("desempilha o ultimo numero que foi adicionado, sobrando: 25,15 ");
printf("\ntopo\n|25|\n|15|\n|__|\n");
printf("empilhasse o numero 40");
printf("\ntopo\n|40|\n|25|\n|15|\n|__|\n");




menu();
};

void quest7(){ 

  printf("\n\t\t\t\t\t>>>>>>>>>>>questao 7<<<<<<<<<<\n\n");

printf("Com base no codigo apresentado na pagina A SEGUIR (que apresenta uma Pilha de 20 elementos do tipo inteiro utilizando struct, bem como 3 funcoes: empilha, desempilha e imprimePilha), responda: ");

/*7. Desenvolva uma operacao para transferir elementos de uma pilha P1 para uma pilha P2 (copia). 
Siga o prototipo abaixo:
void transferirElementos(Pilha *P1, Pilha *P2);*/
    Pilha P1;
    P1.topo = 0;
    empilha(60,&P1);
    empilha(50,&P1);
    empilha(30,&P1);
    empilha(20,&P1);
    empilha(500,&P1);

    Pilha P2;
    P2.topo = 0;

    printf("Pilha P1 antes da transferência:\n");
    imprimePilha(&P1);

    printf("Pilha P2 antes da transferência:\n");
    imprimePilha(&P2);

    transferirElementos(&P1, &P2);

    printf("Pilha P1 após a transferência:\n");
    imprimePilha(&P1);

    printf("Pilha P2 após a transferência:\n");
    imprimePilha(&P2);

menu();
};

void transferirElementos(Pilha *P1, Pilha *P2) {
    Pilha P_aux;
    P_aux.topo = 0;

    // Desempilhar elementos de P1 e empilhar em P_aux na mesma ordem
    while (P1->topo > 0) {
        int elemento = P1->vetor[P1->topo - 1];
        desempilha(P1);
        empilha(elemento, &P_aux);
    }

    // Desempilhar elementos de P_aux e empilhar de volta em P1 e P2
    while (P_aux.topo > 0) {
        int elemento = P_aux.vetor[P_aux.topo - 1];
        desempilha(&P_aux);
        empilha(elemento, P1);
        empilha(elemento, P2);
    }
}



void quest8()
{ 

  printf("\n\t\t\t\t\t>>>>>>>>>>>questao 8<<<<<<<<<<\n\n");

/* Desenvolva um algoritmo para inverter a posicao dos elementos de uma pilha P1. Você pode criar 
pilhas auxiliares, se necessario. Mas o resultado precisa ser dado na pilha P. Siga o prototipo abaixo:
void inverter (pilha *P1);*/
    Pilha P1;
    P1.topo = 0;
    empilha(60,&P1);
    empilha(50,&P1);
    empilha(30,&P1);
    empilha(20,&P1);
    empilha(500,&P1);

    printf("Pilha original:\n");
    imprimePilha(&P1);

    inverter(&P1);

    printf("Pilha invertida:\n");
    imprimePilha(&P1);

menu();
};
void inverter(Pilha *P1) {
    Pilha P_aux;
    P_aux.topo = 0;

    // Desempilhar elementos de P1 e empilhar em P_aux na ordem inversa
    while (P1->topo > 0) {
        int elemento = P1->vetor[P1->topo - 1];
        desempilha(P1);
        empilha(elemento, &P_aux);
    }

    // Desempilhar elementos de P_aux e empilhar de volta em P1
    while (P_aux.topo > 0) {
        int elemento = P_aux.vetor[P_aux.topo - 1];
        desempilha(&P_aux);
        empilha(elemento, P1);
    }
}


void quest9(){ 

    printf("\n\t\t\t\t\t>>>>>>>>>>>questao 9<<<<<<<<<<\n\n");


/*Desenvolva um algoritmo para testar se duas pilhas P1 e P2 sao iguais. Duas pilhas sao iguais se possuem 
os mesmos elementos, na mesma ordem.
void iguais(pilha *P1, pilha *P2);*/
    Pilha P1;
    P1.topo = 0;
    empilha(60,&P1);
    empilha(50,&P1);
    empilha(30,&P1);
    empilha(20,&P1);
    empilha(500,&P1);

    Pilha P2;
    P2.topo = 0;
    empilha(60,&P2);
    empilha(50,&P2);
    empilha(30,&P2);
    empilha(20,&P2);
    empilha(500,&P2);

    if (iguais(&P1, &P2)) {
        printf("As pilhas sao iguais.\n");
    } else {
        printf("As pilhas sao diferentes.\n");
    }

menu();
};
int iguais(Pilha *P1, Pilha *P2) {
    if (P1->topo != P2->topo) {
        return 0; 
    }

    for (int i = 0; i < P1->topo; i++) {
        if (P1->vetor[i] != P2->vetor[i]) {
            return 0; 
        }
    }

    return 1; 
}


void quest10(){ 

  printf("\n\t\t\t\t\t>>>>>>>>>>>questao 10<<<<<<<<<<\n\n");

  /*Desenvolva um algoritmo para informar o usuario final se uma pilha P1 esta cheia. Siga o prototipo abaixo:
void cheia(pilha *P1);
*/
    Pilha P1;
    P1.topo = 0;
    empilha(60,&P1);
    empilha(50,&P1);
    empilha(30,&P1);
    empilha(20,&P1);
    empilha(500,&P1);


    cheia(&P1);
menu();
}
//decima questao sobre implementar que a pilha esta cheia
void cheia(Pilha *P1) {
    if (P1->topo == TAMANHO_PILHA) {
        printf("A pilha esta cheia.\n");
    } else {
        printf("A pilha nao esta cheia.\n");
    }

};
//prototipo da funcao empilha
void empilha(int valor,Pilha *P1){
//pilha->topo significa: ponteiro "pilha" apontando para CONTEÚDO de um item de uma struct
if(P1->topo < TAMANHO_PILHA){ //verificando se a pilha nao esta cheia
//daí pode empilhar
P1->vetor[P1->topo]=valor;
P1->topo++;
printf("O valor %d foi adicionado \n",valor);
}else{
printf("Nao ha mais espaco na pilha, \n");
}
}
void desempilha(Pilha *P1){
if(P1->topo > 0){
P1->topo--; //desempilha
printf("Elemento retirado: %d. \n",P1->vetor[P1->topo]);
}else{
printf("A pilha esta vazia. \n"); //pilha vazia
}
}
void imprimePilha(Pilha *P1){
int i;
printf("\nSegue Impressao da Pilha: \n");
for(i=((P1->topo)-1);i>=0;i--){ //valor inicial de i e a ultima posicao da pilha e daí decrementa
printf("\t %d \n",P1->vetor[i]);
}
}




