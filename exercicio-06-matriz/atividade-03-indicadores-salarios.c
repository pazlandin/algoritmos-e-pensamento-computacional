#include <stdio.h>

int main() {
    float salarios[6], soma = 0, media, maior;
    int i, abaixo = 0;

    for (i = 0; i < 6; i++) {
        printf("Digite o salario do %do funcionario: ", i + 1);
        scanf("%f", &salarios[i]);
        soma += salarios[i];
    }

    media = soma / 6;
    maior = salarios[0];

    for (i = 0; i < 6; i++) {
        if (salarios[i] > maior) {
            maior = salarios[i];
        }
        if (salarios[i] < media) {
            abaixo++;
        }
    }

    printf("Media salarial: R$ %.2f\n", media);
    printf("Maior salario: R$ %.2f\n", maior);
    printf("Salarios abaixo da media: %d\n", abaixo);

    return 0;
}
