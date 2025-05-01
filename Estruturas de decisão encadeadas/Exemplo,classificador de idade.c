#include <stdio.h>
/* Crianca (0-12 anos)
    Adolescente (13-17 anos)
    Adulto (18-64 anos)
    Idoso (65-120 anos)
    Idade invalida (qualquer outro valor)
*/
    int main () {
            int idade;
            printf("Digite a idade: ");
            scanf("%d", &idade);
            if (idade >= 0 && idade <= 12) {
                printf("Voce e uma Crianca!\n");
            } else if (idade >= 13 && idade <= 17) {
                printf("Voce e um Adolescente!\n");
            } else if (idade >= 18 && idade <= 64) {
                printf("Voce e um Adulto!\n");
            } else if (idade >= 65 && idade <= 120) {
                printf("Voce e um Idoso!\n");
            } else {
                printf("Idade invalida!\n");
            }
            return 0;

    }