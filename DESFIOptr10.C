#include <stdio.h>
#include <stdlib.h>

int main()
{

    int array[5];
    int *ptr = array;

    for (int i = 0; i < 5; i++)
    {
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", ptr + i);
    }

    printf("\nDobro dos valores:\n");

    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", *(ptr + i) * 2);
    }

    return 0;
}