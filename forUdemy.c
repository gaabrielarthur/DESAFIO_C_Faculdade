#include <stdio.h>
#include <stdlib.h>
int main()
{

    /*
    FAÇA UM PROGRAMA QUE MOSTRE A TABUADA DE UM NÚMERO INFORMADO PELO USUÁRIO
    */
    int i, resultado;
    printf("Informe um numero: ");
    scanf("%d", &resultado);
    for (int i = 1; i <= 10; i++)
    {

        printf("%d x %d = %d\n", resultado, i, resultado * i);
    }

    return 0;
}