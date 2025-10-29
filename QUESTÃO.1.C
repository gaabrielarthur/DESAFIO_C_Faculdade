#include <stdio.h>
#include <stdlib.h>
 /* Leia uma **matriz MxN** (1 M, N 100) de inteiros e um valor **X**. 
    Procure **X** na matriz e imprima todas as **posições (i, j)** onde ele aparece.
     Informe também a **quantidade total** de ocorrências. */
     
    int main(){
        int M, N, i, j, X, cont = 0;
        int matriz[100][100];

        
        scanf("%d %d", &M, &N);

        printf("Digite os elementos da matriz:\n");
        for (i = 0; i < M; i++)
        {
            for (j = 0; j < N; j++)
            {
                scanf("%d", &matriz[i][j]);
            }
        }

        printf("Digite o valor X a ser procurado: ");
        scanf("%d", &X);

        printf("\nPosicoes onde X aparece:\n");
        for (i = 0; i < M; i++)
        {
            for (j = 0; j < N; j++)
            {
                if (matriz[i][j] == X)
                {
                    printf("(%d, %d)\n", i, j);
                    cont++;
                }
            }
        }

        printf("\nTotal de ocorrencias de %d: %d\n", X, cont);

        return 0;
    
}