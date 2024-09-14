#include <stdio.h>

int main() {
    int i, j, mat[5][5], num, num_achados = 0, encontrado=0;

    for(i=0; i<5; i++){
        for(j=0; j<5; j++){
            printf("Mat[%d][%d] -> ", i+1, j+1);
            scanf("%d", &mat[i][j]);
        }
    }
    for(i=0; i<5; i++){
        printf("|");
        for(j=0; j<5; j++){
            printf(" %d ", mat[i][j]);
           
        }
        printf("|\n");
    }

    printf("\nQual numero vc quer saber a posicao -> ");
    scanf("%d", &num);

    // apenas para printar foi encontrado uma vez
    for(i=0; i<5; i++){
        for(j=0; j<5; j++){
            if(mat[i][j] == num){
                encontrado++; 
            }
        }
    }

    if(encontrado > 0)
        printf("Numero %d encontrado: \n", num);


    for(i=0; i<5; i++){
        for(j=0; j<5; j++){
            if(mat[i][j] == num){
                printf("Linha: %d | Coluna: %d\n", i+1, j+1);
                num_achados++; 
            }
        }
    }
    if(num_achados != 0)
        printf("--> Foram encontrados %d numeros '%d'\n", num_achados, num);
    if(num_achados == 0)
        printf("\nNenhum numero %d encontrado\n", num);
    return 0;
}