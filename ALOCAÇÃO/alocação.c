#include <stdio.h>
#include <stdlib.h>
int main()
{
    // SIZEOF serve para retorna o numeros de bytes de um dado
    printf("\nint: %d", sizeof(int));       // 4 bytes
    printf("\nfloat: %d", sizeof(float));   // 4 bytes
    printf("\nchar: %d", sizeof(char));     // 1 bytes
    printf("\ndouble: %d", sizeof(double)); // 8 bytes

    // diferença do malloc e o calloc 
    // MALLOC inicializa com numeros aleatorios 
    // CALLOC incializa tudo com 0
    int *p, *p1;
    p = (int *)malloc(5* sizeof(int));
    p1 = (int *)calloc(5, sizeof(int));
    printf("\n\nmalloc \t\t calloc\n");
    for (int i = 0; i < 5; i++)
    {
        printf("p[%d] = %d \t", i, p[i]);
        printf("p1[%d] = %d \n", i, p1[i]);
    }

    free(p);
    free(p1);

    return 0;
}