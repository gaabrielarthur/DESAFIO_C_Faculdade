#include <stdio.h>
#include <stdlib.h>
int main()
{

    float *v;
    int i;
    int n;
    float nota;

    // pergunto ao usuario quantas notas vão ser discadas
    printf("\nQual o numero de notas: ");
    scanf("%d", &n);

    // aloco o espaço suficiente para o vetor de n notas
    v = (float *)malloc(n * sizeof(float));
    if (!v)
    {
        printf("Não foi possivel alocar o vetor");
        exit(0);
    }

    // carrego o vetor de notas
    for (i = 0; i < n; i++)
    {
        printf("\nENTRE COM A NOTA: ");
        scanf("%f", &nota);
        v[i] = nota;
    }

    // imprimi o vetor
    for (i = 0; i < n; i++)
    {
        printf("\nNota: %f\n", v[i]);
    }

    // desaloco o vetor
    free(v);

    return 0;
}