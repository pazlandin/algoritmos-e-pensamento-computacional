#include <stdio.h>

int main() {
    int h, m;
    float p, hd;
    
    printf("Hora e minutos: ");
    scanf("%d %d", &h, &m);
    printf("Total de minutos: %d\n", (h * 60) + m);
    
    printf("Potencia (W): ");
    scanf("%f", &p);
    printf("Horas por dia: ");
    scanf("%f", &hd);
    printf("Consumo mensal: %.2f kWh\n", (p * hd * 30) / 1000.0);
    
    return 0;
}