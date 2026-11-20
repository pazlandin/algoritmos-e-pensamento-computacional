#include <stdio.h>

int main() {
    float nota, soma = 0, maior = 0;
    int i;

    for (i = 1; i <= 5; i++) {
        printf("Digite a nota do %do estudante: ", i);
        scanf("%f", &nota);
        soma += nota;
        if (i == 1 || nota > maior) {
            maior = nota;
        }
    }

    printf("Media da turma: %.2f\n", soma / 5);
    printf("Maior nota: %.2f\n", maior);

    return 0;
}
