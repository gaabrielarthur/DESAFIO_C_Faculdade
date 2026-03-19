#include <stdio.h>
#include <stdio.h>
#include <string.h>
#define MAX 6
/*
a um programa que gerencie o estoque de um mercado e:
• Crie e leia um vetor de 5 produtos, com os dados: código (inteiro), nome (máximo 15 letras),
preço e quantidade.

• Leia um pedido, composto por um código de produto e a quantidade. Localize este código no
vetor e, se houver quantidade suficiente para atender ao pedido integralmente, atualize o
estoque e informe o usuário. Repita este processo até ler um código igual a zero.
Se por algum motivo não for possível atender ao pedido, mostre uma mensagem informando
qual erro ocorreu. 
*/

typedef struct
{
    int codigo;
    char nome[16];
    float preco;
    int quatidade;
} produto;

int main()
{
    produto produtos[MAX];
    int i = 0;
    for (i = 0; i < MAX; i++)
    {
        printf("\nDIGITE O PRODUTO %d\n", i + 1);
        printf("\nCODIGO: ");
        scanf("%d", &produtos[i].codigo);
        getchar();

        printf("\nNOME: ");
        scanf("%[^\n]", &produtos[i].nome);
        getchar();

        printf("\nPRECO: ");
        scanf("%f", &produtos[i].preco);
        getchar();

        printf("\nDIGITE A QUANTIDADE: ");
        scanf("%d", &produtos[i].quatidade);
        getchar();

    }
    int cod, qtd, encontrado;
    do
    {
        printf("\nDigite o codigo do produto: ");
        scanf("%d", &cod);
        if (cod == 0)
            break;

        printf("Quantidade desejada: ");
        scanf("%d", &qtd);

        encontrado = 0;

        for (int i = 0; i < MAX; i++)
        {
            if (produtos[i].codigo == cod)
            {
                encontrado = 1;
                if (produtos[i].quatidade >= qtd)
                {
                    produtos[i].quatidade -= qtd;
                    printf("pedido atendido ! estoque atualizado. \n");
                }
                else
                {
                    printf("Erro: estoque insuficiente!\n   ");
                }
                break;
            }
        }
        if (!encontrado)
        {
            printf("Erro: produto nao encontrado ! \n");
        }

    } while (cod != 0);

    return 0;
}