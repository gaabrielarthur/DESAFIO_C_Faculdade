#include <stdio.h>
#include <stdlib.h>
// nome da função    // variavel da função
float maior(float num1, float num2)
{
    if (num1 > num2)
        return num1;
    else
        return num2;
}

int main()
{
    float x, y, m;
    printf("\nInsira um valor:"); 
    scanf("%f", &x);
    printf("\nInsira mais um valor:");
    scanf("%f", &y);

    m = maior(x, y);

    printf("Maior: %.2f\n", m);
}
