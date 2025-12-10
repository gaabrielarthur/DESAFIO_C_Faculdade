#include <stdio.h>
#include <stdlib.h>
/*
2. Faça um programa que leia do usuário o tamanho de um vetor a ser lido e faça
a alocação dinâmica de memória. Em seguida, leia do usuário seus valores e
imprima o vetor lido.
*/
int main()
{

    int *vet;
    int N;
     // 1. Ler o tamanho do vetor
    printf("Digite o tamanho vetor: ");
    scanf("%d", &N);

     // 2. Alocação dinâmica
    vet = (int *)malloc(N * sizeof(int));

    if (vet == NULL)
    {
        printf("ERRO NA ALOCACAO DE MEMORIA !\n");
        return 1;
    }
    // 3. Ler os valores do vetor
    printf("Digite %d valores:\n", N);
    for (int i = 0; i < N; i++)
    {
        printf("Valor %d: ", i + 1);
        scanf("%d", &vet[i]);
    }
    // 4. Imprimir o vetor
    printf("\nvalores digitados: ");
    for (int i = 0; i < N; i++)
    {
        printf("%d", vet[i]);
    }
    // 5. Liberar a memória alocada
    free(vet);

    return 0;
}