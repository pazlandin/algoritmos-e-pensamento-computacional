#include <stdio.h>
#include <math.h>

int main() {
    float largura, comprimento, preco, area, custo;
    int caixas;

    scanf("%f %f %f", &largura, &comprimento, &preco);

    area = largura * comprimento;
    caixas = (int)ceil(area / 2.5);
    custo = caixas * preco;

    printf("Area total a ser revestida: %.2f\n", area);
    printf("Quantidade de caixas: %d\n", caixas);
    printf("Custo total da compra: R$ %.2f\n", custo);

    return 0;
}