#include <stdio.h>

int main() {
    int opcao, mes, registros;
    float consumo, total, maior;
    FILE *arquivo;

    do {
        printf("\n1- Cadastrar consumo\n");
        printf("2- Exibir relatorio\n");
        printf("3- Sair\n");
        printf("Opcao: ");
        scanf("%d", &opcao);

        if (opcao == 1) {
            printf("Numero do mes: ");
            scanf("%d", &mes);
            printf("Consumo (kWh): ");
            scanf("%f", &consumo);

            arquivo = fopen("energia.txt", "a");
            if (arquivo == NULL) {
                printf("Erro ao abrir o arquivo.\n");
            } else {
                fprintf(arquivo, "%d %.2f\n", mes, consumo);
                fclose(arquivo);
                printf("Consumo cadastrado!\n");
            }
        } else if (opcao == 2) {
            arquivo = fopen("energia.txt", "r");
            if (arquivo == NULL) {
                printf("Nenhum consumo cadastrado.\n");
            } else {
                registros = 0;
                total = 0;
                maior = 0;
                printf("\nMes  Consumo (kWh)\n");
                while (fscanf(arquivo, "%d %f", &mes, &consumo) == 2) {
                    printf("%3d  %.2f\n", mes, consumo);
                    registros++;
                    total += consumo;
                    if (registros == 1 || consumo > maior) {
                        maior = consumo;
                    }
                }
                fclose(arquivo);

                printf("Total de registros: %d\n", registros);
                printf("Consumo total: %.2f kWh\n", total);
                if (registros > 0) {
                    printf("Consumo medio: %.2f kWh\n", total / registros);
                    printf("Maior consumo: %.2f kWh\n", maior);
                }
            }
        } else if (opcao == 3) {
            printf("Encerrando...\n");
        } else {
            printf("Opcao invalida!\n");
        }
    } while (opcao != 3);

    return 0;
}
