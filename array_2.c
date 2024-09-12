#include <stdio.h>
#include "function.h"

int main(){

    int i,j,n[5][5];

    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            if(i ==j ){
                n[i][j] = 1;
            } else {
                n[i][j] = 0;
            }
                

        }   
    }
   
    for(i=0;i<4;i++){
        printf("|");
        for(j=0;j<4;j++){
            printf(" %d ", n[i][j]);

        }
        printf("|\n");
    }
   

    return 0;
}