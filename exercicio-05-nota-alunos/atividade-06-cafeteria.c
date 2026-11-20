#include <stdio.h>

int main() {
    int opcao;
    float total = 0;

    printf("Cafeteria Analia\n\n");
    printf("[1] X-Burger (R$ 18,90)\n");
    printf("[2] Batata frita (R$ 9,50)\n");
    printf("[3] Suco (R$ 10,00)\n");
    printf("[4] Pudim (R$ 12,00)\n");
    printf("[0] Finalizar\n\n");

    do {
        printf("Digite uma opcao: ");
        scanf("%d", &opcao);

        if (opcao == 1) {
            total += 18.90;
        } else if (opcao == 2) {
            total += 9.50;
        } else if (opcao == 3) {
            total += 10.00;
        } else if (opcao == 4) {
            total += 12.00;
        } else if (opcao != 0) {
            printf("Opcao invalida!\n");
            continue;
        }

        if (opcao != 0) {
            printf("Subtotal: R$ %.2f\n", total);
        }
    } while (opcao != 0);

    printf("Total do pedido: R$ %.2f\n", total);

    return 0;
}
