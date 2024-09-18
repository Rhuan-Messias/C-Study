#include <stdio.h>

int main() {
    
    int i , j , Mat[3][3], somatorio=0;

    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            printf("Mat[%d][%d] -> ", i+1, j+1);
            scanf("%d", &Mat[i][j]);    
        }
    }

    for(i=0; i<3; i++){
        printf("|");
        for(j=0; j<3; j++){
            printf(" %d ", Mat[i][j]);
        }
        printf("|\n");
    }

    somatorio = Mat[0][1]+ Mat[0][2]+ Mat[1][2];
    printf("\nSoma -> %d", somatorio);

        



    return 0;
}