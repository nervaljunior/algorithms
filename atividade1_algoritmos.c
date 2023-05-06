#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>

#define hora 12
#define depen 40
#define inss 0.085
#define ir 0.05
#define cand 3
#define V_BSC 30
#define limit 72
#define horasinicias 8.0
#define adicional 2.0
#define limitCarros 100

struct Carro {
    char placa[8];
    int hora_entrada;
};

void sair();

int menu();
void triangulo(a,b,c);
void quadrado(a,b,c,d);
void pentagono(a,b,c,d,e);
void quest1();
int quest2();
int quest3();
int quest4();
int quest5();
int quest6();
int quest7();


int main(){
  
  printf("\tolá, caro professor!! meu nome é Nerval junior\n");
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

void triangulo(a,b,c){
  
    if(a + b > c && a + c > b && b + c > a){
        printf("Os 3 lados formam um triangulo!\n");
        if(a == b && a == c)
            printf("Equilatero\n");
        else
            if(a == b || a == c || b == c)
                printf("Isosceles\n");
            else
                printf("Escaleno\n");
    }
    else
        printf("Os 3 lados NAO formam um trinagulo!\n");
}
void quadrado(a,b,c,d){
int area;
  if (a==b && b==c && c==d && d==a ){
    printf("isso é um quadrado\n");
    area= a*a;
    printf("a area do quadrado é: %d",area);
  }
  else{printf("isso nao é um quadrado");}
  
}

void pentagono(a,b,c,d,e){
  int perimetro;
  perimetro =a+b+c+d+e;
  printf("o perimetro é: %d",perimetro);
}

void quest1()
{ 
  float valor_final,reais=5.27,dolar;
  printf("\n\t\t\t\t\t>>>>>>>>>>>questão 1<<<<<<<<<<\n\n");
    printf("digite um valor que vc queira trasformar de dolar,para reais\n>");

    scanf("%f",&dolar);
    valor_final=reais*dolar;
    printf("R$ %.2f reais",valor_final);
menu();}

int quest3()
{
  printf("\n\t\t\t\t\t>>>>>>>>>>>questão 3<<<<<<<<<<\n\n");
  int i,quant,tam;

  printf("quant de numeros de lados do poligono regular:\n");
  scanf("%d",&quant);

  if(quant==0){
    printf("programa encerrado");
    system("EXIT");
    
  }
  else if(quant>2&&quant<6){
    int vetor[quant];
    for(i=0;i<quant;i++){
      
      printf("digite o lado de numero (%d)\n",i+1);
      scanf("%d",&vetor[i]);
      }
    int a=vetor[0],b=vetor[1],c=vetor[2],d=vetor[3],e=vetor[4];
     

      if(quant==3){ triangulo(a,b,c);};
      if(quant==4){ quadrado(a,b,c,d);};
      if(quant==5){ 
        pentagono(a,b,c,d,e);};}
  else{
    printf("nao existe poligono regular com %d lados",quant);
    system("EXIT");
    }
menu();
return 0;	
}

int quest7(){ 

  printf("\n\t\t\t\t\t>>>>>>>>>>>questão 7<<<<<<<<<<\n\n");
    int *votos = (int *) malloc(cand * sizeof(int)); 
    int num_votos = 0;
    char voto;


    printf("Digite os votos X, Y, Z, N ou B, Digite F para finalizar.\n");
    do {
        printf("Voto %d: ", num_votos + 1);
        scanf(" %c", &voto); 
        switch (voto) {
            case 'X':
                votos[0]++;
                break;
            case 'Y':
                votos[1]++;
                break;
            case 'Z':
                votos[2]++;
                break;
            case 'N':
                printf("Voto nulo.\n");
                break;
            case 'B':
                printf("Voto em branco.\n");
                break;
            case 'F':
                printf("Fim da eleição.\n");
                break;
            default:
                printf("Voto inválido.\n");
                break;
        }
        num_votos++;
        votos = (int *) realloc(votos, (num_votos + cand) * sizeof(int)); 
    } while (voto != 'F');

    int posic[cand];
    for (int i = 0; i < cand; i++) {
        int max_votos = 0;
        int max_pos = -1;
        for (int j = 0; j < cand; j++) {
            if (votos[j] > max_votos) {
                max_votos = votos[j];
                max_pos = j;
            }
        }
        posic[max_pos] = i + 1;
        votos[max_pos] = -1;
    }

    int validos = num_votos - 1; 
    float perc_votos[cand];
    for (int i = 0; i < cand; i++) {
        perc_votos[i] = (float) votos[i] / validos * 100;
    }

    printf("\nClassificação:\n");
    for (int i = 0; i < cand; i++) {
        printf("%dº lugar: Candidato %c\n", posic[i], 'X' + i);
    }
    printf("\nPercentual de votos:\n");
    for (int i = 0; i < cand; i++) {
        printf("Candidato %c: %.2f%%\n", 'X' + i, perc_votos[i]);
    }

    free(votos);
menu();
return 0;
};

int quest6(){ 

    printf("\n\t\t\t\t\t>>>>>>>>>>>questão 6<<<<<<<<<<\n\n");
    int h;
    float pagar;

    printf("Digite a quantidade de horas que você utilizou: ");
    scanf("%d", &h);

    if (h <= limit) {
        pagar = V_BSC;
    } else {
        int h = h - limit;
        float tx = ir * h;
        pagar = V_BSC * (1 + tx);
    }

    printf("Valor a ser pago: R$ %.2f\n", pagar);

menu();
return 0;
};
int quest5()
{ 

  float km,gasosa,x;  
  printf("\n\t\t\t\t\t>>>>>>>>>>>questão 5<<<<<<<<<<\n\n");

  printf("digite a distancia desejada que vc deseja transformar\n");
  scanf("%f",km);
  printf("qual o preço da gasolina?\n");
  scanf("%f",gasosa);
  x=12*(km/gasosa);
  
  printf("%f",x);

menu();
return 0;
};

int quest4(){

printf("\n\t\t\t\t\t>>>>>>>>>>>questão 4<<<<<<<<<<\n\n");

  char *nome;
  int h_trabalho, num_depen;
  float bruto, d_inss, d_ir, liquido;

  nome = (char*) malloc(sizeof(char) * 50);

  printf("Digite o nome do funcionário: ");
  scanf("[^\n]%*c", nome);
  printf("Digite o número de horas trabalhadas: ");
  scanf("%d", &h_trabalho);
  printf("Digite o número de dependentes: ");
  scanf("%d", &num_depen);

  bruto = h_trabalho * hora + num_depen * depen;

  d_inss = bruto * inss;
  d_ir = bruto * ir;

  liquido = bruto - d_inss - d_ir;


  printf("\nNome: %s\n", nome);
  printf("Salário bruto: R$%.2f\n", bruto);
  printf("Desconto INSS: R$%.2f\n", d_inss);
  printf("Desconto IR: R$%.2f\n", d_ir);
  printf("Salário líquido: R$%.2f\n", liquido);

  free(nome);

menu();
return 0 ;
};


int quest2()
{
  printf("\n\t\t\t\t\t>>>>>>>>>>>questão 2<<<<<<<<<<\n\n");
    struct Carro carros[limitCarros];
    int num_carros = 0;

    while (num_carros < limitCarros) {
        printf("Digite a placa do carro (ou 'FIM' para encerrar): ");
        scanf("%s", carros[num_carros].placa);

        if (strcmp(carros[num_carros].placa, "FIM") == 0) {
            break;
        }

        printf("Digite a hora de entrada do carro (entre 0 e 23): ");
        scanf("%d", &carros[num_carros].hora_entrada);

        num_carros++;
    }

    printf("Carros estacionados:\n");

    float total_pagar = 0.0;

    for (int i = 0; i < num_carros; i++) {
        int horas = (24 + 15 - carros[i].hora_entrada) % 24; // hora atual - hora de entrada
        float valor_pagar;

        if (horas <= 0) {
            valor_pagar = 0.0;
        } else if (horas <= 3) {
            valor_pagar = horasinicias;
        } else {
            valor_pagar = horasinicias + (horas - 3) * adicional;
        }

        printf("Placa: %s, Hora de entrada: %d, Horas estacionado: %d, Valor a pagar: R$ %.2f\n",
            carros[i].placa, carros[i].hora_entrada, horas, valor_pagar);

        total_pagar += valor_pagar;
    }

    printf("Valor total a pagar: R$ %.2f\n", total_pagar);

menu();
return 0;
};