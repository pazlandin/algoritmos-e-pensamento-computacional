#include <stdio.h>

int main() {
    float peso, altura, imc;

    printf("Qual é o peso da pessoa em kg?\n");
    scanf("%f", &peso);

    printf("Qual é a altura da pessoa em metros?\n");
    scanf("%f", &altura);

    imc = peso / (altura * altura);

    printf("O Índice de Massa Corporal é %.2f\n", imc);

    return 0;
}