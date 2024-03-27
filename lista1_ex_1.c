#include <stdio.h>
#include <wchar.h>

int main() {
    float n1, n2, n3, n4, media;
    
    // Solicita ao usuário para digitar as 4 notas
    printf("Digite as 4 notas respectivamente:\n");
    
    // Lê as notas digitadas pelo usuário
    printf("Nota 1: ");
    scanf("%f", &n1);
    
    printf("Nota 2: ");
    scanf("%f", &n2);
    
    printf("Nota 3: ");
    scanf("%f", &n3);
    
    printf("Nota 4: ");
    scanf("%f", &n4);
    
    // Calcula a média aritmética das notas
    media = (n1 + n2 + n3 + n4) / 4.0;
    
    // Imprime a média
    printf("A media aritmetica e: %.2f\n", media);
    
    // Verifica se o aluno foi aprovado ou reprovado
    if (media >= 7.0) {
        printf("Parabens! voce foi aprovado!\n");
    } else {
        printf("Infelizmente, voce foi reprovado.\n");
    }
    
    return 0;
}