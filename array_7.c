#include <stdio.h>

int main() {
    
    int i , j , A[10][10];

    for(i=0; i<10; i++){
        for(j=0; j<10; j++){
            if(i<j){
                A[i][j] = 2*i + 7*j -2;
            }
            if(i==j){
                A[i][j] = 2*(i*i) -1;
            }
            if(i>j){
                A[i][j] = 4*(i*i*i) - 5*(j*j);
            }
                
        }
    }

    for(i=0; i<10; i++){
        printf("|");
        for(j=0; j<10; j++){
            printf(" %d ", A[i][j]);
        }
        printf("|\n");
    }
        



    return 0;
}