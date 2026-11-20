#include <stdio.h>

int main() {
    float salarios[4];
    int i;

    for (i = 0; i < 4; i++) {
        printf("Digite o salario do %do funcionario: ", i + 1);
        scanf("%f", &salarios[i]);
    }

    for (i = 0; i < 4; i++) {
        printf("Funcionario %d: R$ %.2f\n", i + 1, salarios[i]);
    }

    return 0;
}
