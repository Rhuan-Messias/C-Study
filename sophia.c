#include <stdio.h>

void questao1();
void questao2(int mat[5][5], int num);
void questao3();


int main(){
    //int A[5][5] = {{1,2,3,4,5},{1,2,3,4,5},{0,1,2,3,4},{0,1,2,3,4},{1,2,3,4,5}};
    questao3();

    return 0;
}


void questao1(){

    int i, j, mat[3][3];

    //esse codigo le a matriz
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("Mat[%d][%d] -> ", i+1, j+1);
            scanf("%d", &mat[i][j]);
        }
    }


    //esse codigo imprime a matriz
    for(i=0;i<3;i++){
        printf("|");
        for(j=0;j<3;j++){
            printf(" %d ", mat[i][j]);
        }
        printf("|\n");
    }

}

void questao2(int m[5][5], int n){
    int i,j, contador=0;
    
    for(i=0;i<5;i++){
        printf("|");
        for(j=0;j<5;j++){
            printf(" %d ", m[i][j]);
        }
        printf("|\n");
    }

    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            if(m[i][j] == n){
                contador+=1;
            }
        }
    }

    printf("\n\nO numero %d apareceu %d vezes", n, contador);
}

void questao3(){
    int i,j,k,mat[3][3],aux=0;
    //esse codigo le a matriz
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("Mat[%d][%d] -> ", i+1, j+1);
            scanf("%d", &mat[i][j]);
        }
    }


    //esse codigo imprime a matriz original
    printf("\nMatriz Original\n");
    for(i=0;i<3;i++){
        printf("|");
        for(j=0;j<3;j++){
            printf(" %d ", mat[i][j]);
        }
        printf("|\n");
    }

    //ordena matriz
    
    for(k=0;k<8;k++){
        for(i=0;i<3;i++){
            for(j=0;j<3;j++){
                if(mat[i][j]>mat[i][j+1] && j<2){
                    aux = mat[i][j];
                    mat[i][j] = mat[i][j+1];
                    mat[i][j+1] = aux;
                }
                if(mat[i][j]>mat[i+1][j-2] && j==2){
                    aux = mat[i][j];
                    mat[i][j] = mat[i+1][j-2];
                    mat[i+1][j-2] = aux;
                }
            }
        }
    }

    //esse codigo imprime a matriz ordenada
    printf("\nMatriz Ordenada\n");
    for(i=0;i<3;i++){
        printf("|");
        for(j=0;j<3;j++){
            printf(" %d ", mat[i][j]);
        }
        printf("|\n");
    }
}