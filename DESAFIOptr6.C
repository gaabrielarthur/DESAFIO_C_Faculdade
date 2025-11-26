#include <stdio.h>
#include <stdlib.h>

/*
6 . Elaborar um programa que leia dois valores inteiros (A e B). Em seguida faça uma função
que retorne a soma do dobro dos dois números lidos. A função deverá armazenar o dobro de
A na própria variável A e o dobro de B na própria variável B
*/

float chamado(float *a, float *b)
{
    *a = *a * 2;
    *b = *b * 2;

    return *a + *b;
}

int main()
{
    float a = 0.0;
    float b = 0.0;
    float resultado;

    printf("\nDigite o valor de A: ");
    scanf("%f", &a);

    printf("\nDigite o valor de B: ");
    scanf("%f", &b);

    resultado = chamado(&a, &b);

    printf("\nDobro de A =  %.2f", a);
    printf("\nDobro de B = %.2f", b);
    printf("\n\n");
    printf("\nA soma dos dois valores = %.2f ", resultado);

    return 0;
}