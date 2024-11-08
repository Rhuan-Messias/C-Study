#include <stdio.h>

int fat(int n);

int main(){
    int n = 5;
    int r = 0;
    r = fat(n);

    printf("Fatorial de %d = %d", n, r);
}


int fat(int n){
    int fatorial = 1;
    while(n != 0){
        fatorial *= n;
        n--;
    }

    return fatorial;
}