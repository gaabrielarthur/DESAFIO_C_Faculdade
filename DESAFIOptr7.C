#include <stdio.h>
#include <stdlib.h>
/*
7. Crie um programa que contenha uma função que permita passar por parâmetro dois números
inteiros A e B. A função deverá calcular a soma entre estes dois números e armazenar o
resultado na variável A. Esta função não deverá possuir retorno, mas deverá modificar o
valor do primeiro parametro. Imprima os valores de A e B na função principal.
*/

int chamado(int *a, int b)
{
    *a = *a + b;
}

int main()
{
    int a1;
    int b1;
    
    printf("\nDigite um valor para A1: ");
    scanf("%d", &a1);

    printf("\nDigite um valor para B1: ");
    scanf("%d", &b1);

    chamado(&a1, b1);
printf("\n-------Apos a funcao-------\n");
    printf("\nValor de A1 %d", a1);
    printf("\nValor de b1 = %d\n", b1);



    

    return 0;
}