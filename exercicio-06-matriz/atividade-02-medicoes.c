#include <stdio.h>

int main() {
    float valores[8], soma = 0, media;
    int i, acima = 0;

    for (i = 0; i < 8; i++) {
        printf("Digite o %do valor: ", i + 1);
        scanf("%f", &valores[i]);
        soma += valores[i];
    }

    media = soma / 8;

    for (i = 0; i < 8; i++) {
        if (valores[i] > media) {
            acima++;
        }
    }

    printf("Media: %.2f\n", media);
    printf("Valores acima da media: %d\n", acima);

    return 0;
}
