#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
/*
Considere a seguinte declaração: int A, *B, **C, ***D. Escreva um programa que leia a
variável A, calcule e exiba o dobro, o triplo e o quádruplo desse valor utilizando apenas os
ponteiros B, C e D. O ponteiro B deve ser usada para calcular o dobro, C o triplo e D o
quádruplo.

*/
int main()
{
    int A; // varaivel A 
    int *B, **C, ***D; // declarei os ponteiros de ponteiros 

    do
    {
        printf("\nDigite um valor para A (0 para sair): ");
        scanf("%d", &A); // vou digita um valor pra A
        B = &A; // B GUARDA O VALOR DE A
        C = &B; // C GUARDA O VALOR DE B
        D = &C; // D GUARDA O VALOR DE C

        printf("\nDOBRO: %d", (*B) * 2);
        printf("\nTRIPLO: %d", (**C) * 3);
        printf("\nQUADRUPOLO: %d", (***D) * 4);

    } while (A != 0);

        return 0;
}