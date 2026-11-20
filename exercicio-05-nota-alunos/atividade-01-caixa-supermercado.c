#include <stdio.h>

int main() {
    char cpf[12];
    float preco, total = 0;

    printf("CPF: ");
    scanf("%11s", cpf);

    do {
        printf("Preco: ");
        scanf("%f", &preco);
        total += preco;
    } while (preco != 0);

    printf("CPF: %s\n", cpf);
    printf("Total da compra: R$ %.2f\n", total);

    return 0;
}
