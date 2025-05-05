#include <stdio.h>

int main () {
    int nota;
    printf("Digite a nota (0-10): ");
    scanf("%d", &nota);
    /* 
        A >= 90
        B >= 80
        C >= 70
        D >= 60
        F 
    */
    if (nota >= 90) {
        printf("Voce tirou A!\n");
    } else if (nota >= 80) {
        printf("Voce tirou B!\n");
    } else if (nota >= 70) {
        printf("Voce tirou C!\n");
    } else if (nota >= 60) {
        printf("Voce tirou D!\n");
    } else if (nota >= 0) {
        printf("Voce tirou F!\n");
    } else {
        printf("Nota invalida!\n");
    }
    return 0;