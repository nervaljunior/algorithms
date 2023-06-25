#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void linha()
{
    int c;
    for(c=1;c<=30;c++){printf(">>");}
    printf("\n");

}
void titulo(int espaco_titulo, char texto[10])
{
    int cont;
    linha();

    for(cont=1;cont<=espaco_titulo;cont++)
    {printf(" ");}

    printf("%s\n",texto);

    linha();

}
int menu_inicial()

{
    int i;
    printf("\nMENU INICIAL!\n\n");
    printf("\nSeja bem vindo ao algoritimo de :nerval .j\n\n");
    printf("\ndigite[0] para finalizar o progama\n\n");
    printf("\nEscolha uma questao:\n->  ");
    scanf("%d",&i);

    return i;
}


//questoes

void questao1(){

    titulo(22,"questao 1");

    char time1[10],time2[10],vencedor[10],encerrar=1,ty[10]="encerrar",t2[10];
    int gols1,gols2,c,n=7,i=0;

    while(encerrar!=0){

    printf("nome do time(1) : \n");
    scanf("%s",&time1);

    for(c=0;c<n;c++){
        if(ty[c]==time1[c]){i++;}
    }

    if(i==7){break;}

    printf("ngols do time time(1) : \n");
    scanf("%d",&gols1);

    printf("nome do time(2) : \n");
    scanf("%s",&time2);

    printf("ngols do time time(2) : \n");
    scanf("%d",&gols2);

    if(gols1==gols2){printf("\nEMPATE\n");}

    else if(gols1>gols2){printf("\n%s eh o vencedor",time1);}

    else if(gols1<gols2){printf("\n%s eh o vencedor",time2);}

    }
}

void questao2(){

    titulo(22,"questao 2");

    int n_lado,tamanho;

    printf("numero de lados : \n");
    scanf("%d",&n_lado);

    if(n_lado == 3){printf("\nTRIANGULO\n");}

    else if(n_lado == 4){
            printf("\nQUADRADO\n");
            printf("\ntamanho do lado\n");
            scanf("%d",&tamanho);

            printf("area = %d\n",tamanho*tamanho);
            }
    else if(n_lado == 5){
            printf("\nPENTAGONO\n");
            printf("\ntamanho do lado\n");
            scanf("%d",&tamanho);
            printf("area = %d\n",tamanho*n_lado);}

    else{printf("\n\nvalor invalido\n");}

}

void questao3(){

    titulo(22,"questao 3");

    int ddd;

    printf("ddd : \n");
    scanf("%d",&ddd);

    if(ddd==71){printf("\nnumero pertence a salvador\n");}

    else if(ddd>10 && ddd<16){printf("numero pertence a são paulo\n");}

    else if(ddd==98 || ddd==99){printf("numero pertence ao maranhao\n");}

    else{printf("\ndesconhecido\n");}
}

void questao4(){

    titulo(22,"questao 4");

    int n=50+9;//9 ultimo digito da matricula
    int c,mais_4=0,subtotal,salario[n];
    float subtotal_almento=0;

    for(c=0;c<n;c++){

    printf("salario do funcionario(%d) = \n",c+1);
    scanf("%d",&salario[c]);

    subtotal+=salario[c];

    if(salario[c]>4000){mais_4++;}

    }


    //a.quantidade de funcionarios que recebe mais de 4000
    printf("\na quantidade de pessoas que ganha mais de 4000 = %d\n",mais_4);
    //b.valor gasto pela empresa
    printf("a empresa gasta = %d\n",subtotal);

    for(c=0;c<n;c++){

    if(salario[c]<4000){subtotal_almento+= ((((n*(5+9)))*salario[c]/100)+ salario[c]);}
    else{subtotal_almento+=salario[c];}
    }
    //c.subtotal se tiver almento
    printf("\no subtotal que a empresa gastaria caso desse almento:\n%.1f\n",subtotal_almento);

}


void questao5(){

    titulo(22,"questao 5");

    int n,c;
    printf("tamanho do vetor =\n");
    scanf("%d",&n);

    int v1[n],v2[n],v3[n];

    for(c=0;c<n;c++){

    printf("valor do vetor_1 na posicao (%d) = ",c);
    scanf("%d",&v1[c]);

    v2[c]= ((3+9)*v1[c]);
    v3[c]= v1[c]+v2[c];




    }
    for(c=0;c<n;c++){
    printf("\n\nvetor_1(%d)=%d vetor_2(%d)=%d vetor_3(%d)=%d",c,v1[c],c,v2[c],c,v3[c]);
    }

}




int main()
{
    int p=-1;
    titulo(22,"ED I-estrutura de dados 1");

    while ( p!=0)
    {
    p = menu_inicial();

    if (p == 1){questao1();}
    else if (p == 2){questao2();}
    else if (p == 3){questao3();}
    else if (p == 4){questao4();}
    else if (p == 5){questao5();}
    else if (p==6){questao6();}

else{

    linha();
    printf("\nobrigado por utilizar este algorimo \n\nde Deyvison.s.nogueira:)\n\ntchau!\n\n");}
    linha();

    }

    printf("\n");
    linha();
    system("pause");
    return 0;
}