#include <stdio.h>
#include <stdlib.h>
int main()
{
    // adicionar informação dentro do arquivo
    FILE *adicionar;
    adicionar = fopen("string1.txt", "a");
    if (adicionar == NULL)
    {
        printf("\nERRO AO ABRIR O ARQUIVO");
        system("pause");
        exit(1);
    }

    fprintf(adicionar, "primeira linha do meu arquivo\n");

    
    fclose(adicionar);
}