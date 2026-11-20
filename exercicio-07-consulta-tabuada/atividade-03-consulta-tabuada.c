#include <stdio.h>

int main() {
    char linha[100];
    FILE *arquivo;

    arquivo = fopen("tabuada.txt", "r");
    if (arquivo == NULL) {
        printf("Arquivo tabuada.txt nao encontrado.\n");
        return 1;
    }

    while (fgets(linha, sizeof(linha), arquivo) != NULL) {
        printf("%s", linha);
    }

    fclose(arquivo);

    return 0;
}
