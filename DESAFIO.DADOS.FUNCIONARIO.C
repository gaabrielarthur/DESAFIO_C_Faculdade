
/*
c) Faça um programa que armazene em um registro de dados (estrutura composta) os dados de um funcionário de uma empresa,
compostos de: Nome, Idade, Sexo M/(F), CPF, Data de Nascimento, Código do Setor onde trabalha (0- 99),
 cargo que ocupa (string de até 30 caracteres) e Salário.
Os dados devem ser digitados pelo usuário, armazenados na estrutura e exibidos na tela. Instruções:
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Registro
{
    char nome[50];
    int idade;
    char sexo;
    char CPF[15];
    int setor;
    char cargo[30];
    float salario;
};
int main()
{
    struct Registro R;

    printf("\nDigite seu nome:");
    scanf(" %[^\n]", R.nome);

    printf("\nDigite sua idade: ");
    scanf("%d", &R.idade);

    printf("\nDigite seu sexo(M/F):");
    scanf("%s", &R.sexo);

    printf("\nDigite seu CPF:");
    scanf("%s", R.CPF);

    printf("\nDigite seu setor ( 1 À 99): ");
    scanf("%d", &R.setor);

    printf("\nDigite seu cargo: ");
    scanf(" %[^\n]", R.cargo);

    printf("\nDigite seu salario: ");
    scanf("%f", &R.salario);

    printf("\n---------DADOS DO FUNCIONARIO-----------\n");
    printf("\nNOME: %s", R.nome);
    printf("\nIDADE: %d", R.idade);
    printf("\nSEXO: %c", R.sexo);
    printf("\nCPF: %s", R.CPF);
    printf("\nSETOR: %d", R.setor);
    printf("\nCARGO: %s", R.cargo);
    printf("\nSALARIO: %.2f", R.salario);

    return 0;
}
