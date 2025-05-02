#include <stdio.h>

int main (){

    int idade, dependentes;
    float renda;   

    // A primeira condicao idade do usuario entre 18 e 65 anos.
    // A segunda condicao renda do usuario menor que 3000 reais.
    // A terceira condicao verifica se o numero de dependentes e maior que 2.

    printf("Digite a sua idade: ");
    scanf("%d", &idade);
    printf("Digite a sua renda mensal: ");
    scanf("%f", &renda);
    printf("Digite o numero de dependentes: ");
    scanf("%d", &dependentes);

    if (idade >= 18 && idade <= 65) {
        printf("Voce tem direito a um beneficio social\n");
        if (renda < 3000) {
            printf("Voce tem direito ao beneficio social\n");
        } else {
            printf("Voce nao tem direito ao beneficio social\n");
        } if (dependentes > 2) {
            printf("Voce tem direito ao beneficio social\n");
        } else {
            printf("Voce nao tem direito ao beneficio social\n");
        }
            
    




}