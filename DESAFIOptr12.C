#include<stdio.h>
#include<stdlib.h>
/*
12.Faça um programa que leia três valores inteiros e chame uma função que receba estes 3
valores de entrada e retorne eles ordenados, ou seja, o menor valor na primeira variável, o
segundo menor valor na variável do meio, e o maior valor na última variável. A função deve
retornar o valor 1 se os três valores forem iguais e 0 se existirem valores diferentes. Exibir
os valores ordenados na tela.

*/
#include <stdio.h>

int ordenar(int *a, int *b, int *c) {
    int tempo;

    
    if (*a > *b) { tempo = *a; *a = *b; *b = tempo; }
    if (*a > *c) { tempo = *a; *a = *c; *c = tempo; }
    if (*b > *c) { tempo = *b; *b = *c; *c = tempo; }


    if (*a == *b && *b == *c)
        return 1;
    else
        return 0;
}

int main() {
    int a, b, c;
    int resultado;

    printf("Digite tres valores inteiros: ");
    scanf("%d %d %d", &a, &b, &c);

    resultado = ordenar(&a, &b, &c);

    printf("\nValores ordenados: %d  %d  %d\n", a, b, c);

    if (resultado == 1)
        printf("Retorno da funcao: 1 (todos os valores sao iguais)\n");
    else
        printf("Retorno da funcao: 0 (existem valores diferentes)\n");

    return 0;
}