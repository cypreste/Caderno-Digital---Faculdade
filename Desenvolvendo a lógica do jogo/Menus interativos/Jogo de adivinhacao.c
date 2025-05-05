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
<<<<<<< HEAD
    case 1:
    srand(time(0));
    numeroSecreto = rand() % 10; // Gera um número aleatório entre 0 e 9
    printf("Digite um palpite entre 0 e 9: ");
    scanf("%d", &palpite);

    if(numeroSecreto == palpite) // Compare o palpite com o número secreto
    {
    printf("Parabens! Voce acertou!\n");
    printf("numero secreto: %d\n", numeroSecreto);
    } else {
    printf("Voce errou! O numero secreto era %d\n", numeroSecreto);
    }
=======
        case 1:
        srand(time(0));
        numeroSecreto = rand() % 10; // Gera um número aleatório entre 0 e 9
        printf("numero secreto: %d\n", numeroSecreto);
>>>>>>> 1cee930dda839f83f8f1e12b1ad1f11389e87ae1

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