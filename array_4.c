#include <stdio.h>
#include "function.h"

int main() {
    int mat[4][4], i, j, maior, linha, coluna; 


    scanmat(mat);
    printmat(mat);
    maior = mat[0][0];

    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            if(mat[i][j]> maior){
                maior = mat[i][j];
                linha = i;
                coluna = j;
            }
                
        }
    }

    printf("linha -> %d \n", linha + 1);
    printf("coluna -> %d\n", coluna + 1);
    printf("maior -> %d\n", maior);

    return 0;

}

