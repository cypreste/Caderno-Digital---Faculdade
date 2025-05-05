#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main () {
    int opcao;
    int numeroSecreto, palpite;

    printf("Menu principal\n");
    printf("1. Iniciar jogo\n");
    printf("2. Ver regras\n");
    printf("3. Sair\n");
    printf("Escolha uma opcao: ");
    scanf("%d", &opcao);

    switch (opcao)
    {
        case 1:
        srand(time(0));
        numeroSecreto = rand() % 10; // Gera um número aleatório entre 0 e 9
        printf("numero secreto: %d\n", numeroSecreto);

        break;
        case 2:

        break;
        case 3:


        break;
        default:
            printf("Opcao invalida!\n");
            break;
    }



}