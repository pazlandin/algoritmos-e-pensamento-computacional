#include <stdio.h>

#define ALUNOS 3
#define AVALIACOES 4

int main() {
    float notas[ALUNOS][AVALIACOES];
    float soma, media, maiorMedia = 0;
    int i, j, melhorAluno = 0;

    for (i = 0; i < ALUNOS; i++) {
        for (j = 0; j < AVALIACOES; j++) {
            printf("Digite a %da nota do %do estudante: ", j + 1, i + 1);
            scanf("%f", &notas[i][j]);
        }
    }

    for (i = 0; i < ALUNOS; i++) {
        soma = 0;
        for (j = 0; j < AVALIACOES; j++) {
            soma += notas[i][j];
        }
        media = soma / AVALIACOES;
        printf("Media do estudante %d: %.2f\n", i + 1, media);

        if (i == 0 || media > maiorMedia) {
            maiorMedia = media;
            melhorAluno = i;
        }
    }

    printf("Maior media: estudante %d - %.2f\n", melhorAluno + 1, maiorMedia);

    return 0;
}
