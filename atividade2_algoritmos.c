#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>

#define n_cidades 6
#define hora 12
int quest1();

typedef struct {
    int ddd;
    char city[50];
}cidade;


void sair();
int menu();

int main(){
  printf("\tolá, caro professor Felipe Borges!! meu nome é Nerval junior\n");
  printf("\tessa atividade é para obtenção de nota de 20 porcento da avaliação 1 \n");
  printf("\t\t\t\tmatricula:2021018510\n");
  printf("aperte <ENTER> para começar a navegar no MENU de questões\n");
  scanf("[\n]");
  menu();   
}
void sair(){
  printf("programa encerrado");
  system("EXIT");
}

int menu(){
printf("\n\n\t\t\t\t\t>>>>>>>>>>>MENU <<<<<<<<<<\n\n");

int questao;
printf("\nvc pode escolher por um topico presente na lista\n\t os topicos são:\n\t0-PARA FECHAR O PROGRAMA\n\t1-revisao_linguagem_de_programacao \n\t2-Estruturas_de_repeticao \n\t3-Vetores_ou_arrays 3\n\t\n \n\t>>>");
scanf("%d",&questao);
switch(questao){
  
case 1: revisao_linguagem_de_programacao();

case 2: Estruturas_de_repeticao();

case 3: Vetores_ou_arrays();

default: sair();
}
return 0;  
}

int submenu(){
printf("\n\n\t\t\t\t\t>>>>>>>>>>>MENU <<<<<<<<<<\n\n");

int questao;
printf("\nescolha a questão que vc deseja digitando o numero:\n\t0-PARA FECHAR O PROGRAMA\n\t1-questao 1\n\t2-questao 2\n\t3-questao 3\n\t4-questao 4\n\t5-questao 5\n\t6-questao 6\n\t7-questao 7\n \n\t>>>");
scanf("%d",&questao);
switch(questao){
  
case 1: quest1();

case 2: quest2();

case 3: quest3();

case 4: quest4();

case 5: quest5();

case 6: quest6();

case 7: quest7();

default: sair();
}
return 0;  
}

int quest1(){
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
/*Faça um algoritmo em português estruturado que leia o número de DDD  e informe a qual cidade  pertence, considerando só os seguintes valores:
61 -Brasília
71 -Salvador
11 até 20 -São Paulo
27 -Vitória
31 -Belo Horizonte
98 e 99: Maranhão
qualquer outro: DDD desconhecido.*/
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
        printf("o ddd da cidade de(o) %s\n",Cidade[i].city);
        achei=1;
        break;
    } 
}
if(!achei){
        printf("DDD desconhecido");
    }
  return 0; 
}