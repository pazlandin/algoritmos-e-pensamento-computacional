#include <stdio.h>

int main() {
    int quantidade, i;
    char dia[10];
    float consumo;
    FILE *arquivo;

    printf("Quantidade de registros: ");
    scanf("%d", &quantidade);

    arquivo = fopen("consumo.txt", "a");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    for (i = 0; i < quantidade; i++) {
        printf("Dia: ");
        scanf("%9s", dia);
        printf("Consumo: ");
        scanf("%f", &consumo);
        fprintf(arquivo, "%s %.2f\n", dia, consumo);
    }

    fclose(arquivo);
    printf("Registros acrescentados em consumo.txt\n");

    return 0;
}
