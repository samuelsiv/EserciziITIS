#include <stdio.h>

int main()
{
    int numeri[11];
    int posizione = 0, numero;
    double somma = 0.0;
    double media = 0.0;

    while (posizione < 10) {
        printf("Inserisci un numero: ");
        scanf_s("%d", &numero);
        numeri[posizione] = numero;
        posizione++;
    }

    for (int i = 0; i < 10; i++) { // iteration negli elementi dell'array
        somma += numeri[i];
    }

    media = somma / 10; // 10 è il numero di quanti elementi ci sono nell'array

    printf("Media totale: %f", media);
}
