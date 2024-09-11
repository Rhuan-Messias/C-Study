#include <stdio.h>

int main(){
    // receber o vetor 1 e 2, comparar e colocar os numeros repetidos no vetor teste
    int vet_1[10], vet_2[10], i, j,aux=0;
    int teste[10]={0};
    for(i=0;i<10;i++){
        printf("type vet 1: ");
        scanf("%d", &vet_1[i]);
    }
    for(i=0;i<10;i++){
        printf("type vet 2: ");
        scanf("%d", &vet_2[i]);
    }

    for(i=0;i<10;i++){
        for(j=0;j<10;j++){
            if(vet_1[i] == vet_2[j]){
                teste[aux]=vet_1[i];
                aux++;
                break;
            }
        }
    }

    printf("\n tamanho -> %d \n\n- ", aux);
    for(i=0;i<aux;i++){
        printf("%d -", teste[i]);
    }
    

    return 0;
}