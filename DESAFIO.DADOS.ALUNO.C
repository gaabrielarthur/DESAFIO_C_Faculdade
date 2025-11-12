#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*

Crie uma estrutura chamada Aluno com os campos nome,
matricula e nota. Leia e exiba os dados de 3 alunos.

Adapte o exercício anterior para armazenar os alunos em um
vetor e calcular a média das notas

*/
struct aluno
{
    char nome[50];
    int matricula;
    float nota;
};
int main()
{
    struct aluno A[3];

    for (int i = 0; i < 3; i++)
    {
        printf("\n_______ALUNO  %d________", i + 1);

        printf("\nDigite seu nome: ");
        scanf("%[^\n]%c", &A[i].nome);

        printf("\nDigite o numero da sua matricula:");
        scanf("%d", &A[i].matricula);

        printf("\nDigite sua nota:");
        scanf("%f", &A[i].nota);
        getchar(); // limpa o enter para o proxima leitura de string
    }
    printf("\n\n");

    for (int i = 0; i < 3; i++)
    {
        printf("\n____________DADOS DOS ALUNOS %d______________\n", i + 1);
        printf("\nNOME:%s\n", A[i].nome);
        printf("\nNUMERO DA MATRICULA:%d\n", A[i].matricula);
        printf("\nNOTA:%.2f\n", A[i].nota);
    }
    

    return 0;
}
