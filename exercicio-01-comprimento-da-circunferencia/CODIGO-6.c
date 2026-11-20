#include <stdio.h>

int main() {
    float raio, perimetro;
    const float PI = 3.14159;

    
    printf("Digite o raio da peca (cm): ");
    scanf("%f", &raio);

    
    perimetro = 2 * PI * raio;

    
    printf("Perimetro da circunferencia: %.2f cm\n", perimetro);

    return 0;
}