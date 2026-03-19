#include <stdio.h>
#include <stdio.h>
/*
Faça uma função chamada ‘simplifica’ que recebe como parâmetro o numerador e o
denominador de uma fração. Esta função deve simplificar a fração recebida dividindo o
numerador e o denominador pelo maior fator possível. 

Por exemplo, a fração 36/60 simplifica 
para 3/5 dividindo o numerador e o denominador por 12. A função deve modificar as variáveis
passadas como parâmetro sem recursão.
*/
// Função do MDC
int mdc(int a, int b)
{
    while (b != 0)
    {
        int temp = b; // Armazena valor de b
        b = a % b; // resto da divisão de a por b 
        a = temp;
    }

    return a;
}
void simplifica(int *numerador, int *denominador)
{
    int divisor = mdc(*numerador, *denominador);
    *numerador /= divisor;
    *denominador /= divisor;
}

int main()
{

    int n1;
    int n2;

    printf("\nDigite o numerador: ");
    scanf("%d", &n1);
    printf("\nDigite o denominador: ");
    scanf("%d", &n2);

    simplifica(&n1, &n2);

    printf("\nRESULTADO: %d / %d\n", n1, n2);

    return 0;
}