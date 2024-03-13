#include<stdio.h>


int main() {
    int a,b;
    printf("Digite o valor a: ");
    scanf("%d", &a);
    printf("\nDigite o valor b: ");
    scanf("%d", &b);

    if (a>b){
        printf("\n%d > %d\n\n", a, b);
    } else if ( a < b){
        printf("\n%d < %d\n\n", a,b);
    }
    else {
        printf("\n%d = %d\n\n", a, b);
    }
    return 0;
}