#include <stdio.h>
#include <stdlib.h>
// Faça um programa que leia um número e diga se ele é primo.

int main()
{

    int numero, aux = 0, i;

    printf("\nDigite um numero:  ");
    scanf("%d", &numero);

    if (numero <= 1)
    {
        printf("NAO EH PRIMO\n");
        return 0;
    }
    for (int i = 1; i <= numero; i++)
    {
        if (numero % i == 0)
        {
            aux++;
        }
    }

    if (aux == 2)
    {
        printf("ESTE NUMERO EH PRIMO\n");
    }
    else
    {
        printf("ESTE NUMERO NAO EH PRIMO\n");
    }

    return 0;
}
