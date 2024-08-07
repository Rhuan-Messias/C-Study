#include<stdio.h>


int main () {

        int n,p,ap,pap,i;

        ap=1;
        p=1;

        printf("Informe o termo da sequencia Fibonacci que deseja saber: \n");
        scanf("%d",&n);

        if(n==1||n==2){
                printf("O %d-esimo informado e 1",n);
              }

        for(i=3;i<=n;i++){
               pap=p+ap;
               if(i==n){
                printf("O %d-esimo informado e %d",i,pap);
               }
                ap=p;
                p=pap; 

        }

}