#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
/*
Elabore uma função que receba duas strings como parâmetros e verifique se a segunda string
ocorre dentro da primeira. Use aritmética de ponteiros para acessar os caracteres das strings.

*/
char paramentronome(char *nome1, char *nome2)
{
    char *p1, *p2;

    while (*nome1)
    {
        p1 = nome1;
        p2 = nome2;

        while (*p1 && *p2 && *p1 == *p2)
        {
            p1++;
            p2++;
        }
        if (*p2 == '\0')
            return 1;
    }
    return 0;
}
int main()
{
    char n1[] = "programacao";
    char n2[] = "gramas";

    if (paramentronome(n1, n2))
    {
        printf("encontrou!\n");
    }
    else
    {
        printf("Não encontrou\n");
    }

    return 0;
}