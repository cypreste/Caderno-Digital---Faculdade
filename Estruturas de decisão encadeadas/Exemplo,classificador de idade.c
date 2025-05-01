#include <stdio.h>
/* Crianca (0-12 anos)
    Adolescente (13-17 anos)
    Adulto (18-64 anos)
*/
    int main () {
            int idade;
            printf("Digite a idade: ");
            scanf("%d", &idade);
            if (idade >= 0 && idade <= 12) {
                printf("Crianca\n");
            } else if (idade >= 13 && idade <= 17) {
                printf("Adolescente\n");
            } else if (idade >= 18 && idade <= 64) {
                printf("Adulto\n");
            } else if (idade >= 65 && idade <= 120) {
                printf("Idoso\n");
            } else {
                printf("Idade invalida\n");
            }
            return 0;

    }