#include <stdio.h>
#include <stdlib.h>
int main()
{

    int i, numero, aux;
    printf("digite um valor para saber se ele e primo: ");
    scanf("%d", &numero);

    for (int i = 1; i <= numero; i++)
    {
        if (numero % i == 0 )
        {
            aux++;
        }
        printf(" %d / %d tem o resto = %d \n", numero, i, numero % i);
    }

    if (aux == 2)
    {
        printf("O numero e primo!");
    }
    else
    {
        printf("O numero nao e primo!");
    }
    return 0;
}