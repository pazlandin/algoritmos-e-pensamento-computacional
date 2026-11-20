#include <stdio.h>

int main() {
    int manha, tarde, total;

    printf("Digite a quantidade de produtos recebidos no turno da manhã: ");
    scanf("%d", &manha);

    printf("Digite a quantidade de produtos recebidos no turno da tarde: ");
    scanf("%d", &tarde);

    total = manha + tarde;

    printf("\n--- Resumo do Recebimento ---\n");
    printf("Manhã: %d produtos\n", manha);
    printf("Tarde: %d produtos\n", tarde);
    printf("Total geral: %d produtos\n", total);

    return 0;
}