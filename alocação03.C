#include <stdio.h>
#include <stdlib.h>
/*
Faça um programa que leia do usuário o tamanho de um vetor a ser lido e faça
a alocação dinâmica de memória. Em seguida, leia do usuário seus valores e
mostre quantos dos números são pares e quantos são ímpares.

*/
int main()
{
    int *vetor;
    int N;
    int pares = 0;
    int impares = 0;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &N);

    vetor = (int *)malloc(N * sizeof(int));

    if (vetor == NULL)
    {
        printf("Erro na alocacao de memoria!\n");
        return 1;
    }
    printf("Digite os %d valores:\n", N);
    for (int i = 0; i < N; i++)
    {
        printf("\nValor %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }
    for (int i = 0; i < N; i++)
    {
        if (vetor[i] % 2 == 0)
            pares++;

                else

                impares++;
    }

    printf("Quantidade de numeros pares: %d\n", pares);
    printf("Quantidade de numeros impares: %d\n", impares);

    free(vetor);

    return 0;
}