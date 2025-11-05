#include <stdio.h>
#include <stdlib.h>
float calcular_media(float n1, float n2, float n3)
{
    return (n1 + n2 + n3) / 3;
}

int main()
{
    float a = 0;
    float b = 0;
    float c = 0;
    float resultado;
    printf("Digite o valor de A: ");
    scanf("%f", &a);
    printf("Digite o valor de B: ");
    scanf("%f", &b);
    printf("Digite o valor de C: ");
    scanf("%f", &c);
    resultado = calcular_media( a, b, c);
    printf("MEDIA: %.2f", resultado);
}