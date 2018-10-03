#include <stdio.h>
#include "funcs.h"

void main() {
    int A, exp, op;

    printf("\n1- Fatorial\n2- Expoente\n\nDigite uma opcao: ");
    scanf("%d", &op);

    switch(op) {
    case 1:
        printf("Digite um numero: ");
        scanf("%d", &A);

        printf("Fatorial: %d", fatorial(A));
        break;
    case 2:
        printf("Digite um numero: ");
        scanf("%d", &A);

        printf("Digite um expoente: ");
        scanf("%d", &exp);

        printf("Expoente: %d", expoente(A, exp));
        break;
    }
}
