#include<stdio.h>

/*Uma empresa decide dar um aumento de 30% aos funcionários cujo salário é inferior a 500 reais. Escreva
uma Programa que receba o salário de um funcionário e imprima o valor do salário reajustado ou uma
mensagem caso o funcionário não tenha direito ao aumento.*/


int main() {
    float salario;
    printf("Digite o seu salario: ");
    scanf("%f",&salario);

    if (salario < 500) {
        printf("Parabens, seu novo salario: R$ %.2f", salario+salario*0.3);
    } else {
        printf("Voce nao tem direito ao aumento");
    }

}