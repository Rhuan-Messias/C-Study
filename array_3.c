#include <stdio.h>

int main(){
    int i, j, m[4][4];


    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            printf("P[%d][%d] -> ", i+1, j+1);
            m[i][j] = (i+1)*(j+1);
            printf("%d\n", m[i][j]);
        }
    }
    for(i=0;i<4;i++){
        printf("|");
        for(j=0;j<4;j++){
            printf(" %d ", m[i][j]);

        }
        printf("|\n");
    }

    return 0;
}