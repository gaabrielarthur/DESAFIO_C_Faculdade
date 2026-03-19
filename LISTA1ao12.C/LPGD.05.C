#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
/*
Crie um programa que contenha uma função que permita passar por parâmetro dois números
inteiros A e B. A função deverá calcular a soma entre estes dois números e armazenar o
resultado na variável A. Esta função não deverá possuir retorno, mas deverá modificar o valor
do primeiro parâmetro. Imprima os valores de A e B na função principal
*/
// void significa que não tem retorno nenhum
void parametro(int *A, int B) //*a recebe o endereço de uma variavel , b recebe o valor de um inteiro !
{
    *A = *A + B;
    // *A = *A + B;
    // *A = 5 + 3;
    // *A = 8; O VALOR NA MAIN PASSA A VALER 8 
}
int main()
{
    int A, B;

    printf("\nDigite o numero de A: ");
    scanf("%d", &A);
    printf("\nDigite o valor de b: ");
    scanf("%d", &B);

    parametro(&A, B);

    printf("\nVALOR DE A: %d", A);
    printf("\nVALOR DE B: %d", B);

    return 0;
}