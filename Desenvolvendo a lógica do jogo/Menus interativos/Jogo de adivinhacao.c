#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main () {
    int opcao,regras;
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
    printf("Digite um palpite entre 0 e 9: ");
    scanf("%d", &palpite);

    if(numeroSecreto == palpite) // Compare o palpite com o número secreto
    {
    printf("Parabens! Voce acertou!\n");
    printf("O numero secreto era: %d\n", numeroSecreto);
    } else {
    printf("Voce errou! O numero secreto era %d\n", numeroSecreto);
    }
    break;

    case 2:
    printf("A explicacao das regras\n");
    printf("Escolha uma opcao de regra (1-5): ");
    scanf("%d", &regras); // Adicionei uma variável para capturar a opção de regras
    switch (regras)  // Adicionei uma variável para capturar a opção de regras
    {
    case 1:
        printf("Regras 1\n");
        printf("1. O jogador deve adivinhar um numero entre 0 e 9.\n");
        break;
    
        case 2:
        printf("Regras 2\n");
        printf("2. O jogador tem apenas uma tentativa.\n");
        break;

        case 3:
        printf("Regras 3\n");
        printf("3. Se o jogador acertar, ele ganha.\n");
        break;

        case 4:
        printf("Regras 4\n");
        printf("4. Se o jogador errar, ele perde.\n");
        break;

        case 5:
        printf("Regras 5\n");
        printf("5. O jogo termina quando o jogador acerta ou erra.\n");
        break;   
    default:
        break;
    }
    break;
        
    case 3:
        printf("Saindo do jogo...\n");
        exit(0); // Encerra o programa
     break;

    default:
    printf("Opcao invalida!\n");
    break;
    }

}