/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    char tipo;
    int diarias;
    float valor, total;

    printf("Qual o tipo de hospedagem (S-D-T)? ");
    scanf(" %c", &tipo);

    printf("Qual a quantidade de diarias? ");
    scanf("%d", &diarias);

    switch (tipo)
    {
        case 'S':
        case 's':
            valor = 300;
            break;

        case 'D':
        case 'd':
            valor = 450;
            break;

        case 'T':
        case 't':
            valor = 500;
            break;

        default:
            printf("Tipo invalido!!!\n");
            return 0;
    }

    total = valor * diarias;

    printf("Valor total a pagar: R$ %.2f\n", total);

    return 0;
}