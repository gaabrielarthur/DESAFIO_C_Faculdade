#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#define MAX 2

/*
Faça um programa que leia um vetor com os dados de 5 carros: marca (máximo 15 letras), ano
e preço. Leia um valor p e mostre as informações de todos os carros com preço menor que p.
Repita este processo até que seja lido um valor p = 0.
*/
struct carro
{
    char marca[16];
    int ano;
    float preco;
};

int main()
{
    struct carro CAR[MAX];
    int i;
    for (i = 0; i < MAX; i++)
    {
        printf("\n\nPREENCHA DADOS DO CARRO %d\n", i + 1);
        printf("\nMARCA DO CARRO: ");
        scanf(" %[^\n]", CAR[i].marca);

        printf("\nANO DO CARRO: ");
        scanf(" %d", &CAR[i].ano);
        getchar();

        printf("\nVALOR DA FIPE: ");
        scanf(" %f", &CAR[i].preco);
    }

    float p;

    do
    {
        printf("\n\nDIGITE UM VALOR PARA P: ");
        scanf("%f", &p);

        if (p != 0)
        {
            printf("\n\nCARROS COM VALOR MENOR QUE %.2f: ", p);
        }
        for (int i = 0; i < MAX; i++)
        {
            if (CAR[i].preco < p)
            {
                printf("\nMARCA: %s", CAR[i].marca);
                printf("\nANO: %d", CAR[i].ano);
                printf("\nVALOR: R$%.3f\n", CAR[i].preco);
            }
        }

    } while (p != 0);

    return 0;
}