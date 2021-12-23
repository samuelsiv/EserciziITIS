#include <stdio.h>

int main()
{
    int numeri[11];
    int numero, posizione = 0;
    int d = 0;

    while (posizione < 10) {
        printf("Inserisci un numero: ");
        scanf_s("%d", &numero);
        numeri[posizione] = numero;
        posizione++;
    }

    for (int c = 9; c >= 0; c--, d++) { // iteration negli elementi dell'array
        printf("%d \n", numeri[c]);
    }
}
