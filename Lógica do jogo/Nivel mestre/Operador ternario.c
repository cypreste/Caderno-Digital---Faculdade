#include <stdio.h>

int main () {
    int idade = 19;
    int resultado;

    resultado = idade >= 18 ? 1 : 0; // operador ternário

    if (resultado == 1) {
        printf("Voce e maior de idade\n");
    } else {
        printf("Voce e menor de idade\n");
    }
   
return 0;
}