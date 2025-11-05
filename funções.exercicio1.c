#include <stdio.h>
#include <stdlib.h>

/*
Crie um programa que: - Tenha uma função chamada
calcular_media que receba 3 notas (float). - A função deve
retornar a média aritmética. - No main, chame a função e exiba a
média formatada.

*/
float calcular_media(float n1, float n2)
{
    return (n1 + n2) / 2 ;
}

int main()
{
    float a = 10;
    float b = 25;
    float resultado;
    resultado = calcular_media(a,b);
    printf("Media : %.2f", resultado);
}
