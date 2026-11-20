#include <stdio.h>

int main() {
    int horas, minutos, total_minutos;

    printf("Digite a hora (0 a 23): ");
    scanf("%d", &horas);
    
    printf("Digite os minutos (0 a 59): ");
    scanf("%d", &minutos);

    total_minutos = (horas * 60) + minutos;

    printf("\n--- Resultado ---\n");
    printf("Horário informado: %02d:%02d\n", horas, minutos);
    printf("Total de minutos desde as 00h00: %d minutos\n", total_minutos);

    return 0;
}