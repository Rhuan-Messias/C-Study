#include<stdio.h>
#include<stdlib.h>

void exercicio_1_con();
void exercicio_2_con(float x);
void exercicio_1_rep();
void exercicio_5_rep();

int main(){
    exercicio_5_rep();
    return 0;
}

void exercicio_1_con(){
    //Faça uma Programa que receba quatro notas de um aluno, calcule e imprima a média aritmética das notas e
    //a mensagem de aprovado para média superior ou igual a 7.0 ou a mensagem de reprovado para média inferior
    //a 7.0
    float n1,n2,n3,n4,media;
    printf("Digite a nota 1: ");
    scanf("%f", &n1);
    printf("Digite a nota 2: ");
    scanf("%f", &n2);
    printf("Digite a nota 3: ");
    scanf("%f", &n3);
    printf("Digite a nota 4: ");
    scanf("%f", &n4);

    media = (n1+n2+n3+n4)/4;

    if (media >= 7)
        printf("Media: %.2f --> Aprovado", media);
    if (media < 7)
        printf("Media: %.2f --> Reprovado", media);    
}

void exercicio_2_con(float x){
    //Uma empresa decide dar um aumento de 30% aos funcionários cujo salário é inferior a 500 reais. Escreva
    //uma Programa que receba o salário de um funcionário e imprima o valor do salário reajustado ou uma
    //mensagem caso o funcionário não tenha direito ao aumento. 
    
    float novo_salario;
    
    if (x < 500){
        novo_salario = x + x*0.3;
        printf("Seu novo salario --> %.2f \n", novo_salario);
    } else {
        printf("O funcionario nao tem direito ao aumento. \n");
    }
}

void exercicio_1_rep(){
    int i;
    for(i=0;i<10;i++){
        printf("%d - ", i);
    }
    printf("\n");

    for(i=0;i<10;i++){
        if(i<5)
            printf("%d ", i);
        if((i>3) && (i<5))
            printf("\n");
        if(i>4)
            printf("%d ", i);
    }

}

void exercicio_5_rep(){
    srand(time(NULL));
    int rnd=rand()%10,g,keepgoing=0;
    
    printf("%d", rnd);
    
    while(keepgoing==0){
        printf("\nTente advinhar um numero de 0 a 10: ");
        scanf("%d", &g);

        if (g==rnd){
            printf("Voce acertou!!!");
            keepgoing=1;
        }
        
        if (g>rnd)
            printf("O numero correto e menor");
        if(g<rnd)
            printf("O numero correto e maior");

    }
    
}