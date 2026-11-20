#include <stdio.h>

int main() {
    int conta, senha, tentativas = 0, autorizado = 0;

    do {
        printf("Conta: ");
        scanf("%d", &conta);
        printf("Senha: ");
        scanf("%d", &senha);
        tentativas++;

        if (conta == 12345 && senha == 123) {
            autorizado = 1;
        }
    } while (!autorizado && tentativas < 3);

    if (autorizado) {
        printf("Acesso autorizado.\n");
    } else {
        printf("Acesso bloqueado.\n");
    }

    return 0;
}
