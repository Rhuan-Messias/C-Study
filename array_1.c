#include <stdio.h>
#include "function.h"


int main() {
    int n[4][4];
    int i, j, contagem=0;
    scanmat(n);
    printmat(n);

    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            if(n[i][j]>10){
                contagem++;
            }
        }
    }

    printf("\nNumeros maior que 10 --> %d", contagem);

    return 0;
}

