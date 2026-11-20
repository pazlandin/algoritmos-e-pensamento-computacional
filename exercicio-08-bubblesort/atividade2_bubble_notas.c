#include <stdio.h>

void exibirNotas(float notas[], int tamanho) {
    int i;
    for (i = 0; i < tamanho; i++) {
        printf("%.1f ", notas[i]);
    }
    printf("\n");
}

void ordenarNotas(float notas[], int tamanho) {
    int i, j;
    float auxiliar;
    for (i = 0; i < tamanho - 1; i++) {
        for (j = 0; j < tamanho - 1 - i; j++) {
            if (notas[j] < notas[j + 1]) {
                auxiliar = notas[j];
                notas[j] = notas[j + 1];
                notas[j + 1] = auxiliar;
            }
        }
    }
}

int main() {
    float notas[5] = {6.5, 9.0, 7.5, 5.0, 8.0};

    printf("Antes: ");
    exibirNotas(notas, 5);

    ordenarNotas(notas, 5);

    printf("Depois: ");
    exibirNotas(notas, 5);

    return 0;
}
