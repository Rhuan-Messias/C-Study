#include <stdio.h>
#include <string.h>

int main () {
    char senha[10];

    printf("Digite uma senha: ");
    gets(senha);

    if (!strcmp(senha,"ASDFG")){
        pritnf("senhas iguais");
    } else {
        printf("tente novamente");
    }
        
}