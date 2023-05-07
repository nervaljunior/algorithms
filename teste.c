#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>


int questao1() {
    setlocale(LC_ALL, "Portuguese");
    printf("questao 1\n");
    return 0;
}

int questao2() {
    setlocale(LC_ALL, "Portuguese");
    printf("questao 2\n");
    return 0;
}

int questao3() {
    setlocale(LC_ALL, "Portuguese");
    printf("questao 3\n");
    return 0;
}
int questao4() {
    setlocale(LC_ALL, "Portuguese");
    printf("questao 1\n");
    return 0;
}

int questao5() {
    setlocale(LC_ALL, "Portuguese");
    printf("questao 2\n");
    return 0;
}

int questao6() {
    setlocale(LC_ALL, "Portuguese");
    printf("questao 3\n");
    return 0;
}
int questao7() {
    setlocale(LC_ALL, "Portuguese");
    printf("questao 3\n");
    return 0;
}
int questao8() {
    setlocale(LC_ALL, "Portuguese");
    printf("questao 2\n");
    return 0;
}

int questao9() {
    setlocale(LC_ALL, "Portuguese");
    printf("questao 3\n");
    return 0;
}
int questao10() {
    setlocale(LC_ALL, "Portuguese");
    printf("questao 3\n");
    return 0;
}
int questao11() {
    setlocale(LC_ALL, "Portuguese");
    printf("questao 1\n");
    return 0;
}

int questao12() {
    setlocale(LC_ALL, "Portuguese");
    printf("questao 2\n");
    return 0;
}

int questao13() {
    setlocale(LC_ALL, "Portuguese");
    printf("questao 3\n");
    return 0;
}
int questao14() {
    setlocale(LC_ALL, "Portuguese");
    printf("questao 1\n");
    return 0;
}

int questao15() {
    setlocale(LC_ALL, "Portuguese");
    printf("questao 2\n");
    return 0;
}

int questao16() {
    setlocale(LC_ALL, "Portuguese");
    printf("questao 3\n");
    return 0;
}
int questao17() {
    setlocale(LC_ALL, "Portuguese");
    printf("questao 3\n");
    return 0;
}
int questao18() {
    setlocale(LC_ALL, "Portuguese");
    printf("questao 2\n");
    return 0;
}

int questao19() {
    setlocale(LC_ALL, "Portuguese");
    printf("questao 3\n");
    return 0;
}
int questao20() {
    setlocale(LC_ALL, "Portuguese");
    printf("questao 3\n");
    return 0;
}


void revisao_linguagem_de_programacao(questoes) {
    setlocale(LC_ALL, "Portuguese");
    printf("questoes de Revisao da Linguagem de Programacao:\n");
    submenu(questoes, 10);
}

void Estruturas_de_repeticao(questoes) {
    setlocale(LC_ALL, "Portuguese");
    printf("questoes de Estruturas de Repeticao:\n");
    submenu(questoes+10, 7);
}

void Vetores_ou_arrays(questoes) {
    setlocale(LC_ALL, "Portuguese");
    printf("questoes de Vetores ou Arrays:\n");
    submenu(questoes+18, 3);
}

void submenu(int (*questoes[])(), int n) {
    setlocale(LC_ALL, "Portuguese");
    printf("Digite o numero da questao que deseja acessar: ");
    int questao;
    scanf("%d", &questao);

    if (questao < 1 || questao > n) {
        sair();
    } else {
        questoes[questao-1]();
    }
}

int main() {
    setlocale(LC_ALL, "Portuguese");
    int (*questoes[])() = { questao1, questao2, questao3, questao4, questao5, questao6, questao7,questao8,questao9,questao10,questao11, questao12, questao13, questao14, questao15, questao16, questao17,questao18,questao19,questao20 };

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