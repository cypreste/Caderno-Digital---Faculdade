#include <stdio.h>

int main () {
    int opcao;

    printf{"Menu principal\n"};
    printf{"1. Iniciar jogo\n"};
    printf{"2. Ver regras\n"};
    printf{"3. Sair\n"};
    printf{"Escolha uma opcao: "};
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            printf("Execucao do jogo\n");
            break;
        case 2:
            printf("As regras do jogo sao:\n");
            printf("1. Regra 1\n");
            printf("2. Regra 2\n");
            break;
        case 3:
            printf("Saindo do jogo...\n");
            break;
        default:
            printf("Opcao invalida!\n");
            break;
    }
    return 0;
}