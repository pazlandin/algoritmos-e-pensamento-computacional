#include <stdio.h>

void exibirPontos(int pontos[], int tamanho) {
    int i;
    for (i = 0; i < tamanho; i++) {
        printf("%dº lugar: %d pontos\n", i + 1, pontos[i]);
    }
}

void insertionSort(int pontos[], int tamanho) {
    int i, j, valorAtual;
    for (i = 1; i < tamanho; i++) {
        valorAtual = pontos[i];
        j = i - 1;
        while (j >= 0 && pontos[j] < valorAtual) {
            pontos[j + 1] = pontos[j];
            j--;
        }
        pontos[j + 1] = valorAtual;
    }
}

int main() {
    int pontos[5] = {120, 340, 95, 410, 275};

    printf("Pontuacao antes de ordenar:\n");
    exibirPontos(pontos, 5);

    insertionSort(pontos, 5);

    printf("\nRanking final:\n");
    exibirPontos(pontos, 5);

    return 0;
}
