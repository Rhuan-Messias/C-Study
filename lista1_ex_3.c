#include <stdio.h>
#include <string.h> // Para usar strcmp(), essa função retorna zero se as str forem iguais

/*3) Faça uma Programa que verifique a validade de uma senha fornecida pelo usuário. A senha é um conjunto
de caracteres que são: 'ASDFG' . O programa deve imprimir mensagem de permissão ou negação de acesso.*/

int main () {
    char senha[20]; 
    char valida[]="ASDFG";
    printf("digite sua senha: ");
    scanf("%s", senha);

    if (strcmp(senha,valida) == 0){
        printf("Acesso Permitido");
    } else {
        printf("Acesso Negado");
    }
    return 0;
}