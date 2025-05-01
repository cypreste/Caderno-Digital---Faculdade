#include <stdio.h>

int main () {
    int idade;
    float renda;

    // Verificador, desconto baseado na idade e na renda, para ter desconto precisa ter mais de 60 ou menos de 18 e ter uma renda menor que 2000    
    printf("Digite a sua idade: ");
    scanf("%d", &idade);
    printf("Digite a sua renda: ");
    scanf("%f", &renda);

    if (idade <= 18 || idade >= 60) {
        if (renda < 2000) {
            printf("Voce tem direito a desconto\n");
        } else {
            printf("Voce nao tem direito a desconto\n");
        }
    } else {
        printf("Voce nao tem direito a desconto\n");
    }
    return 0;
}