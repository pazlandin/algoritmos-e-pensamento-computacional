#include <stdio.h>

int main() {
    int codigo, quantidade = 0;
    float valor, total = 0, maior = 0;
    FILE *arquivo;

    arquivo = fopen("vendas.txt", "r");
    if (arquivo == NULL) {
        printf("Arquivo vendas.txt nao encontrado.\n");
        return 1;
    }

    while (fscanf(arquivo, "%d %f", &codigo, &valor) == 2) {
        quantidade++;
        total += valor;
        if (quantidade == 1 || valor > maior) {
            maior = valor;
        }
    }

    fclose(arquivo);

    printf("Quantidade de vendas: %d\n", quantidade);
    printf("Total vendido: R$ %.2f\n", total);
    printf("Maior venda: R$ %.2f\n", maior);

    return 0;
}
