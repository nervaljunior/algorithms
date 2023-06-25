#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>

#define matricula 0

void sair();
int menu();
void quest1();
int quest2();
int quest3();
int quest4();
int quest5();

void main(){
  
  printf("\tolá, caro professor!! meu nome é Nerval junior\n");
  printf("\t\t\t\tmatricula:2021018510\n");
  printf("aperte <ENTER> para começar a navegar no MENU de questões\n");
  scanf("[\n]");
  menu();   

}

int menu(){
printf("\n\n\t\t\t\t\t>>>>>>>>>>>MENU <<<<<<<<<<\n\n");

int questao;

printf("\nescolha a questão que vc deseja digitando o numero:\n\t0-PARA FECHAR O PROGRAMA\n\t1-questao 1\n\t2-questao 2\n\t3-questao 3\n\t4-questao 4\n\t5-questao 5 \n\t>>>");
scanf("%d",&questao);

switch(questao){
  
case 1: quest1();

case 2: quest2();

case 3: quest3();

case 4: quest4();

case 5: quest5();

default:sair();
}
}


void quest1()
{ 
 
  printf("\n\t\t\t\t\t>>>>>>>>>>>questão 1<<<<<<<<<<\n\n");


    char t_1[50], t_2[50];
    int gols_t_1, gols_t_2;

    while (1) {
        printf("Digite o nome do time 1: ");
        scanf("%s", t_1);
        printf("Digite o número de gols do time 1: ");
        scanf("%d", &gols_t_1);

        printf("Digite o nome do time 2: ");
        scanf("%s", t_2);
        printf("Digite o número de gols do time 2: ");
        scanf("%d", &gols_t_2);

        if (gols_t_1 == -matricula || gols_t_2 == -matricula) {
            break; 
        }

        if (gols_t_1 > gols_t_2) {
            printf("O time vencedor é: %s\n", t_1);
        } else if (gols_t_2 > gols_t_1) {
            printf("O time vencedor é: %s\n", t_2);
        } else {
            printf("EMPATE\n");
        }
    }
}


int quest2()
{
  printf("\n\t\t\t\t\t>>>>>>>>>>>questão 2<<<<<<<<<<\n\n");

    int A[6] = {1, 0, 5, -2, -5, 3}; // Substitua o último dígito pelo seu próprio
    int soma = A[0] + A[1] + A[5];
    
    printf("Soma: %d\n", soma);
    
    A[4] = 50;
    
    for (int i = 0; i < 6; i++) {
        printf("%d\n", A[i]);
    }
    


menu();
return 0;
}

int quest3()
{
  printf("\n\t\t\t\t\t>>>>>>>>>>>questão 3<<<<<<<<<<\n\n");

    int v[12];
    int i = 0;
    int x, y, soma;
    printf ("Digite 12 valores. \n");
    while (i < 12){
        scanf("%d", &v[i]);
        i = i + 1;
    }
    printf ("Digite as duas posicoes para somar, podendo escolher de 0 a 11. \n");
    scanf("%d %d", &x, &y);
    soma = v[x] + v[y];
    printf ("O valor total eh %d", soma);

menu();
return 0;
}

int quest4(){

printf("\n\t\t\t\t\t>>>>>>>>>>>questão 4<<<<<<<<<<\n\n");
    float produto, lucrou, venda;

    printf("Digite o valor do produto: ");
    scanf("%f", &produto);
    

    if (produto < 15.0) {
        lucrou = (0.30 + matricula
    ) / 100.0 * produto;
    } else {
        lucrou = (0.25 + matricula
    ) / 100.0 * produto;
    }
    
    venda = produto + lucrou;
    
    printf("O valor de venda para o produto é R$ %.2f\n", venda);
menu();
return 0;

}

int quest5()
{  
  printf("\n\t\t\t\t\t>>>>>>>>>>>questão 5<<<<<<<<<<\n\n");

    int tam, i;
    printf("Digite o tamanho do vetor: \n");
    scanf("%d", &tam);

    int vetor1[tam], vetor2[tam], vetor3[tam];

    printf("Digite os valores do vetor1:\n");
    for (i = 0; i < tam; i++) {
        scanf("%d", &vetor1[i]);
    }

    for (i = 0; i < tam; i++) {
        vetor2[i] = (3 + matricula) * vetor1[i];
    }

    for (i = 0; i < tam; i++) {
        vetor3[i] = vetor1[i] + vetor2[i];
    }


    printf("Vetor1\tVetor2\tVetor3\n");
    for (i = 0; i < tam; i++) {
        printf("%d\t%d\t%d\n", vetor1[i], vetor2[i], vetor3[i]);
    }
menu();
return 0;
};


/*aqui aproveitar o codigo do menu*/
void sair(){
  printf("programa encerrado");
  system("EXIT");
}








