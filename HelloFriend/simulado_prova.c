#include<stdio.h>

void questao1();
void questao2();

int main(){
    questao2();
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