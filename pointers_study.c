#include <stdio.h>
int study_one();
int study_two(); 
int soma_prod(int,int,int*, int*);

int main(){

    
    return 0;
}

int study_one(){
    
    int n = 5;
    int a = n++; // a recebe 5 e n vira 6
    int b = ++n; // n vira 7 e b recebe 7
    int c = sizeof(b); // mostra o tamanho em bytes

    printf("\na: %d", a);
    printf("\nb: %d", b);
    printf("\nSize of b: %d", c);

    printf("\n======================");

    int j = 3.9; //o valor float converte em int (sempre arredonda pra baixo)

    printf("\nj = (int)3.5: %d", j);

    printf("\nh = (int)3.5 %% 2 : %d", (int)3.5%2);

    printf("\n======================");
    
    int *p;
    printf("\nint *p = %d", p);
    return 0;
}

int study_two(){

    int soma, produto;
    soma_prod(3,5,&soma,&produto);
    printf("\nsoma => %d\nproduto => %d", soma, produto);

    return 0;
}

int soma_prod(int a, int b, int *c, int *d){
    *c = a+b;
    *d = a*b; 

    return 0;
}