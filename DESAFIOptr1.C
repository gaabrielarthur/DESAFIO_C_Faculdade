#include <stdio.h>
#include <stdlib.h>
/*
1. Escreva um programa que declare um inteiro, um real e um char, e ponteiros para inteiro,
real, e char. Associe as variáveis aos ponteiros (use &).

Modifique os valores de cada variável usando os ponteiros. Imprima os valores das variáveis antes e após a modificação.

*/
int main()
{
    int n1 = 1;
    float n2 = 2.5;
    char n3 = 'A';

    int *pn1;
    float *pn2;
    char *pn3;

   // Associando os ponteiros às variáveis
    pn1 = &n1;
    pn2 = &n2;
    pn3 = &n3;
    // Imprimindo antes da modificação
    printf("\nn1 = %d", n1);
    printf("\nn2 = %.2f", n2);
    printf("\nn3 = %c", n3);

    printf("\n\n");

    printf("\n------------DADOS MODIFICADOS---------------------\n");

    *pn1 = 2;
    *pn2 = 5.0;
    *pn3 = 'B';

    printf("\nN1 = %d", n1);
    printf("\nN2 = %.2f", n2);
    printf("\nN3 = %c", n3);

    return 0;
}