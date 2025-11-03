#include <stdio.h>
#include <stdlib.h>
int main()
/*Leia um inteiro **T** (1 T 20) e imprima a **tabuada** de 1 a T (ou somente a tabuada de um número informado). 
Formate como `a x b = c`.*/
{
    int T, i, j;

    scanf("%d", &T);

    if (T < 1 || T > 20)
    {
        printf("Valor fora do intervalo (1 a 20)\n");
        return 0;
    }

    for (i = 1; i <= T; i++)
    {
        for (j = 1; j <= 10; j++)
        {
            printf("%d x %d = %d\n", i, j, i * j);
        }
        
    }

    return 0;
}
