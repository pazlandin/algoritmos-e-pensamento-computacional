/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float media, frequencia;

    printf("Qual a média final do aluno? ");
    scanf("%f", &media);

    printf("Qual o percentual de frequência? ");
    scanf("%f", &frequencia);

    if (frequencia < 75)
    {
        printf("O aluno foi reprovado por falta\n");
    }
    else if (media < 6.0)
    {
        printf("O aluno foi reprovado por nota\n");
    }
    else
    {
        printf("O aluno foi aprovado\n");
    }

    return 0;
}