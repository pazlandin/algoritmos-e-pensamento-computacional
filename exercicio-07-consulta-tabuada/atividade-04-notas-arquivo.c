#include <stdio.h>

int main() {
    long rgm;
    float nota, soma = 0, maior = 0;
    int estudantes = 0, aprovados = 0;
    FILE *arquivo;

    arquivo = fopen("notas.txt", "r");
    if (arquivo == NULL) {
        printf("Arquivo notas.txt nao encontrado.\n");
        return 1;
    }

    while (fscanf(arquivo, "%ld %f", &rgm, &nota) == 2) {
        estudantes++;
        soma += nota;
        if (estudantes == 1 || nota > maior) {
            maior = nota;
        }
        if (nota >= 6.0) {
            aprovados++;
        }
    }

    fclose(arquivo);

    printf("Estudantes: %d\n", estudantes);
    if (estudantes > 0) {
        printf("Media da turma: %.2f\n", soma / estudantes);
        printf("Maior nota: %.2f\n", maior);
    }
    printf("Quantidade de alunos aprovados: %d\n", aprovados);

    return 0;
}
