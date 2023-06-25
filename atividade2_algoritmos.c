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

void revisao_linguagem_de_programacao(Questao questoes[]);
void Estruturas_de_repeticao(Questao questoes[]);
void Vetores_ou_arrays(Questao questoes[]);
void submenu(Questao questoes[], int n);

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
    printf("programa encerrado");
    exit(0);
}

int menu(int (*questoes[])()) {
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

void submenu(Questao questoes[], int n) {
    printf("Digite o numero da questao que deseja acessar: ");
    int questao;
    scanf("%d", &questao);

    if (questao < 1 || questao > n) {
        printf("Numero invalido. nesse topico vai ate a quantidade %d",n);
    } else {
     questoes[questao-1].questao();
    }
}
void Estruturas_de_repeticao(Questao questoes[]) {
    int x=7;
    printf("\t>>>>>questoes de Estruturas de Repeticao:<<<<<\n\n\t\t\tnesse topico tem apenas %d questoes\n\n",x);
    submenu(questoes+10, 7);
}
void Vetores_ou_arrays(Questao questoes[]) {
    int x=3;
    printf("\t>>>>>questoes de Vetores ou Arrays:<<<<<\n\n\t\t\tnesse topico tem apenas %d questoes\n\n",x);
    submenu(questoes+17, 3);
}
void revisao_linguagem_de_programacao(Questao questoes[]) {
    int x=10;
    printf("\t>>>>>questoes de Revisao da Linguagem de Programacao:<<<<<\n\n\t\t\tnesse topico tem apenas %d questoes\n\n",x);
    submenu(questoes, 10);
}

int questao1() {
    int ddd;
    int i,achei=NULL;
    cidade Cidade[n_cidades]={
        {11, "Sao Paulo"},
        {27, "Vitoria"},
        {31, "Belo Horizonte"},
        {61, "Brasilia"},
        {71, "Salvador"},
        {98, "Maranhao"},};
        
    printf("\n\t\t\ttopico 1(revisao linguagem de programacao) questao 1\n\n");
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
    int maior=0;
    int *valores;
    valores=(int*)malloc(quant*sizeof(int));
    

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


#define tamanhovetor 5

  int vetor1[tamanhovetor] = {1, 2, 3, 4, 5};
  int vetor2[tamanhovetor] = {6, 7, 8, 9, 10};
  int *vetor3;
  int tamanho_vetor3 = tamanhovetor;

  vetor3 = (int*) malloc(tamanho_vetor3 * sizeof(int));

  if (vetor3 == NULL) {
    printf("Erro na alocacao de memoria.\n");
    return 1;
  }

  for (int i = 0; i < tamanhovetor; i++) {
    vetor3[i] = vetor1[i] * vetor2[i];
  }

  printf("Valores do vetor1:\n");
  for (int i = 0; i < tamanhovetor; i++) {
    printf("%d ", vetor1[i]);
  }

  printf("\n\nValores do vetor2:\n");
  for (int i = 0; i < tamanhovetor; i++) {
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
<<<<<<< HEAD
     int num, primeiro, segundo, quadrado;
    for (num = 1000; num < 10000; num++) {
        primeiro = num / 100;
        segundo = num % 100;
        quadrado = (primeiro + segundo) * (primeiro + segundo);
        if (quadrado == num) {
            printf("%d\n", num);
        }
    }
=======
    printf("questao 1\n");
>>>>>>> 6f878bf0309c951af3da987127ad9bfe2c8d882b
    return 0;
}

int questao12() {
    printf("\n\t\t\ttopico 2(estruturas de repeticao) questao 2\n\n");
<<<<<<< HEAD

    int num1 = 0, num2 = 1, proximo, i;
    printf("Os 100 primeiros termos da serie de Fibonacci sao:\n");
    printf("%d\n%d\n", num1, num2);
    for (i = 3; i <= 100; i++) {
        proximo = num1 + num2;
        printf("%d\n", proximo);
        num1 = num2;
        num2 = proximo;
    }
=======
    printf("questao 2\n");
>>>>>>> 6f878bf0309c951af3da987127ad9bfe2c8d882b
    return 0;
}


int questao13() {
    printf("\n\t\t\ttopico 2(estruturas de repeticao) questao 3\n\n");
<<<<<<< HEAD
    double x, g, gg, erro;
    printf("Digite um numero positivo para calcular a raiz quadrada: ");
    scanf("%lf", &x);
    printf("Digite um valor inicial para g: ");
    scanf("%lf", &g);
    printf("Digite um valor maximo para o erro: ");
    scanf("%lf", &erro);
    gg = g * g;
    while (fabs(gg - x) > erro) {
        g = (g + x / g) / 2;
        gg = g * g;
    }
    printf("A raiz quadrada de %lf eh %lf\n", x, g);
=======
    printf("questao 3\n");
>>>>>>> 6f878bf0309c951af3da987127ad9bfe2c8d882b
    return 0;
}

int questao14() {
    printf("\n\t\t\ttopico 2(estruturas de repeticao) questao 4\n\n");
<<<<<<< HEAD

    int num, subtrator = 1, raiz = 0;
    printf("Digite um numero positivo para calcular a raiz quadrada: ");
    scanf("%d", &num);
    while (num >= subtrator) {
        num -= subtrator;
        subtrator += 2;
        raiz++;
    }
    printf("A raiz quadrada de %d eh %d\n", num, raiz);
=======
    printf("questao 1\n");
>>>>>>> 6f878bf0309c951af3da987127ad9bfe2c8d882b
    return 0;
}


int questao15() {
    printf("\n\t\t\ttopico 2(estruturas de repeticao) questao 5\n\n");
<<<<<<< HEAD

    int num1, num2, resto;
    while (1) {
        printf("Digite dois numeros (0 para sair): ");
        scanf("%d %d", &num1, &num2);
        if (num1 == 0 && num2 == 0) {
            break;
        }
        while (num2 != 0) {
            resto = num1 % num2;
            num1 = num2;
            num2 = resto;
        }
        printf("O MDC eh: %d\n", num1);
    }
=======
    printf("questao 2\n");
>>>>>>> 6f878bf0309c951af3da987127ad9bfe2c8d882b
    return 0;
}


int questao16() {
    printf("\n\t\t\ttopico 2(estruturas de repeticao) questao 6\n\n");
<<<<<<< HEAD

    int num1, num2, i, j, sum1, sum2;
    printf("Pares de numeros amigaveis entre 1 e 100000:\n");
    for (num1 = 1; num1 <= 100000; num1++) {
        sum1 = 0;
        for (i = 1; i < num1; i++) {
            if (num1 % i == 0) {
                sum1 += i;
            }
        }
        num2 = sum1;
        sum2 = 0;
        for (j = 1; j < num2; j++) {
            if (num2 % j == 0) {
                sum2 += j;
            }
        }
        if (num1 == sum2 && num1 != num2 && num1 < num2 && num2 <= 100000) {
            printf("(%d,%d)\n", num1, num2);
        }
    }
=======
    printf("questao 3\n");
    return 0;
}
int questao17() {
    printf("\n\t\t\ttopico 2(estruturas de repeticao) questao 7\n\n");
    printf("questao 3\n");
    return 0;
}
int questao18() {
    printf("\n\t\t\ttopico 3(vetores ou arrays) questao 1\n\n");
    printf("questao 2\n");
>>>>>>> 6f878bf0309c951af3da987127ad9bfe2c8d882b
    return 0;
}

int questao17() {
    printf("\n\t\t\ttopico 2(estruturas de repeticao) questao 7\n\n");

    int numero_magico, tentativa, num_tentativas = 0;
    srand(time(NULL)); // semente aleatória baseada no tempo
    numero_magico = rand() % 501; // sorteia um número aleatório entre 0 e 500
    printf("Bem-vindo ao jogo do numero magico!\n");
    do {
        printf("Digite um numero entre 0 e 500: ");
        scanf("%d", &tentativa);
        num_tentativas++; // conta o número de tentativas
        if (tentativa < numero_magico) {
            printf("Tente um numero maior.\n");
        } else if (tentativa > numero_magico) {
            printf("Tente um numero menor.\n");
        }
    } while (tentativa != numero_magico); // repete o loop até o usuário acertar o número
    printf("Parabens, voce acertou o numero magico em %d tentativas!\n", num_tentativas);
    if (num_tentativas <= 3) {
        printf("Voce foi muito sortudo!\n");
    } else if (num_tentativas <= 6) {
        printf("Voce foi sortudo!\n");
    } else if (num_tentativas <= 10) {
        printf("Voce foi normal.\n");
    } else {
        printf("Tente novamente.\n");
    }
    return 0;
}

int questao18() {
    printf("\n\t\t\ttopico 3(vetores ou arrays) questao 1\n\n");

    int n, i, j, temp, is_prime, prime_count = 0, sum = 0;
    float average;
    int *arr;

    // pede ao usuário para informar o número de valores que deseja inserir
    printf("Informe o numero de valores que deseja inserir: ");
    scanf("%d", &n);

    // cria o vetor com o tamanho informado pelo usuário
    arr = (int*)malloc(n*sizeof(int));

    // preenche o vetor com os valores inseridos
    for (i = 0; i < n; i++) {
        printf("Informe o valor %d: ", i+1);
        scanf("%d", &arr[i]);
    }

    // encontra o maior valor do vetor
    int max = arr[0];
    for (i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    printf("Maior valor: %d\n", max);

    // calcula a média dos valores do vetor
    for (i = 0; i < n; i++) {
        sum += arr[i];
    }
    average = (float)sum/n;
    printf("Media: %.2f\n", average);

    // ordena o vetor em ordem crescente
    for (i = 0; i < n-1; i++) {
        for (j = i+1; j < n; j++) {
            if (arr[i] > arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("Valores em ordem crescente: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // encontra os valores primos no vetor
    printf("Subconjunto de valores primos: ");
    for (i = 0; i < n; i++) {
        is_prime = 1;
        for (j = 2; j < arr[i]; j++) {
            if (arr[i] % j == 0) {
                is_prime = 0;
                break;
            }
        }
        if (is_prime == 1 && arr[i] != 1) {
            printf("%d ", arr[i]);
            prime_count++;
        }
    }
    if (prime_count == 0) {
        printf("nenhum valor primo encontrado.");
    }
    printf("\n");

    free(arr); // libera o espaço alocado pelo vetor
    return 0;
}


int questao19() {
    printf("\n\t\t\ttopico 3(vetores ou arrays) questao 2\n\n");
<<<<<<< HEAD

    int vetor[20], i, maior, menor;
    float soma=0, media;

    // preenche o vetor com valores digitados pelo usuário
    printf("Digite 20 valores:\n");
    for (i=0; i<20; i++) {
        scanf("%d", &vetor[i]);
    }

    // encontra o maior e o menor elemento do vetor
    maior = vetor[0];
    menor = vetor[0];
    for (i=1; i<20; i++) {
        if (vetor[i] > maior) {
            maior = vetor[i];
        }
        if (vetor[i] < menor) {
            menor = vetor[i];
        }
    }

    // calcula a soma e a média aritmética dos elementos do vetor
    for (i=0; i<20; i++) {
        soma += vetor[i];
    }
    media = soma / 20;

    // imprime o resultado
    printf("Maior valor: %d\n", maior);
    printf("Menor valor: %d\n", menor);
    printf("Soma dos valores: %.2f\n", soma);
    printf("Media aritmetica: %.2f\n", media);

=======
    printf("questao 3\n");
>>>>>>> 6f878bf0309c951af3da987127ad9bfe2c8d882b
    return 0;
}

int questao20() {
    printf("\n\t\t\ttopico 3(vetores ou arrays) questao 3\n\n");
    printf("questao 3\n");
    return 0;
}
