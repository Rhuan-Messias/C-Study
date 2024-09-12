void scanmat(int mat[4][4]){
    int i,j;

    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            printf("P[%d][%d] -> ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }
}

void printmat(int mat[4][4]){
    int i,j;

    for(i=0;i<4;i++){
        printf("|");
        for(j=0;j<4;j++){
            printf(" %d ", mat[i][j]);
            
        }
        printf("|\n");
    }
}