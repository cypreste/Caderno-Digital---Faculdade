#include <stdio.h>

/* Idoso (65+ anos)
   Adulto (18-64 anos)
    Adolescente (13-17 anos)
    Crianca (0-12 anos)
    Idade invalida (qualquer outro valor)
*/

int main () {
    int idade;
    printf("Digite a idade: ");
    scanf("%d", &idade);
    if (idade >= 65) {
        printf("Voce e um Idoso!\n");
    } else if (idade >= 18) {
        printf("Voce e um Adulto!\n");
    } else if (idade >= 13) {
        printf("Voce e um Adolescente!\n");
    } else if (idade >= 0) {
        printf("Voce e uma Crianca!\n");
    } else {
        printf("Idade invalida!\n");
    }
    return 0;
}

