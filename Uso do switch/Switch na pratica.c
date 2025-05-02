#include <stdio.h>

int main () {
    int variavel;

    printf("Digite um valor, (1) ou (2): ");
    scanf("%d", &variavel);

switch (variavel) {
    case 1:
        printf("Código a ser executado se variavel == 1\n");
        printf("Mensagem de teste\n");
        printf("Mensagem de teste 2\n");
        printf("Mensagem de teste 3\n");
        break;

    case 2:
        printf("Código a ser executado se variavel == 2\n");
        printf("Mensagem de teste\n");
        printf("Mensagem de teste 2\n");
        printf("Mensagem de teste 3\n");
        break;

    default:
        printf("Código a ser executado se variavel não corresponder a nenhum dos casos acima\n");
}


}