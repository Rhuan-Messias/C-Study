#include <stdio.h>
#include "function.h"
#include "autofunction.h"

int main() {
    int mat1[4][4], mat2[4][4], mat_maior[4][4],i,k;

   
    scanmat(mat1);
    printf("\nMatriz 1\n");
    printmat(mat1);
    printf("\nMatriz 2\n");
    autoscanmat(mat2);
    autoprintmat(mat2);
    printf("\n");

    for(i=0;i<4;i++){
        for(k=0;k<4;k++){
            if(mat1[i][k]>mat2[i][k]){
                mat_maior[i][k] = mat1[i][k];
            } else{
                mat_maior[i][k] = mat2[i][k];
            }
        }
    }
    printf("\nMatriz Maior\n");
    printmat(mat_maior);

    return 0;
}