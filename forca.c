#include <stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>

// declaração das funções de questão
void questao1();
void questao2();
void questao3();
void questao4();
void questao5();
void questao6();
void questao7();
int menu();
void sair();

// vetor de ponteiros para função com as questões
void (*questoes[])() = {questao1, questao2, questao3, questao4, questao5, questao6, questao7};

void revisao_linguagem_de_programacao() {
    printf("Questões de Revisão da Linguagem de Programação:\n");
    submenu(questoes, 3);
}

void Estruturas_de_repeticao() {
    printf("Questões de Estruturas de Repetição:\n");
    submenu(questoes+3, 3);
}

void Vetores_ou_arrays() {
    printf("Questões de Vetores ou Arrays:\n");
    submenu(questoes+6, 2);
}

int submenu(void (**questoes)(), int num_questoes) {
    int questao;
    printf("\nEscolha a questão que você deseja, digitando o número correspondente:\n");

    for (int i = 0; i < num_questoes; i++) {
        printf("%d - Questão %d\n", i+1, i+1);
    }
    printf("0 - Sair\n");
    printf(">>> ");
    scanf("%d", &questao);

    if (questao < 0 || questao > num_questoes) {
        printf("Opção inválida!\n");
        return submenu(questoes, num_questoes);
    } else if (questao == 0) {
        return 0;
    } else {
        (*questoes[questao-1])();
        return submenu(questoes, num_questoes);
    }
}

int main() {
    printf("\nOlá, caro professor Felipe Borges!! Meu nome é Nerval Junior.\n");
    printf("Esta atividade é para obtenção de nota de 20 por cento da avaliação 1.\n");
    printf("Matrícula: 2021018510\n");
    printf("\nPressione <ENTER> para começar a navegar no MENU de questões.\n");
    scanf("[\n]");
    menu();
return 0;
}
int menu(){
    int opcao;
    while(1) {
        printf("\n\n>>>>>>>>>>> MENU <<<<<<<<<<<\n\n");
        printf("Você pode escolher um tópico presente na lista:\n");
        printf("  0 - Para fechar o programa\n");
        printf("  1 - Revisão da Linguagem de Programação\n");
        printf("  2 - Estruturas de Repetição\n");
        printf("  3 - Vetores ou Arrays\n");
        printf(">>> ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                revisao_linguagem_de_programacao();
                break;
            case 2:
                Estruturas_de_repeticao();
                break;
            case 3:
                Vetores_ou_arrays();
                break;
            case 0:
                sair();
                break;
            default:
                printf("Opção inválida!\n");
        }

    }

}
void sair() {
    printf("programa encerrado");
    exit(0);
}
