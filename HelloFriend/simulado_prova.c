#include<stdio.h>

void questao1();
void questao2();
void questao3();
void crescente_decrescente(int a, int b, int c, int d, int caso);

int main(){
    questao3();
    return 0;
}

void questao1(){
    float n1, n2, n3, n4, media;

    printf("Nota 1: ");
    scanf("%f", &n1);
    printf("Nota 2: ");
    scanf("%f", &n2);
    printf("Nota 3: ");
    scanf("%f", &n3);
    printf("Nota 4: ");
    scanf("%f", &n4);

    media = (4*n1 + 6*n2 + 6*n3 + 4*n4)/20;
    printf("Media -> %.1f", media); 

    if( media >= 7 ) {
        printf("\nAluno Aprovado");
    } else {
        printf("\nAluno Reprovado");
    }
}

void questao2(){
    int num=0, contador=0, somatorio=0, i;
    float media;

    while(num<=50 || num >= 1000 ){
        printf("Qual numero voce deseja digitar entre 50 e 1000: ");   
        scanf("%d", &num); 
    }
    for(i=2;i<=num;i+=2){
        printf("%d - ", i);
        contador += 1;
        somatorio += i;
    }
    media = somatorio/contador;
    printf("\n Media -> %.2f",media);
}

void questao3(){
    int a, b, c, d, caso;
    printf("Escolha um numero inteiro aleatorio: ");
    scanf("%d", &a);
    printf("Escolha um numero inteiro aleatorio: ");
    scanf("%d", &b);
    printf("Escolha um numero inteiro aleatorio: ");
    scanf("%d", &c);
    printf("Escolha um numero inteiro aleatorio: ");
    scanf("%d", &d);    
    printf("\n1: Ordem Crescente\n2: Ordem Decrescente\nEscolha: ");
    scanf("%d", &caso);
    crescente_decrescente(a,b,c,d,caso);
    
}

void crescente_decrescente(int a, int b, int c, int d, int caso){
    int aux;
    if(a<b){
        aux = a;
        a = b;
        b = aux;
    }
    //printf("\n%d %d %d %d", a, b, c, d);
    if(a<c){
        aux = a;
        a = c;
        c = aux;
    }
    //printf("\n%d %d %d %d", a, b, c, d);
    if(a<d){
        aux = a;
        a = d;
        d = aux;
    }
    //printf("\n%d %d %d %d", a, b, c, d);
    if(b<c){
        aux = b;
        b = c;
        c = aux;
    }
    //printf("\n%d %d %d %d", a, b, c, d);
    if(b<d){
        aux = b;
        b = d;
        d = aux;
    }
    //printf("\n%d %d %d %d", a, b, c, d);
    if(c<d){
        aux = c;
        c = d;
        d = aux;
    }

    switch(caso){
        case 1:
            printf("\n\n%d %d %d %d", d, c, b, a);
            break;
        case 2:
            printf("\n\n%d %d %d %d", a, b, c, d);
            break;
        default:
            printf("ERROR 404: NOT FOUND");
            break;
    }
    
}