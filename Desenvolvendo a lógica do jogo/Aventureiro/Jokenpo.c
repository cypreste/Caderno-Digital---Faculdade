/*
Regras do Jogo Jokenpo:
1. O jogador deve escolher entre Pedra, Papel ou Tesoura.
2. O computador também escolhe entre Pedra, Papel ou Tesoura.
3. O vencedor é determinado pelas regras:
   - Pedra vence Tesoura.
   - Tesoura vence Papel.
   - Papel vence Pedra.
4. Se ambos escolherem a mesma opção, é um empate.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {
    int escolhaJogador, escolhaComputador;
    srand(time(0)); // Inicializa o gerador de números aleatórios

    printf("**Jogo de Jokenpo**\n");
    printf("Escolha uma opcao:\n");
    printf("1. Pedra\n");
    printf("2. Papel\n");
    printf("3. Tesoura\n");
    printf("Digite sua escolha (1-3): ");
        scanf("%d", &escolhaJogador);

    //Escolha do computador
    escolhaComputador = rand() % 3 + 1; // Gera um número aleatório entre 1 e 3
        printf("Escolha do computador: %d\n", escolhaComputador);

    switch (escolhaJogador)
    {
    case 1:
        printf("Voce escolheu Pedra\n");
        break;
    case 2:
        printf("Voce escolheu Papel\n");
        break;
    case 3:
        printf("Voce escolheu Tesoura\n");
        break;
    default:
        printf("Escolha invalida! Tente novamente.\n");
    }

    switch (escolhaComputador)
    {
    case 1:
        printf("Computador escolheu *PEDRA*\n");
        break;
    case 2:
        printf("Computador escolheu *PAPEL*\n");
        break;
    case 3:
        printf("Computador escolheu *TESOURA*\n");
        break;
    }

    //Logica do jogo
    if (escolhaJogador == escolhaComputador) {
        printf("Empate!\n");
    } else if ((escolhaJogador == 1 && escolhaComputador == 3) || // Pedra vence Tesoura
               (escolhaJogador == 2 && escolhaComputador == 1) || // Papel vence Pedra
               (escolhaJogador == 3 && escolhaComputador == 2)) { // Tesoura vence Papel
        printf("Voce venceu!\n");
    } else {
        printf("Voce perdeu!\n");
    }

    return 0;













}
