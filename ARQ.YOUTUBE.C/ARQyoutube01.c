#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    // primeiro cria a função para acessar o arquivo
    // escreva dentro do arquivo aluno.txt
    FILE *p;

    p = fopen("alunos.txt", "w"); // estou acessando o arquivo com ponteiro, fopen para abri-lo ("nome.do.arq", "escrever");
    // testa agora
    if (p == NULL)
    {
        printf("\n erro ao acessar o arquivo");
        system("pause");
        exit(1);
    }

    fprintf(p, "fala copmigo jovem");

    return 0;
}