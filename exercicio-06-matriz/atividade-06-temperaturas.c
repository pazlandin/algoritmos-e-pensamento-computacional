#include <stdio.h>

int main() {
    float temperaturas[7], soma = 0, media, maior, menor;
    char *dias[7] = {"seg", "ter", "qua", "qui", "sex", "sab", "dom"};
    int i, acima = 0;

    for (i = 0; i < 7; i++) {
        printf("Digite a temperatura da [%s]: ", dias[i]);
        scanf("%f", &temperaturas[i]);
        soma += temperaturas[i];
    }

    media = soma / 7;
    maior = temperaturas[0];
    menor = temperaturas[0];

    for (i = 0; i < 7; i++) {
        if (temperaturas[i] > maior) maior = temperaturas[i];
        if (temperaturas[i] < menor) menor = temperaturas[i];
        if (temperaturas[i] > media) acima++;
    }

    printf("Media: %.2f C\n", media);
    printf("Maior temperatura: %.2f C\n", maior);
    printf("Menor temperatura: %.2f C\n", menor);
    printf("Dias acima da media: %d\n", acima);

    return 0;
}
