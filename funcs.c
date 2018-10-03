#include <stdio.h>

int fatorial(int A)
{
    int i;
    int fat;

    for(fat = 1; A > 1; A = A - 1) {
        fat = fat * A;
    }

    return fat;
}

int expoente(int A, int exp)
{
    int i, res = 1;

    for(i = 0; i < exp; i++) {
        res = res * A;
    }

    return res;
}
