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
        printf("\n***Fim do bloco de codigo***\n");
        break; // O break é importante para não executar o próximo bloco de código

    case 2:
        printf("Código a ser executado se variavel == 2\n");
        printf("Mensagem de teste\n");
        printf("Mensagem de teste 2\n");
        printf("Mensagem de teste 3\n");
        printf("\n***Fim do bloco de codigo***\n");
        break;

    default: // O default é o bloco de código que será executado se nenhum dos casos acima for verdadeiro
        printf("Código a ser executado se variavel não corresponder a nenhum dos casos acima\n");
}


}