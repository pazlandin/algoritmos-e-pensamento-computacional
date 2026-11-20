#include <stdio.h>

#define PRODUTOS 3
#define DIAS 4

int main() {
    int vendas[PRODUTOS][DIAS];
    int i, j, totalProduto, totalGeral = 0;

    for (i = 0; i < PRODUTOS; i++) {
        for (j = 0; j < DIAS; j++) {
            printf("Digite a qtde do %do produto no %do dia: ", i + 1, j + 1);
            scanf("%d", &vendas[i][j]);
        }
    }

    for (i = 0; i < PRODUTOS; i++) {
        totalProduto = 0;
        for (j = 0; j < DIAS; j++) {
            totalProduto += vendas[i][j];
        }
        totalGeral += totalProduto;
        printf("Produto %d: %d unidades\n", i + 1, totalProduto);
    }

    printf("Total geral: %d unidades\n", totalGeral);

    return 0;
}
