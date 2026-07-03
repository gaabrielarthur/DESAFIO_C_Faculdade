#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    // lendo dados no arquivo string.txt
    FILE *ler;
    ler = fopen("string.txt", "r");
    if (ler == NULL)
    {
        printf("\n ERRO AO ABRIR O ARQUIVO");
        system("pause");
        exit(1);
    }

    char nome[100];
    while (fgets(nome, 100, ler) != NULL)
    {
        printf("%s", nome);
    }

    fclose(ler);

    return 0;
}