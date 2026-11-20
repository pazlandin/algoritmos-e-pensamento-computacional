#include <stdio.h>

void exibirVetor(int vetor[], int tamanho) {
    int i;
    for (i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");
}

void bubbleSort(int vetor[], int tamanho) {
    int i, j, auxiliar;
    for (i = 0; i < tamanho - 1; i++) {
        for (j = 0; j < tamanho - 1 - i; j++) {
            if (vetor[j] > vetor[j + 1]) {
                auxiliar = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = auxiliar;
            }
        }
    }
}

int main() {
    int senhas[5] = {35, 12, 28, 7, 19};

    printf("Antes: ");
    exibirVetor(senhas, 5);

    bubbleSort(senhas, 5);

    printf("Depois: ");
    exibirVetor(senhas, 5);

    return 0;
}
