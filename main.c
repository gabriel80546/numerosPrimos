#include <stdio.h>
#include <stdlib.h>

int divisivel (int a, int b) {
    if (a % b == 0) {
        return 1;
    } else {
        return 0;
    }
}

int isPrime(int n) {
    int i = 0;
    int counter = 0;

    if (n == 1) {
        return 0;
    }
    for(i = 1; i < n; i++) {
        if (divisivel(n, i) == 1) {
            counter++;
        }
    }
    //printf("counter = %i, n = %i\n", counter, n);
    if (counter == 1 || n == 2 || n == 3) {
        return 1;
    } else {
        return 0;
    }
}


int printa(int n, int ehPrimo) {
    if(n < 10) {
        printf("00%i %c primo\n", n, (ehPrimo == 1 ? '=' : 'n'));
    } else if(n < 100) {
        printf("0%i %c primo\n", n, (ehPrimo == 1 ? '=' : 'n'));
    } else {
        printf("%i %c primo\n", n, (ehPrimo == 1 ? '=' : 'n'));
    }
}


int main() {
    int i;

    printf("Olá mundo!\n");
    for (i = 1; i <= 100; i++) {
        printa(i, isPrime(i));
    }
    return 0;
}
