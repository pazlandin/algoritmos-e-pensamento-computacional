#include <stdio.h>

int main() {
    int numero, soma = 0;

    while (1) {
        printf("Digite um numero: ");
        scanf("%d", &numero);
        if (numero == 0) {
            break;
        }
        if (numero % 2 != 0) {
            soma += numero;
        }
    }

    printf("Soma dos numeros impares: %d\n", soma);

    return 0;
}
