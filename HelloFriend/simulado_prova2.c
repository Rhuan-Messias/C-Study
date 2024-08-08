#include <stdio.h>

void questao1();
void questao2();
void questao3();
void questao4();
void questao5();
void questao6();
void questao_real();

int main(){
    questao_real();
    return 0;
}

void questao1(){
    int idade;
    float altura;
    char nome[20];
    
    printf("Qual sua Idade: ");
    scanf("%d", &idade);
    printf("Qual sua Altura: ");
    scanf("%f", &altura);
    printf("Qual seu Nome: ");
    scanf("%s", nome);

    printf("\nIdade: %d anos\nAltura: %.2f metros\nNome: %s", idade, altura, nome);
}

void questao2(){
    float n1, n2, n3, media;

    printf("Nota 1: ");
    scanf("%f", &n1);
    printf("Nota 2: ");
    scanf("%f", &n2);
    printf("Nota 3: ");
    scanf("%f", &n3);

    media = (5*n1 + 5*n2 + 8*n3)/18;

    if(media < 6){
        printf("Reprovado com nota: %.1f", media);
    } else{
        printf("Aprovado com nota: %.1f", media);
    }
}

void questao3(){
    int num;

    printf("Numero: ");
    scanf("%d", &num);

    if(num%2 == 0){
        printf("Par");
    } else{
        printf("Impar");
    }
}

void questao4(){
    int caso;

    printf("1 - cadastrar usuario\n2 - editar cadastro\n3- buscar um cadastro\n4 - excluir cadastro\nDigite a opcao: ");
    scanf("%d", &caso);

    switch(caso){
        case 1:
            printf("\n\n1 - cadastrar usuario");
            break;
        case 2:
            printf("\n\n2 - editar cadastro");
            break;
        case 3:
            printf("\n\n3 - buscar um cadastro");
            break;
        case 4:
            printf("\n\n4 - excluir cadastro");
            break;
        default:
            printf("\n\nVoce digitou errado");
            break;
    }
}

void questao5(){
    int a, b, c, caso,aux=0;
    printf("escolha o primeiro numero: ");
    scanf("%d", &a);
    printf("escolha o segundo numero: ");
    scanf("%d", &b);
    printf("escolha o terceiro numero: ");
    scanf("%d", &c);
    printf("\n1 - Crescente\n2 - Decrescente\nEscolha: ");
    scanf("%d", &caso);

    if(a<b){
        aux = a;
        a = b;
        b = aux;
    }
    if(a<c){
        aux = a;
        a = c;
        c = aux;
    }
    if(b<c){
        aux = b;
        b = c;
        c = aux;
    }

    switch(caso){
        case 1:
            printf("\nCrescente: %d %d %d", c, b, a);
            break;
        case 2:
            printf("\nDecrescente %d %d %d", a, b, c);
            break;
        default:
            printf("\nNao foi escolhido, entao toma as duas opcoes");
            printf("\nCrescente: %d %d %d", c, b, a);
            printf("\nDecrescente %d %d %d", a, b, c);
            break;
            
            
    }
}

void questao6(){
    int n[6],i, soma=0;
    float media;

    for(i=0;i<=5;i++){
        printf("Escolha um numero: ");
        scanf("%d", &n[i]); 
        soma += n[i];
    }
    media = soma/6;

    printf("\aAcima da media\n");
    for(i=0;i<=5;i++){
        if(n[i]>=media)
            printf("%d ", n[i]);
    }

    printf("\nAbaixo da media\n");
    for(i=0;i<=5;i++){
        if(n[i]<media)
            printf("%d ", n[i]);
    }

}

void questao_real(){
    int i,j,contador=0;
    i=0;
    j=0;

    while(contador<=30){
        printf("%d%d\n",i,j);

        if(j==8){
            i+=1;
            j=0;
        } else{
            j+=1;
        }

        contador +=1;
    }
}