#include <stdio.h>

int main() {
    int q;
    float p = 4.50;
    float t = 0;

    printf("Quantidade de cafes: ");
    scanf("%d", &q);
    
    t = q * p;
    
    printf("Total: R$ %.2f\n", t);
    
    return 0;
}