#include <stdio.h>
#include <stdlib.h>
/*
9. Crie um programa que contenha uma matriz de float contendo 3 linhas e 3 colunas. Imprima
o endereço de cada posição dessa matriz.

*/
int main()
{
    float matriz[3][3];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("\nEndereco de matriz [%d][%d] = %p", i, j, (void*)&matriz[i][j]);
        }

        return 0;
    }
}