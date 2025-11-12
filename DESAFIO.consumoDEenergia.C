#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
a) Faça um programa que controla o consumo de energia dos eletrodomésticos de uma casa e:
 • Crie e leia 5 eletrodomésticos que contém nome (máximo 15 letras), potência (real em kW) e tempo ativo por dia (real, em horas).
 • Leia um tempo t (em dias), calcule e mostre o consumo total na casa e o consumo relativo de cada eletrodoméstico 
(consumo/consumo total) nesse período de tempo. Apresente este último dado em porcentagem.

*/

typedef struct Eletrodomestico
{
    char nome[16];
    float potencia; // em kW
    float tempo;    // horas por dia
    float consumo;
} teletro;

void apaga()
{
    int A;
    while ((A = getchar()) != '\n' && A != EOF)
        ;
}

int main()
{
    teletro Eletrodomestico[5];
    int i;
    float tempo_total, consumo_total = 0;
    float tempoEMdias;

    for (i = 0; i < 5; i++)
    {
        while (1)
        {
            printf("Digite o nome do eletrodomestico %d: ", i + 1);
            if (fgets(Eletrodomestico[i].nome, 16, stdin) != NULL)
            {
                Eletrodomestico[i].nome[strcspn(Eletrodomestico[i].nome, "\n")] = '\0';
                if (strlen(Eletrodomestico[i].nome) > 0 && strlen(Eletrodomestico[i].nome) <= 15)
                {
                    break;
                }
            }
            printf("ERRO, tamanho invalido, nome entre(1 a 15 caracteres\n )");
            apaga();
        }
        while (1)
        {

            printf("Digite a potencia (kW): ");
            if (scanf("%f", &Eletrodomestico[i].potencia) == 1 && Eletrodomestico[i].potencia > 0)
            {
                apaga();
                break;
            }
            printf("ERRO, potencia tem quer ser maior que 0\n");
            apaga();
        }
        while (1)
        {

            printf("Digite o tempo em horas: ");
            if (scanf("%f", &Eletrodomestico[i].tempo) == 1 && Eletrodomestico[i].tempo > 0)
            {
                apaga();
                break;
            }
            printf("ERRO, Tempo tem quer ser maior que 0\n");
            apaga();
        }
    }
    while (1)
    {

        printf("Digite quantos dias ele está ativo:\n ");
        if (scanf("%f", &tempoEMdias) == 1 && tempoEMdias > 0)
        {
            apaga();
            break;
        }
        printf("ERRO, TEMPO EM DIAS tem quer ser maior que 0\n");
        apaga();
    }

    for (i = 0; i < 5; i++)
    {
        Eletrodomestico[i].consumo = Eletrodomestico[i].potencia * Eletrodomestico[i].tempo * tempoEMdias;
        consumo_total += Eletrodomestico[i].consumo;
    }

    printf("\nConsumo total da casa: %.2f kWh\n", consumo_total);
    printf("Consumo relativo de cada eletrodomestico:\n");
    for (i = 0; i < 5; i++)
    {
        printf("%s: %.2f%%\n", Eletrodomestico[i].nome,(Eletrodomestico[i].consumo / consumo_total) * 100);
    }

    return 0;
}