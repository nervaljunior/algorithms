#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>

#define n_cidades 6
#define hora 12
#define quant 3
#define TAMANHO_VETOR 10
#define tamanhovetor 5

typedef struct {
    int ddd;
    char city[50];
}cidade;
typedef struct {
    int (*questao)();
}Questao;
typedef struct 
{
    char nome[20];
    float idade; 
}Pessoas;

void sair();
int menu();
int questao1();
int questao2();
int questao3();
int questao4();
int questao5();
int questao6();
int questao7();
int questao8();
int questao9();
int questao10();
int questao11();
int questao12();
int questao13();
int questao14();
int questao15();
int questao16();
int questao17();
int questao18();
int questao19();
int questao20();


void revisao_linguagem_de_programacao(Questao questoes[]) {
    setlocale(LC_ALL, "Portuguese");
    int x=10;
    printf("\t>>>>>questoes de Revisao da Linguagem de Programacao:<<<<<\n\n\t\t\tnesse topico tem apenas %d questoes\n\n",x);
    submenu(questoes, 10);
}

void Estruturas_de_repeticao(Questao questoes[]) {
    setlocale(LC_ALL, "Portuguese");
    int x=7;
    printf("\t>>>>>questoes de Estruturas de Repeticao:<<<<<\n\n\t\t\tnesse topico tem apenas %d questoes\n\n",x);
    submenu(questoes+10, 7);
}

void Vetores_ou_arrays(Questao questoes[]) {
    setlocale(LC_ALL, "Portuguese");
    int x=3;
    printf("\t>>>>>questoes de Vetores ou Arrays:<<<<<\n\n\t\t\tnesse topico tem apenas %d questoes\n\n",x);
    submenu(questoes+17, 3);
}

void submenu(Questao questoes[], int n) {
    setlocale(LC_ALL, "Portuguese");
    printf("Digite o numero da questao que deseja acessar: ");
    int questao;
    scanf("%d", &questao);

    if (questao < 1 || questao > n) {
        printf("Numero invalido. nesse topico vai ate a quantidade %d",n);
    } else {
     questoes[questao-1].questao();
    }
}

int main() {
    setlocale(LC_ALL, "Portuguese");
    Questao questoes[]={{ questao1}, {questao2}, {questao3}, {questao4}, {questao5}, {questao6}, {questao7},{questao8},{questao9},{questao10},
    {questao11}, {questao12}, {questao13}, {questao14}, {questao15},{ questao16}, {questao17},{
    questao18},{questao19},{questao20 }};

    printf("\tola, caro professor Felipe Borges!! meu nome e Nerval junior\n");
    printf("\tessa atividade e para obtencao de nota de 20 porcento da avaliacao 1 \n");
    printf("\t\t\t\tmatricula:2021018510\n");
    printf("aperte <ENTER> para comecar a navegar no MENU de questoes\n");
    scanf("[\n]");
    menu(questoes);
    return 0;
}

void sair() {
    setlocale(LC_ALL, "Portuguese");
    printf("programa encerrado");
    exit(0);
}

int menu(int (*questoes[])()) {
    setlocale(LC_ALL, "Portuguese");
    while (1) {
        printf("\n\n\t\t\t\t\t>>>>>>>>>>>MENU <<<<<<<<<<\n\n");

        int opcao;
        printf("\nEscolha um topico para acessar:\n\t0 - Sair\n\t1 - Revisao da Linguagem de Programacao\n\t2 - Estruturas de Repeticao\n\t3 - Vetores ou Arrays\n\t\n>>> ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 0:
                sair();
                break;
            case 1:
                revisao_linguagem_de_programacao(questoes);
                break;
            case 2:
                Estruturas_de_repeticao(questoes);
                break;
            case 3:
                Vetores_ou_arrays(questoes);
                break;
            default:
                printf("Opcao invalida.\n");
        }
    }
}

/*Fazer um algoritmo que leia três valores e identifique qual o maior valor informado.3.Fazer um algoritmo que leia o nome e a altura de três pessoas, determinando o nome e a altura da menor delas que será apresentado ao usuário deste algoritmo.4.Utilize uma das estruturas condicionais de repetição para: Escreva quantos anos serão necessários  para que Ciclano seja maior que Fulano. Considere que Fulano tem 1,50 m e cresce 2 cm por ano e Ciclano tem 1,10 m e cresce 3 cm por ano.5.Leia um número inteiro e escreva se ele é primo.6.Leia um número inteiro e positivo e escreva o seu fatorial. Considere: N! = 1 x 2 x 3 x ... x N-1 x N e 0 ! = 17.Leia o salário de 15 funcionários e escreva: a) quantos funcionários recebem mais de R$2.000,00; b) quanto a empresa gasta com estes funcionários e c) quanto a empresa gastaria se fosse dar um aumento de 7,5% aos funcionários que recebem menos que R$2.000,00.8.Faça um algoritmoque coloque o valor de cada posição de um vetor (vetor1) em um novo vetor (vetor2), com o dobro do valor original de cada posição do vetor original.9.Faça um algoritmo que faça a união de dois vetores de mesmo tamanho e mesmo tipo em um terceiro vetorcom dobro do tamanho.10.Faça um algoritmo que multipliqueo conteúdo de cada posição de doisvetores entre si e armazene o resultado em um terceiro vetor(que será do mesmo tamanho dos 2 primeiros).
*/


int questao1() {
    printf("\n\t\t\ttopico 1(revisao linguagem de programacao) questao 1\n\n");
    
setlocale(LC_ALL, "Portuguese");
int ddd;
int i,achei=NULL;
cidade Cidade[n_cidades]={
    {11, "Sao Paulo"},
    {27, "Vitoria"},
    {31, "Belo Horizonte"},
    {61, "Brasilia"},
    {71, "Salvador"},
    {98, "Maranhao"},};

printf("digite o seu ddd:\n");
scanf("%d",&ddd);
if (ddd>10&&ddd<=20){
    ddd=11;
};
if (ddd==98||ddd==99){
    ddd=98;
}
for (size_t i = 0; i < sizeof(Cidade)/sizeof(cidade); i++)
{
    if(Cidade[i].ddd==ddd){
        printf("o ddd da Estado de(o) %s\n",Cidade[i].city);
        achei=1;
        break;
    } 
}
if(!achei){
        printf("DDD desconhecido");
    }
  return 0; 
}

int questao2() {
    printf("\n\t\t\ttopico 1(revisao linguagem de programacao) questao 2\n\n");
    setlocale(LC_ALL, "Portuguese");
    int maior=0;
    int *valores;
    valores=(int*)malloc(quant*sizeof(int));
    setlocale(LC_ALL, "Portuguese");
    

    for (size_t i = 0; i < quant; i++)
    {
        printf("digite o valor da posicao %d :\n",i+1);
        scanf("%d",&valores[i]);
        if (valores[i]>maior){
            maior=valores[i];
        }    
    }
    printf("\no maior numero entre esses e o valor %d",maior);
    free(valores);

    return 0;
}

int questao3() {
    printf("\n\t\t\ttopico 1(revisao linguagem de programacao) questao 3\n\n");
    setlocale(LC_ALL, "Portuguese");
Pessoas pessoas[quant];
int i,maior=0;
    printf("digite o nome da pessoa e em seguida digite a altura quando for pedido\n");

    for(i=0;i<quant;i++){
    printf("digite o nome da pessoa %d:\n",1+i);
    scanf("%s",pessoas[i].nome);
    printf("agora digite a altura da %s:\n",pessoas[i].nome);
    scanf("%f", &pessoas[i].idade);
    }
    
    for (size_t i = 0; i < quant; i++)
    {
    if (pessoas[i].idade < pessoas[maior].idade){
        maior=i;
    }
    }
    printf("a pessoa de maior altura foi %s , que tem altura %.2f metros de altura",pessoas[maior].nome,pessoas[maior].idade );
    
    return 0;
}

int questao4() {
    printf("\n\t\t\ttopico 1(revisao linguagem de programacao) questao 4\n\n");
    setlocale(LC_ALL, "Portuguese");
    float ciclano=1.1,fulano=1.5,i=0;
    
    while (ciclano<=fulano){
        fulano+=0.02;
        ciclano+=0.03;
        i++;
    } 
    printf("vao demorar %.2f anos para que ciclano seja maior que fulano",i);
    return 0;
}

int questao5() {
    printf("\n\t\t\ttopico 1(revisao linguagem de programacao) questao 5\n\n");
    setlocale(LC_ALL, "Portuguese");
  int num, i, primo = 1;

  printf("Digite um numero inteiro: ");
  scanf("%d", &num);
  for (i = 2; i <= num/2; i++) {
    if (num % i == 0) {
      primo = 0;
      break;
    }
  }

  if (num == 1) {
    printf("1 nao e primo.\n");
  } else if (primo) {
    printf("%d e primo.\n", num);
  } else {
    printf("%d nao e primo.\n", num);
  }

  return 0;
}

int questao6() {
    printf("\n\t\t\ttopico 1(revisao linguagem de programacao) questao 6\n\n");
    setlocale(LC_ALL, "Portuguese");
  int num, i, f = 1;

  printf("Digite um numero inteiro: ");
  scanf("%d", &num);

  if (num < 0) {
    printf("Erro: o numero digitado nao positivo.\n");
  } else {
   
    for (i = 1; i <= num; i++) {
      f *= i;
    }
    printf("%d! = %d\n", num, f);
  }

  return 0;
}

int questao7() {
    printf("\n\t\t\ttopico 1(revisao linguagem de programacao) questao 7\n\n");
    setlocale(LC_ALL, "Portuguese");

  float *salarios;
  float somaSalarios = 0, gastosMaior2000 = 0, gastosMenor2000 = 0;
  int numMaior2000 = 0, numMenor2000 = 0;

  salarios = (float*) malloc(15 * sizeof(float));

  if (salarios == NULL) {
    printf("Erro de alocacao de memoria.\n");
    return 1;
  }

  for (int i = 0; i < 15; i++) {
    printf("Digite o salario do funcionario %d: ", i + 1);
    scanf("%f", &salarios[i]);
    somaSalarios += salarios[i];

    if (salarios[i] > 2000) {
      numMaior2000++;
      gastosMaior2000 += salarios[i];
    } else {
      numMenor2000++;
      gastosMenor2000 += salarios[i];
    }
  }

  printf("a) %d funcionarios recebem mais de R$2.000,00.\n", numMaior2000);
  printf("b) A empresa gasta R$%.2f com os funcionarios que recebem mais de R$2.000,00.\n", gastosMaior2000);
  
  float aumento = 0.075;
  float gastosAumento = gastosMenor2000 + (gastosMenor2000 * aumento);
  printf("c) A empresa gastaria R$%.2f se desse um aumento de 7,5%% aos funcionarios que recebem menos que R$2.000,00.\n", gastosAumento);

  free(salarios);

  return 0;
}

int questao8() {
    printf("\n\t\t\ttopico 1(revisao linguagem de programacao) questao 8\n\n");
    setlocale(LC_ALL, "Portuguese");


  int vetor1[TAMANHO_VETOR] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
  int vetor2[TAMANHO_VETOR];

  for (int i = 0; i < TAMANHO_VETOR; i++) {
    vetor2[i] = vetor1[i] * 2;
  }

  printf("Valores do vetor1:\n");
  for (int i = 0; i < TAMANHO_VETOR; i++) {
    printf("%d ", vetor1[i]);
  }

  printf("\n\nValores do vetor2 (com o dobro dos valores do vetor1):\n");
  for (int i = 0; i < TAMANHO_VETOR; i++) {
    printf("%d ", vetor2[i]);
  }
  return 0;
}

int questao9() {
    printf("\n\t\t\ttopico 1(revisao linguagem de programacao) questao 9\n\n");
    setlocale(LC_ALL, "Portuguese");
  int vetor1[tamanhovetor] = {1, 2, 3, 4, 5};
  int vetor2[tamanhovetor] = {6, 7, 8, 9, 10};
  int *vetor3;
  int tamanhovetor3 = tamanhovetor * 2;

  vetor3 = (int*) malloc(tamanhovetor3 * sizeof(int));

  if (vetor3 == NULL) {
    printf("Erro na alocacao de memoria.\n");
    return 1;
  }

  int posicao = 0;

  for (int i = 0; i < tamanhovetor; i++) {
    vetor3[posicao] = vetor1[i];
    posicao++;

    vetor3[posicao] = vetor2[i];
    posicao++;
  }

  printf("Valores do vetor1:\n");
  for (int i = 0; i < tamanhovetor; i++) {
    printf("%d ", vetor1[i]);
  }

  printf("\n\nValores do vetor2:\n");
  for (int i = 0; i < tamanhovetor; i++) {
    printf("%d ", vetor2[i]);
  }

  printf("\n\nValores do vetor3 (uniao dos vetores 1 e 2):\n");
  for (int i = 0; i < tamanhovetor3; i++) {
    printf("%d ", vetor3[i]);
  }

  free(vetor3);

  return 0;
}
int questao10() {
    printf("\n\t\t\ttopico 1(revisao linguagem de programacao) questao 10\n\n");
    setlocale(LC_ALL, "Portuguese");
    #include <stdio.h>
#include <stdlib.h>

#define TAMANHO_VETOR 5

  int vetor1[TAMANHO_VETOR] = {1, 2, 3, 4, 5};
  int vetor2[TAMANHO_VETOR] = {6, 7, 8, 9, 10};
  int *vetor3;
  int tamanho_vetor3 = TAMANHO_VETOR;

  vetor3 = (int*) malloc(tamanho_vetor3 * sizeof(int));

  if (vetor3 == NULL) {
    printf("Erro na alocacao de memoria.\n");
    return 1;
  }

  for (int i = 0; i < TAMANHO_VETOR; i++) {
    vetor3[i] = vetor1[i] * vetor2[i];
  }

  printf("Valores do vetor1:\n");
  for (int i = 0; i < TAMANHO_VETOR; i++) {
    printf("%d ", vetor1[i]);
  }

  printf("\n\nValores do vetor2:\n");
  for (int i = 0; i < TAMANHO_VETOR; i++) {
    printf("%d ", vetor2[i]);
  }

  printf("\n\nValores do vetor3 (produto dos elementos dos vetores 1 e 2):\n");
  for (int i = 0; i < tamanho_vetor3; i++) {
    printf("%d ", vetor3[i]);
  }

  free(vetor3);

  return 0;

}
int questao11() {
    printf("\n\t\t\ttopico 2(estruturas de repeticao) questao 1\n\n");
    setlocale(LC_ALL, "Portuguese");
    printf("questao 1\n");
    return 0;
}

int questao12() {
    printf("\n\t\t\ttopico 2(estruturas de repeticao) questao 2\n\n");
    setlocale(LC_ALL, "Portuguese");
    printf("questao 2\n");
    return 0;
}

int questao13() {
    printf("\n\t\t\ttopico 2(estruturas de repeticao) questao 3\n\n");
    setlocale(LC_ALL, "Portuguese");
    printf("questao 3\n");
    return 0;
}
int questao14() {
    printf("\n\t\t\ttopico 2(estruturas de repeticao) questao 4\n\n");
    setlocale(LC_ALL, "Portuguese");
    printf("questao 1\n");
    return 0;
}

int questao15() {
    printf("\n\t\t\ttopico 2(estruturas de repeticao) questao 5\n\n");
    setlocale(LC_ALL, "Portuguese");
    printf("questao 2\n");
    return 0;
}

int questao16() {
    printf("\n\t\t\ttopico 2(estruturas de repeticao) questao 6\n\n");
    setlocale(LC_ALL, "Portuguese");
    printf("questao 3\n");
    return 0;
}
int questao17() {
    printf("\n\t\t\ttopico 2(estruturas de repeticao) questao 7\n\n");
    setlocale(LC_ALL, "Portuguese");
    printf("questao 3\n");
    return 0;
}
int questao18() {
    printf("\n\t\t\ttopico 3(vetores ou arrays) questao 1\n\n");
    setlocale(LC_ALL, "Portuguese");
    printf("questao 2\n");
    return 0;
}

int questao19() {
    printf("\n\t\t\ttopico 3(vetores ou arrays) questao 2\n\n");
    setlocale(LC_ALL, "Portuguese");
    printf("questao 3\n");
    return 0;
}
int questao20() {
    printf("\n\t\t\ttopico 3(vetores ou arrays) questao 3\n\n");
    setlocale(LC_ALL, "Portuguese");
    printf("questao 3\n");
    return 0;
}
