#include <stdio.h>

int main (){
    int temperatura = 28;
    int resultado;

   resultado = temperatura >= 30 ? 1 : 0;

    if (temperatura >= 30) {
        printf("A temperatura está alta.\n");
        resultado = 1;
    } else {
        printf("A temperatura está baixa.\n");
        resultado = 0;
    }




return 0;
}