#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#define MAX 6
/*
Crie uma estrutura representando os alunos de um determinado curso. A estrutura deve conter
a matrícula do aluno, nome, nota da primeira prova, nota da segunda prova e nota da terceira
prova.

a. Permita ao usuário entrar com os dados de 5 alunos.
b.Encontre o aluno com maior nota da primeira prova.
c. Encontre o aluno com maior média geral.
d.Encontre o aluno com menor média geral.
e. Para cada aluno diga se ele foi aprovado ou reprovado, considerando o valor 6 para
aprovação.
*/

struct aluno
{
    int matricula;
    char nome[50];
    float nota1;
    float nota2;
    float nota3;
};

int main()
{
    struct aluno A[MAX];

    int i;
    for (i = 0; i < MAX; i++)
    {
        printf("\nALUNO %d\n", i + 1);
        printf("\nNUMERO DE MATRICULA: ");
        scanf("%d", &A[i].matricula);

        printf("\nDIGITE SEU NOME: ");
        scanf(" %[^\n]", A[i].nome);
        getchar();

        printf("\nNOTA 1: ");
        scanf("%f", &A[i].nota1);

        printf("\nNOTA 2: ");
        scanf("%f", &A[i].nota2);

        printf("\nNOTA 3: ");
        scanf("%f", &A[i].nota3);
    }
    // maior nota
    int notaMaior = 0;
    for (int i = 1; i < MAX; i++)
    {
        if (A[i].nota1 > A[notaMaior].nota1)
        {
            notaMaior = i;
        }
    }
    // exibe aluno com maior nota
    printf("\n\n=== RESULTADO ===\n");
    printf("\nALUNO COM MAIOR NOTA NA PORVA 1:\n");
    printf("\nMatricula: %d", A[notaMaior].matricula);
    printf("\nNome: %s", A[notaMaior].nome);
    printf("\nNota da primeira prova: %.2f", A[notaMaior].nota1);

    // maior media
    int indiceMaior = 0;

    float mediaMaior = (A[0].nota1 + A[0].nota2 + A[0].nota3) / 3;

    for (int i = 1; i < MAX; i++)
    {
        float mediaAtual = (A[i].nota1 + A[i].nota2 + A[i].nota3) / 3;

        if (mediaAtual > mediaMaior)
        {
            mediaMaior = mediaAtual;
            indiceMaior = i;
        }
    }

    printf("\n\n=== ALUNO COM MAIOR MEDIA ===\n");
    printf("Matricula: %d\n", A[indiceMaior].matricula);
    printf("Nome: %s\n", A[indiceMaior].nome);
    printf("Media: %.2f\n", mediaMaior);

    // menor media
    int indiceMenor = 0;

    float mediaMenor = (A[0].nota1 + A[0].nota2 + A[0].nota3) / 3;

    for (int i = 0; i < MAX; i++)
    {
        float mediaAtual = (A[i].nota1 + A[i].nota2 + A[i].nota3) / 3;

        if (mediaAtual < mediaMenor)
        {
            mediaMenor = mediaAtual;
            indiceMenor = i;
        }
    }

    printf("\n\n=== ALUNO COM MENOR MEDIA ===\n");
    printf("Matricula: %d\n", A[indiceMenor].matricula);
    printf("Nome: %s\n", A[indiceMenor].nome);
    printf("Media: %.2f\n", mediaMenor);

    // ALUNOS APROVADOS OU NÃO
    printf("\n\n=== SITUACAO DOS ALUNOS ===\n");

    for (int i = 0; i < MAX; i++)
    {
        float media = (A[i].nota1 + A[i].nota2 + A[i].nota3) / 3;

        printf("\nAluno: %s\n", A[i].nome);
        printf("Matricula: %d\n", A[i].matricula);
        printf("Media: %.2f\n", media);

        if (media >= 6)
        {
            printf("\nSituacao: APROVADO\n");
        }
        else
        {
            printf("\nSituacao: REPROVADO\n");
        }
    }

    return 0;
}